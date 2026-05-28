#include <string>
#include <vector>

#include <pcl/filters/voxel_grid.h>
#include <pcl/io/pcd_io.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl_conversions/pcl_conversions.h>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>

class PcdMapPublisher : public rclcpp::Node
{
public:
  PcdMapPublisher()
  : Node("pcd_map_publisher")
  {
    map_path_ = declare_parameter<std::string>("map_path", "");
    ground_path_ = declare_parameter<std::string>("ground_path", "");
    global_frame_ = declare_parameter<std::string>("global_frame", "map");
    map_topic_ = declare_parameter<std::string>("map_topic", "mapcloud");
    ground_topic_ = declare_parameter<std::string>("ground_topic", "mapground");
    map_leaf_size_ = declare_parameter<double>("map_leaf_size", 0.2);
    ground_leaf_size_ = declare_parameter<double>("ground_leaf_size", 0.3);

    const auto qos = rclcpp::QoS(rclcpp::KeepLast(1)).transient_local().reliable();
    map_pub_ = create_publisher<sensor_msgs::msg::PointCloud2>(map_topic_, qos);
    ground_pub_ = create_publisher<sensor_msgs::msg::PointCloud2>(ground_topic_, qos);

    publishCloud(map_path_, map_leaf_size_, map_pub_, "map");
    publishCloud(ground_path_, ground_leaf_size_, ground_pub_, "ground");
  }

private:
  void publishCloud(
    const std::string& path,
    double leaf_size,
    const rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr& pub,
    const std::string& label)
  {
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_xyz(new pcl::PointCloud<pcl::PointXYZ>);
    if (path.empty() || pcl::io::loadPCDFile<pcl::PointXYZ>(path, *cloud_xyz) == -1) {
      RCLCPP_ERROR(get_logger(), "Failed to load %s pcd: %s", label.c_str(), path.c_str());
      return;
    }

    if (leaf_size > 0.0) {
      pcl::VoxelGrid<pcl::PointXYZ> voxel;
      voxel.setInputCloud(cloud_xyz);
      voxel.setLeafSize(leaf_size, leaf_size, leaf_size);
      voxel.filter(*cloud_xyz);
    }

    pcl::PointCloud<pcl::PointXYZI>::Ptr cloud_xyzi(new pcl::PointCloud<pcl::PointXYZI>);
    pcl::copyPointCloud(*cloud_xyz, *cloud_xyzi);
    cloud_xyzi->is_dense = false;

    sensor_msgs::msg::PointCloud2 msg;
    pcl::toROSMsg(*cloud_xyzi, msg);
    msg.header.stamp = now();
    msg.header.frame_id = global_frame_;
    pub->publish(msg);

    RCLCPP_INFO(
      get_logger(), "Published %s pcd %s as %s with %zu points",
      label.c_str(), path.c_str(), pub->get_topic_name(), cloud_xyzi->size());
  }

  std::string map_path_;
  std::string ground_path_;
  std::string global_frame_;
  std::string map_topic_;
  std::string ground_topic_;
  double map_leaf_size_;
  double ground_leaf_size_;
  rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr map_pub_;
  rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr ground_pub_;
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PcdMapPublisher>());
  rclcpp::shutdown();
  return 0;
}
