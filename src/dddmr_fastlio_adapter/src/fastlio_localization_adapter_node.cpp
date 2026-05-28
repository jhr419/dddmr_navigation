#include <chrono>
#include <memory>
#include <string>
#include <vector>

#include <Eigen/Geometry>

#include <geometry_msgs/msg/pose_with_covariance_stamped.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl_conversions/pcl_conversions.h>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <tf2_eigen/tf2_eigen.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <tf2_ros/transform_broadcaster.h>

#ifdef USE_LIVOX_CUSTOM_MSG
#include <livox_ros_driver2/msg/custom_msg.hpp>
#endif

namespace
{

Eigen::Isometry3d poseToIsometry(const geometry_msgs::msg::Pose& pose)
{
  Eigen::Isometry3d tf = Eigen::Isometry3d::Identity();
  tf.translation() = Eigen::Vector3d(pose.position.x, pose.position.y, pose.position.z);
  Eigen::Quaterniond q(pose.orientation.w, pose.orientation.x, pose.orientation.y, pose.orientation.z);
  if (q.norm() > 1e-6) {
    tf.linear() = q.normalized().toRotationMatrix();
  }
  return tf;
}

geometry_msgs::msg::Pose isometryToPose(const Eigen::Isometry3d& tf)
{
  geometry_msgs::msg::Pose pose;
  pose.position.x = tf.translation().x();
  pose.position.y = tf.translation().y();
  pose.position.z = tf.translation().z();
  Eigen::Quaterniond q(tf.rotation());
  q.normalize();
  pose.orientation.x = q.x();
  pose.orientation.y = q.y();
  pose.orientation.z = q.z();
  pose.orientation.w = q.w();
  return pose;
}

Eigen::Isometry3d xyzRpyToIsometry(const std::vector<double>& xyz, const std::vector<double>& rpy)
{
  Eigen::Isometry3d tf = Eigen::Isometry3d::Identity();
  tf.translation() = Eigen::Vector3d(xyz.at(0), xyz.at(1), xyz.at(2));
  tf.linear() =
    (Eigen::AngleAxisd(rpy.at(2), Eigen::Vector3d::UnitZ()) *
     Eigen::AngleAxisd(rpy.at(1), Eigen::Vector3d::UnitY()) *
     Eigen::AngleAxisd(rpy.at(0), Eigen::Vector3d::UnitX()))
      .toRotationMatrix();
  return tf;
}

geometry_msgs::msg::TransformStamped makeTransform(
  const Eigen::Isometry3d& tf,
  const rclcpp::Time& stamp,
  const std::string& parent,
  const std::string& child)
{
  geometry_msgs::msg::TransformStamped msg;
  msg.header.stamp = stamp;
  msg.header.frame_id = parent;
  msg.child_frame_id = child;
  msg.transform = tf2::eigenToTransform(tf).transform;
  return msg;
}

}  // namespace

class FastLioLocalizationAdapter : public rclcpp::Node
{
public:
  FastLioLocalizationAdapter()
  : Node("fastlio_localization_adapter")
  {
    fastlio_odom_topic_ = declare_parameter<std::string>("fastlio_odom_topic", "/Odometry");
    dddmr_odom_topic_ = declare_parameter<std::string>("dddmr_odom_topic", "/odom");
    input_cloud_topic_ = declare_parameter<std::string>("input_cloud_topic", "/mid360_PointCloud2");
    input_cloud_type_ = declare_parameter<std::string>("input_cloud_type", "pointcloud2");
    dddmr_cloud_topic_ = declare_parameter<std::string>("dddmr_cloud_topic", "segmented_cloud_pure");
    icp_result_topic_ = declare_parameter<std::string>("icp_result_topic", "icp_result");

    map_frame_ = declare_parameter<std::string>("map_frame", "map");
    odom_frame_ = declare_parameter<std::string>("odom_frame", "odom");
    base_frame_ = declare_parameter<std::string>("base_frame", "base_link");
    output_cloud_frame_ = declare_parameter<std::string>("output_cloud_frame", "livox_frame");
    override_cloud_frame_ = declare_parameter<bool>("override_cloud_frame", true);

    publish_odom_tf_ = declare_parameter<bool>("publish_odom_tf", true);
    publish_initial_odom_tf_ = declare_parameter<bool>("publish_initial_odom_tf", true);
    publish_map_odom_tf_ = declare_parameter<bool>("publish_map_odom_tf", true);
    publish_initial_map_odom_tf_ = declare_parameter<bool>("publish_initial_map_odom_tf", true);

    const auto base_to_body_xyz =
      declare_parameter<std::vector<double>>("base_to_body_xyz", {0.3, 0.0, 0.38});
    const auto base_to_body_rpy =
      declare_parameter<std::vector<double>>("base_to_body_rpy", {0.0, 0.485596, 0.0});
    const auto base_to_sensor_xyz =
      declare_parameter<std::vector<double>>("base_to_sensor_xyz", {0.3, 0.0, 0.38});
    const auto base_to_sensor_rpy =
      declare_parameter<std::vector<double>>("base_to_sensor_rpy", {0.0, 0.485596, 0.0});

    if (base_to_body_xyz.size() != 3 || base_to_body_rpy.size() != 3 ||
        base_to_sensor_xyz.size() != 3 || base_to_sensor_rpy.size() != 3) {
      throw std::runtime_error("base_to_body/base_to_sensor xyz/rpy parameters must each contain 3 values");
    }

    base_to_body_ = xyzRpyToIsometry(base_to_body_xyz, base_to_body_rpy);
    base_to_sensor_ = xyzRpyToIsometry(base_to_sensor_xyz, base_to_sensor_rpy);

    const double initial_x = declare_parameter<double>("initial_x", 0.0);
    const double initial_y = declare_parameter<double>("initial_y", 0.0);
    const double initial_z = declare_parameter<double>("initial_z", 0.0);
    const double initial_roll = declare_parameter<double>("initial_roll", 0.0);
    const double initial_pitch = declare_parameter<double>("initial_pitch", 0.0);
    const double initial_yaw = declare_parameter<double>("initial_yaw", 0.0);
    map_to_odom_ = xyzRpyToIsometry(
      {initial_x, initial_y, initial_z}, {initial_roll, initial_pitch, initial_yaw});

    tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);
    odom_pub_ = create_publisher<nav_msgs::msg::Odometry>(dddmr_odom_topic_, 20);
    cloud_pub_ = create_publisher<sensor_msgs::msg::PointCloud2>(dddmr_cloud_topic_, 10);

    odom_sub_ = create_subscription<nav_msgs::msg::Odometry>(
      fastlio_odom_topic_, rclcpp::QoS(rclcpp::KeepLast(20)).best_effort(),
      std::bind(&FastLioLocalizationAdapter::odomCallback, this, std::placeholders::_1));

    if (input_cloud_type_ == "livox" || input_cloud_type_ == "custom_msg" ||
        input_cloud_type_ == "livox_custom_msg") {
#ifdef USE_LIVOX_CUSTOM_MSG
      livox_cloud_sub_ = create_subscription<livox_ros_driver2::msg::CustomMsg>(
        input_cloud_topic_, 10,
        std::bind(&FastLioLocalizationAdapter::livoxCloudCallback, this, std::placeholders::_1));
      RCLCPP_INFO(get_logger(), "Subscribing to Livox CustomMsg cloud: %s", input_cloud_topic_.c_str());
#else
      RCLCPP_ERROR(
        get_logger(),
        "input_cloud_type=%s requires livox_ros_driver2 at build time; no cloud subscription was created.",
        input_cloud_type_.c_str());
#endif
    } else {
      cloud_sub_ = create_subscription<sensor_msgs::msg::PointCloud2>(
        input_cloud_topic_, 10,
        std::bind(&FastLioLocalizationAdapter::cloudCallback, this, std::placeholders::_1));
      RCLCPP_INFO(get_logger(), "Subscribing to PointCloud2 cloud: %s", input_cloud_topic_.c_str());
    }

    icp_sub_ = create_subscription<geometry_msgs::msg::PoseWithCovarianceStamped>(
      icp_result_topic_, 10,
      std::bind(&FastLioLocalizationAdapter::icpCallback, this, std::placeholders::_1));

    tf_timer_ = create_wall_timer(
      std::chrono::milliseconds(100),
      std::bind(&FastLioLocalizationAdapter::publishTfLoop, this));

    RCLCPP_INFO(
      get_logger(),
      "Fast-LIO localization adapter: odom %s -> %s, cloud(%s) %s -> %s, icp=%s",
      fastlio_odom_topic_.c_str(), dddmr_odom_topic_.c_str(),
      input_cloud_type_.c_str(),
      input_cloud_topic_.c_str(), dddmr_cloud_topic_.c_str(), icp_result_topic_.c_str());
  }

private:
  void odomCallback(const nav_msgs::msg::Odometry::SharedPtr msg)
  {
    const Eigen::Isometry3d fastlio_odom_to_body = poseToIsometry(msg->pose.pose);
    latest_odom_to_base_ = fastlio_odom_to_body * base_to_body_.inverse();
    have_odom_ = true;

    nav_msgs::msg::Odometry out = *msg;
    out.header.stamp = msg->header.stamp;
    out.header.frame_id = odom_frame_;
    out.child_frame_id = base_frame_;
    out.pose.pose = isometryToPose(latest_odom_to_base_);
    odom_pub_->publish(out);

    if (publish_odom_tf_) {
      publishOdomBaseTf(msg->header.stamp);
    }
  }

  void cloudCallback(const sensor_msgs::msg::PointCloud2::SharedPtr msg)
  {
    sensor_msgs::msg::PointCloud2 out = *msg;
    if (override_cloud_frame_) {
      out.header.frame_id = output_cloud_frame_;
    }
    cloud_pub_->publish(out);
  }

#ifdef USE_LIVOX_CUSTOM_MSG
  void livoxCloudCallback(const livox_ros_driver2::msg::CustomMsg::SharedPtr msg)
  {
    pcl::PointCloud<pcl::PointXYZI> cloud;
    cloud.reserve(msg->point_num);

    for (const auto& livox_point : msg->points) {
      pcl::PointXYZI point;
      point.x = livox_point.x;
      point.y = livox_point.y;
      point.z = livox_point.z;
      point.intensity = static_cast<float>(livox_point.reflectivity);
      cloud.push_back(point);
    }

    cloud.width = cloud.size();
    cloud.height = 1;
    cloud.is_dense = false;

    sensor_msgs::msg::PointCloud2 out;
    pcl::toROSMsg(cloud, out);
    out.header.stamp = msg->header.stamp;
    out.header.frame_id = override_cloud_frame_ ? output_cloud_frame_ : msg->header.frame_id;
    cloud_pub_->publish(out);
  }
#endif

  void icpCallback(const geometry_msgs::msg::PoseWithCovarianceStamped::SharedPtr msg)
  {
    const Eigen::Isometry3d map_to_sensor = poseToIsometry(msg->pose.pose);
    const Eigen::Isometry3d map_to_base = map_to_sensor * base_to_sensor_.inverse();
    const Eigen::Isometry3d odom_to_base =
      have_odom_ ? latest_odom_to_base_ : Eigen::Isometry3d::Identity();

    map_to_odom_ = map_to_base * odom_to_base.inverse();
    have_map_odom_ = true;

    RCLCPP_INFO(
      get_logger(),
      "Updated %s -> %s from ICP result",
      map_frame_.c_str(), odom_frame_.c_str());
    publishMapOdomTf();
  }

  void publishMapOdomTf()
  {
    if (!publish_map_odom_tf_) {
      return;
    }
    if (!have_map_odom_ && !publish_initial_map_odom_tf_) {
      return;
    }
    tf_broadcaster_->sendTransform(
      makeTransform(map_to_odom_, now(), map_frame_, odom_frame_));
  }

  void publishOdomBaseTf(const rclcpp::Time& stamp)
  {
    if (!publish_odom_tf_) {
      return;
    }
    if (!have_odom_ && !publish_initial_odom_tf_) {
      return;
    }
    tf_broadcaster_->sendTransform(
      makeTransform(latest_odom_to_base_, stamp, odom_frame_, base_frame_));
  }

  void publishTfLoop()
  {
    const auto stamp = now();
    publishMapOdomTf();
    publishOdomBaseTf(stamp);
  }

  std::string fastlio_odom_topic_;
  std::string dddmr_odom_topic_;
  std::string input_cloud_topic_;
  std::string input_cloud_type_;
  std::string dddmr_cloud_topic_;
  std::string icp_result_topic_;
  std::string map_frame_;
  std::string odom_frame_;
  std::string base_frame_;
  std::string output_cloud_frame_;
  bool override_cloud_frame_;
  bool publish_odom_tf_;
  bool publish_initial_odom_tf_;
  bool publish_map_odom_tf_;
  bool publish_initial_map_odom_tf_;

  Eigen::Isometry3d base_to_body_ = Eigen::Isometry3d::Identity();
  Eigen::Isometry3d base_to_sensor_ = Eigen::Isometry3d::Identity();
  Eigen::Isometry3d latest_odom_to_base_ = Eigen::Isometry3d::Identity();
  Eigen::Isometry3d map_to_odom_ = Eigen::Isometry3d::Identity();
  bool have_odom_ = false;
  bool have_map_odom_ = false;

  std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
  rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_pub_;
  rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr cloud_pub_;
  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;
  rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr cloud_sub_;
#ifdef USE_LIVOX_CUSTOM_MSG
  rclcpp::Subscription<livox_ros_driver2::msg::CustomMsg>::SharedPtr livox_cloud_sub_;
#endif
  rclcpp::Subscription<geometry_msgs::msg::PoseWithCovarianceStamped>::SharedPtr icp_sub_;
  rclcpp::TimerBase::SharedPtr tf_timer_;
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<FastLioLocalizationAdapter>());
  rclcpp::shutdown();
  return 0;
}
