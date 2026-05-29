/**
 * @file sc_pgo_node.cpp
 * @brief SC-PGO 节点主文件
 *
 * 该节点实现基于 ScanContext 的回环检测和 GTSAM 位姿图优化，
 * 用于增强 Fast-LIO 的建图精度，修正累积漂移。
 *
 * 工作流程：
 * 1. 接收 Fast-LIO 的里程计和点云数据
 * 2. 定期保存关键帧及其 ScanContext
 * 3. 使用 ScanContext 检测回环
 * 4. 构建位姿图并进行优化
 * 5. 发布优化后的轨迹和地图
 *
 * @note 需要 GTSAM 库支持
 */

#include <rclcpp/rclcpp.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <nav_msgs/msg/path.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <visualization_msgs/msg/marker_array.hpp>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/filters/voxel_grid.h>
#include <pcl/common/transforms.h>
#include <pcl/registration/icp.h>
#include <tf2_ros/transform_broadcaster.h>
#include <tf2_ros/buffer.h>
#include <tf2_ros/transform_listener.h>
#include <tf2_eigen/tf2_eigen.hpp>

// GTSAM 相关头文件
#include <gtsam/geometry/Rot3.h>
#include <gtsam/geometry/Pose3.h>
#include <gtsam/slam/BetweenFactor.h>
#include <gtsam/slam/PriorFactor.h>
#include <gtsam/nonlinear/ISAM2.h>
#include <gtsam/nonlinear/NonlinearFactorGraph.h>
#include <gtsam/nonlinear/Values.h>
#include <gtsam/nonlinear/LevenbergMarquardtOptimizer.h>
#include <gtsam/nonlinear/Expression.h>
#include <gtsam/linear/NoiseModel.h>

#include <iostream>
#include <vector>
#include <memory>
#include <mutex>
#include <cmath>
#include <algorithm>
#include <limits>

#include "dddmr_sc_pgo/scan_context.h"

// 使用 ScanContextManager
using dddmr_sc_pgo::ScanContextManager;

// GTSAM 符号定义，'x' 表示位姿
using Symbol = gtsam::Symbol;
inline Symbol X(int key) { return Symbol('x', key); }

// 关键帧数据结构
struct KeyFrame
{
    int id;                                      // 关键帧 ID
    rclcpp::Time stamp;                          // 时间戳
    Eigen::Matrix4f pose;                        // 4x4 变换矩阵 [R|t]
    pcl::PointCloud<pcl::PointXYZI>::Ptr cloud; // 关键帧点云
    Eigen::MatrixXf scan_context;                 // ScanContext 描述子

    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
};

class SC_PGO_Node : public rclcpp::Node
{
public:
    /**
     * @brief 构造函数 - 初始化节点、参数、订阅者和发布者
     */
    SC_PGO_Node()
        : Node("sc_pgo_node")
        , odom_count_(0)
        , keyframe_id_(0)
        , is_initialized_(false)
    {
        // ==========================================
        // 参数声明和获取
        // ==========================================

        // ScanContext 参数
        this->declare_parameter<double>("sc_max_radius", 80.0);
        this->declare_parameter<int>("sc_num_rings", 20);
        this->declare_parameter<int>("sc_num_sectors", 60);
        this->declare_parameter<int>("sc_tree_depth", 20);
        this->declare_parameter<double>("sc_loop_threshold", 0.4);

        // 关键帧间隔
        this->declare_parameter<double>("keyframe_distance", 1.0);  // 米
        this->declare_parameter<double>("keyframe_angle", 10.0);       // 度

        // 回环检测参数
        this->declare_parameter<int>("loop_min_interval", 30);        // 回环检测最小间隔帧数
        this->declare_parameter<double>("loop_trans_threshold", 1.0);  // 平移阈值 (m)
        this->declare_parameter<double>("loop_rot_threshold", 30.0);   // 旋转阈值 (度)
        this->declare_parameter<double>("floor_height_threshold", 4.0);  // 楼层高度阈值 (m)

        // ICP 参数
        this->declare_parameter<double>("icp_max_corr_distance", 2.0);
        this->declare_parameter<int>("icp_max_iterations", 100);
        this->declare_parameter<double>("icp_max_error", 1.0);

        // 噪声模型参数
        this->declare_parameter<double>("odom_trans_noise", 0.1);
        this->declare_parameter<double>("odom_rot_noise", 0.05);
        this->declare_parameter<double>("loop_noise", 0.5);

        // 发布参数
        this->declare_parameter<double>("path_publish_interval", 0.5);

        // 坐标框架
        this->declare_parameter<std::string>("world_frame", "camera_init");
        this->declare_parameter<std::string>("body_frame", "body");

        // 获取参数
        double sc_max_radius = this->get_parameter("sc_max_radius").as_double();
        int sc_num_rings = this->get_parameter("sc_num_rings").as_int();
        int sc_num_sectors = this->get_parameter("sc_num_sectors").as_int();
        int sc_tree_depth = this->get_parameter("sc_tree_depth").as_int();

        // ==========================================
        // 初始化 ScanContext 管理器
        // ==========================================
        sc_manager_.setParam(sc_max_radius, sc_num_rings, sc_num_sectors, sc_tree_depth);

        RCLCPP_INFO(this->get_logger(),
            "ScanContext 参数: max_radius=%.1f, rings=%d, sectors=%d",
            sc_max_radius, sc_num_rings, sc_num_sectors);

        // ==========================================
        // 初始化 GTSAM iSAM2
        // ==========================================
        initISAM2();

        // ==========================================
        // 创建 TF 监听器
        // ==========================================
        tf_buffer_ = std::make_unique<tf2_ros::Buffer>(this->get_clock());
        tf_listener_ = std::make_unique<tf2_ros::TransformListener>(*tf_buffer_);
        tf_broadcaster_ = std::make_unique<tf2_ros::TransformBroadcaster>(*this);

        // ==========================================
        // 创建订阅者 - 接收 Fast-LIO 数据
        // ==========================================
        // 里程计订阅
        odom_sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
            "/odom", 100,
            std::bind(&SC_PGO_Node::odomCallback, this, std::placeholders::_1));

        // 点云订阅
        cloud_sub_ = this->create_subscription<sensor_msgs::msg::PointCloud2>(
            "/cloud", 10,
            std::bind(&SC_PGO_Node::cloudCallback, this, std::placeholders::_1));

        RCLCPP_INFO(this->get_logger(), "订阅话题: /odom, /cloud");

        // ==========================================
        // 创建发布者 - 发布优化后的结果
        // ==========================================
        // 优化后的里程计
        optimized_odom_pub_ = this->create_publisher<nav_msgs::msg::Odometry>(
            "/sc_pgo/optimized_odom", 20);

        // 优化后的路径
        optimized_path_pub_ = this->create_publisher<nav_msgs::msg::Path>(
            "/sc_pgo/optimized_path", 10);

        // 关键帧点云地图
        keyframes_map_pub_ = this->create_publisher<sensor_msgs::msg::PointCloud2>(
            "/sc_pgo/keyframes_map", 5);

        // 回环检测可视化
        loop_marker_pub_ = this->create_publisher<visualization_msgs::msg::MarkerArray>(
            "/sc_pgo/loop_markers", 10);

        // ==========================================
        // 初始化点云下采样滤波器
        // ==========================================
        downsample_filter_.setLeafSize(0.5, 0.5, 0.5);

        // ==========================================
        // 初始化路径消息
        // ==========================================
        optimized_path_.header.frame_id = this->get_parameter("world_frame").as_string();

        RCLCPP_INFO(this->get_logger(), "SC-PGO 节点初始化完成");
    }

private:
    /**
     * @brief 初始化 GTSAM iSAM2 优化器
     */
    void initISAM2()
    {
        // iSAM2 参数配置
        gtsam::ISAM2Params params;
        params.relinearizeThreshold = 0.01;   // 重新线性化阈值
        params.relinearizeSkip = 1;          // 每隔 1 次优化重新线性化

        // 使用 Dogleg 优化方法（比 Levenberg-Marquardt 更快）
        params.optimizationParams = gtsam::ISAM2DoglegParams();

        // 创建 iSAM2 实例
        isam_ = std::make_unique<gtsam::ISAM2>(params);

        // 初始化空的因子图和值
        graph_ = gtsam::NonlinearFactorGraph();
        initial_estimate_ = gtsam::Values();

        RCLCPP_INFO(this->get_logger(), "GTSAM iSAM2 初始化完成");
    }

    /**
     * @brief 里程计回调函数 - 处理 Fast-LIO 发布的里程计数据
     * @param msg 里程计消息
     */
    void odomCallback(const nav_msgs::msg::Odometry::SharedPtr msg)
    {
        std::lock_guard<std::mutex> lock(data_mutex_);

        // 获取当前位姿
        geometry_msgs::msg::Pose pose = msg->pose.pose;

        // 存储里程计用于关键帧判断
        last_odom_pose_ = pose;
        last_odom_time_ = msg->header.stamp;

        // 保存里程计用于增量因子添加
        Eigen::Matrix4f current_pose = odometryToMatrix(msg);
        odom_buffer_.push_back({msg->header.stamp, current_pose});

        // 检查是否需要创建新的关键帧
        if (needNewKeyframe(pose))
        {
            // 这里只记录需要创建关键帧的里程计
            // 实际关键帧创建在 cloudCallback 中进行（因为需要点云）
            pending_keyframe_odom_ = current_pose;
            pending_keyframe_stamp_ = msg->header.stamp;
        }

        odom_count_++;

        // 定期输出状态
        if (odom_count_ % 500 == 0)
        {
            RCLCPP_INFO(this->get_logger(),
                "已接收 %d 个里程计数据, %zu 个关键帧",
                odom_count_, keyframes_.size());
        }
    }

    /**
     * @brief 点云回调函数 - 处理 Fast-LIO 发布的点云数据
     * @param msg 点云消息
     */
    void cloudCallback(const sensor_msgs::msg::PointCloud2::SharedPtr msg)
    {
        std::lock_guard<std::mutex> lock(data_mutex_);

        // 转换点云格式
        pcl::PointCloud<pcl::PointXYZI>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZI>());
        pcl::fromROSMsg(*msg, *cloud);

        // 检查是否有待处理的关键帧创建请求
        if (pending_keyframe_odom_.has_value())
        {
            createKeyFrame(cloud, pending_keyframe_odom_.value(), pending_keyframe_stamp_);
            pending_keyframe_odom_.reset();
        }

        // 更新 ScanContext（用于回环检测）
        // 这里记录最新的点云用于可能的回环
        latest_cloud_ = cloud;
    }

    /**
     * @brief 判断是否需要创建新的关键帧
     * @param current_pose 当前位姿
     * @return 是否需要创建新关键帧
     */
    bool needNewKeyframe(const geometry_msgs::msg::Pose& current_pose)
    {
        if (!last_keyframe_pose_.has_value())
        {
            return true;
        }

        // 计算与上一关键帧的距离
        double dx = current_pose.position.x - last_keyframe_pose_.value().position.x;
        double dy = current_pose.position.y - last_keyframe_pose_.value().position.y;
        double dz = current_pose.position.z - last_keyframe_pose_.value().position.z;
        double distance = std::sqrt(dx*dx + dy*dy + dz*dz);

        // 计算角度差
        double dqx = current_pose.orientation.x - last_keyframe_pose_.value().orientation.x;
        double dqy = current_pose.orientation.y - last_keyframe_pose_.value().orientation.y;
        double dqz = current_pose.orientation.z - last_keyframe_pose_.value().orientation.z;
        double dqw = current_pose.orientation.w - last_keyframe_pose_.value().orientation.w;
        double angle_diff = std::sqrt(dqx*dqx + dqy*dqy + dqz*dqz + dqw*dqw) * 2.0;  // 近似

        // 获取参数
        double keyframe_distance = this->get_parameter("keyframe_distance").as_double();
        double keyframe_angle = this->get_parameter("keyframe_angle").as_double();

        // 判断条件：距离超过阈值或角度变化超过阈值
        if (distance > keyframe_distance ||
            angle_diff > keyframe_angle * M_PI / 180.0)
        {
            last_keyframe_pose_ = current_pose;
            return true;
        }

        return false;
    }

    /**
     * @brief 创建新的关键帧
     * @param cloud 关键帧点云
     * @param pose 关键帧位姿
     * @param stamp 时间戳
     */
    void createKeyFrame(
        const pcl::PointCloud<pcl::PointXYZI>::Ptr& cloud,
        const Eigen::Matrix4f& pose,
        const rclcpp::Time& stamp)
    {
        // 下采样关键帧点云
        pcl::PointCloud<pcl::PointXYZI>::Ptr downsampled_cloud(
            new pcl::PointCloud<pcl::PointXYZI>());
        downsample_filter_.setInputCloud(cloud);
        downsample_filter_.filter(*downsampled_cloud);

        // 创建关键帧
        auto keyframe = std::make_shared<KeyFrame>();
        keyframe->id = keyframe_id_;
        keyframe->stamp = stamp;
        keyframe->pose = pose;
        keyframe->cloud = downsampled_cloud;

        // 计算并保存 ScanContext
        keyframe->scan_context = sc_manager_.makeAndSaveScanContext(downsampled_cloud);

        // 添加到关键帧列表
        keyframes_.push_back(keyframe);
        keyframe_id_++;

        // 添加里程计因子到因子图
        addOdomFactor(keyframe);

        // 检测回环
        detectLoop();

        // 运行优化
        runOptimization();

        // 发布结果
        publishResults();

        RCLCPP_DEBUG(this->get_logger(),
            "创建关键帧 #%d, 点数: %zu",
            keyframe->id, downsampled_cloud->size());
    }

    /**
     * @brief 添加里程计因子（相邻关键帧之间的约束）
     * @param keyframe 新添加的关键帧
     */
    void addOdomFactor(const std::shared_ptr<KeyFrame>& keyframe)
    {
        if (keyframes_.size() < 2)
        {
            // 第一个关键帧：添加先验因子
            gtsam::Pose3 pose = matrixToPose3(keyframe->pose);

            // 先验噪声（初始位姿已知）
            auto prior_noise = gtsam::noiseModel::Diagonal::Sigmas(
                (gtsam::Vector(6) << 0.001, 0.001, 0.001, 0.001, 0.001, 0.001).finished());

            graph_.add(gtsam::PriorFactor<gtsam::Pose3>(
                X(keyframe->id), pose, prior_noise));

            // 添加初始估计
            initial_estimate_.insert(X(keyframe->id), pose);

            return;
        }

        // 计算与前一关键帧的相对变换
        auto prev_keyframe = keyframes_[keyframes_.size() - 2];
        Eigen::Matrix4f relative_pose = prev_keyframe->pose.inverse() * keyframe->pose;
        gtsam::Pose3 relative = matrixToPose3(relative_pose);

        // 里程计噪声模型
        double trans_noise = this->get_parameter("odom_trans_noise").as_double();
        double rot_noise = this->get_parameter("odom_rot_noise").as_double();
        auto odom_noise = gtsam::noiseModel::Diagonal::Sigmas(
            (gtsam::Vector(6) << rot_noise, rot_noise, rot_noise,
             trans_noise, trans_noise, trans_noise).finished());

        // 添加里程计因子
        graph_.add(gtsam::BetweenFactor<gtsam::Pose3>(
            X(prev_keyframe->id), X(keyframe->id), relative, odom_noise));

        // 添加初始估计（使用里程计估计作为初始值）
        gtsam::Pose3 current_estimate = matrixToPose3(keyframe->pose);
        initial_estimate_.insert(X(keyframe->id), current_estimate);
    }

    /**
     * @brief 检测回环
     */
    void detectLoop()
    {
        int loop_min_interval = this->get_parameter("loop_min_interval").as_int();
        double sc_loop_threshold = this->get_parameter("sc_loop_threshold").as_double();

        // 至少需要一定数量的关键帧才能检测回环
        if (static_cast<int>(keyframes_.size()) < loop_min_interval + 10)
        {
            return;
        }

        // 使用 ScanContext 检测回环
        auto [loop_candidate, score] = sc_manager_.detectLoopClosureID();

        if (loop_candidate >= 0 && score > sc_loop_threshold)
        {
            RCLCPP_INFO(this->get_logger(),
                "检测到回环: 关键帧 #%d <-> #%d, 得分: %.3f (阈值: %.2f)",
                loop_candidate, keyframes_.back()->id, score, sc_loop_threshold);

            // 添加回环因子
            addLoopFactor(loop_candidate, static_cast<int>(keyframes_.back()->id));
        }
    }

    /**
     * @brief 添加回环因子
     * @param prev_id 之前访问过的关键帧 ID
     * @param curr_id 当前关键帧 ID
     *
     * @note 使用 ICP 验证回环候选并计算精确的相对变换
     */
    void addLoopFactor(int prev_id, int curr_id)
    {
        // 获取两个关键帧的位姿
        auto prev_keyframe = keyframes_[prev_id];
        auto curr_keyframe = keyframes_[curr_id];

        // 楼层检查：只接受同楼层的回环
        // ==========================================
        double prev_z = prev_keyframe->pose(2, 3);
        double curr_z = curr_keyframe->pose(2, 3);
        double floor_diff = std::abs(prev_z - curr_z);

        // Z 差异阈值 - 收紧到 1.0m，拒绝跨楼层回环
        double floor_diff_threshold = 1.0;
        if (floor_diff > floor_diff_threshold)
        {
            return;
        }

        // 使用 ICP 计算两个关键帧之间的相对变换
        Eigen::Matrix4f relative_pose;
        double icp_mean_error = 1e6;  // 均方误差，越小越好

        if (!performICPVerification(prev_keyframe, curr_keyframe, relative_pose, icp_mean_error))
        {
            RCLCPP_WARN(this->get_logger(),
                "ICP 验证失败，跳过回环: #%d <-> #%d",
                prev_id, curr_id);
            return;
        }

        // 检查 ICP 均方误差 - 值越小越好
        // 从配置读取 ICP 误差阈值
        double icp_max_error = this->get_parameter("icp_max_error").as_double();
        if (icp_mean_error > icp_max_error)
        {
            RCLCPP_WARN(this->get_logger(),
                "ICP 匹配质量差，跳过回环: #%d <-> #%d (error: %.3f > %.1f)",
                prev_id, curr_id, icp_mean_error, icp_max_error);
            return;
        }

        // 额外检查：下楼过程中的回环过滤
        // 当 Z 变化较大且帧间隔不大时，很可能是下楼过程中的误匹配
        // 下楼时 Z 逐渐变化，ScanContext 可能匹配到相近但不同楼层的点云
        int time_gap = curr_id - prev_id;
        if (floor_diff > 0.3 && time_gap < 100)
        {
            return;
        }

        gtsam::Pose3 relative = matrixToPose3(relative_pose);

        // 根据 ICP 质量调整回环噪声
        double loop_noise_base = this->get_parameter("loop_noise").as_double();
        double error_ratio = std::min(icp_mean_error / 1.0, 2.0);
        double loop_noise = loop_noise_base * error_ratio;

        auto loop_noise_model = gtsam::noiseModel::Diagonal::Sigmas(
            (gtsam::Vector(6) << loop_noise, loop_noise, loop_noise,
             loop_noise, loop_noise, loop_noise).finished());

        // 添加闭环因子
        graph_.add(gtsam::BetweenFactor<gtsam::Pose3>(
            X(prev_id), X(curr_id), relative, loop_noise_model));

        // 记录回环对
        loop_pairs_.push_back({prev_id, curr_id});

        RCLCPP_INFO(this->get_logger(),
            "同楼层回环: #%d (z=%.2f) <-> #%d (z=%.2f), error=%.3f",
            prev_id, prev_z, curr_id, curr_z, icp_mean_error);
    }

    /**
     * @brief 使用 ICP 验证回环候选并计算相对变换
     * @param prev_keyframe 之前的关键帧
     * @param curr_keyframe 当前关键帧
     * @param relative_pose 输出：相对变换矩阵
     * @param mean_error 输出：ICP 均方误差（越小越好）
     * @return 是否验证成功
     */
    bool performICPVerification(
        const std::shared_ptr<KeyFrame>& prev_keyframe,
        const std::shared_ptr<KeyFrame>& curr_keyframe,
        Eigen::Matrix4f& relative_pose,
        double& mean_error)
    {
        // 获取 ICP 参数
        double max_corr_distance = this->get_parameter("icp_max_corr_distance").as_double();
        int max_iterations = this->get_parameter("icp_max_iterations").as_int();

        // 大幅扩大 ICP 对应距离，因为关键帧可能有较大漂移
        double icp_max_distance = std::max(max_corr_distance * 5.0, 5.0);

        // 创建 ICP 对象
        pcl::IterativeClosestPoint<pcl::PointXYZI, pcl::PointXYZI> icp;
        icp.setMaxCorrespondenceDistance(icp_max_distance);
        icp.setMaximumIterations(max_iterations);
        icp.setTransformationEpsilon(1e-8);
        icp.setEuclideanFitnessEpsilon(1e-6);

        // 关键：将两个关键帧点云都转换到世界坐标系
        // 然后在世界坐标系下进行 ICP 匹配

        // 转换到世界坐标系
        pcl::PointCloud<pcl::PointXYZI>::Ptr prev_cloud_world(
            new pcl::PointCloud<pcl::PointXYZI>());
        pcl::PointCloud<pcl::PointXYZI>::Ptr curr_cloud_world(
            new pcl::PointCloud<pcl::PointXYZI>());

        pcl::transformPointCloud(*prev_keyframe->cloud, *prev_cloud_world, prev_keyframe->pose);
        pcl::transformPointCloud(*curr_keyframe->cloud, *curr_cloud_world, curr_keyframe->pose);

        // 设置 ICP 输入
        // 使用当前帧作为源，目标帧作为参考
        icp.setInputSource(curr_cloud_world);
        icp.setInputTarget(prev_cloud_world);

        // 运行 ICP（不需要初始变换，因为在同一坐标系下）
        pcl::PointCloud<pcl::PointXYZI> aligned_cloud;
        icp.align(aligned_cloud);

        if (!icp.hasConverged())
        {
            return false;
        }

        // 获取均方误差（getFitnessScore 返回对应点的均方误差，越小越好）
        mean_error = icp.getFitnessScore();

        // 计算相对变换：世界坐标系下 curr -> prev
        // ICP 返回的是 curr_cloud_world -> aligned_cloud 的变换
        relative_pose = icp.getFinalTransformation();

        return true;
    }

    /**
     * @brief 运行 iSAM2 优化
     */
    void runOptimization()
    {
        if (graph_.size() < 1 || initial_estimate_.size() < 1)
        {
            return;
        }

        // 执行 iSAM2 更新
        isam_->update(graph_, initial_estimate_);

        // 获取优化结果
        optimized_values_ = isam_->calculateEstimate();

        // 清空因子图和初始估计（为下一次更新做准备）
        graph_.resize(0);
        initial_estimate_.clear();
    }

    /**
     * @brief 发布优化结果
     */
    void publishResults()
    {
        if (optimized_values_.empty())
        {
            return;
        }

        // 获取最新优化位姿
        int latest_id = keyframes_.back()->id;
        gtsam::Pose3 latest_pose = optimized_values_.at<gtsam::Pose3>(X(latest_id));

        // 发布优化后的里程计
        publishOptimizedOdom(latest_id, latest_pose);

        // 发布优化后的路径
        publishOptimizedPath();

        // 发布关键帧地图
        publishKeyframesMap();

        // 发布回环可视化
        publishLoopMarkers();
    }

    /**
     * @brief 发布优化后的里程计
     */
    void publishOptimizedOdom(int id, const gtsam::Pose3& pose)
    {
        nav_msgs::msg::Odometry odom;
        odom.header.stamp = this->now();
        odom.header.frame_id = world_frame_;
        odom.child_frame_id = body_frame_;
        odom.twist.twist.linear.x = 0;
        odom.twist.twist.linear.y = 0;
        odom.twist.twist.linear.z = 0;
        odom.twist.twist.angular.x = 0;
        odom.twist.twist.angular.y = 0;
        odom.twist.twist.angular.z = 0;

        // 设置位姿
        odom.pose.pose.position.x = pose.x();
        odom.pose.pose.position.y = pose.y();
        odom.pose.pose.position.z = pose.z();

        // 使用 toQuaternion() 替代 deprecated 的 quaternion()
        Eigen::Quaterniond quat = pose.rotation().toQuaternion();
        odom.pose.pose.orientation.x = quat.x();
        odom.pose.pose.orientation.y = quat.y();
        odom.pose.pose.orientation.z = quat.z();
        odom.pose.pose.orientation.w = quat.w();

        optimized_odom_pub_->publish(odom);
    }

    /**
     * @brief 发布优化后的路径
     */
    void publishOptimizedPath()
    {
        if (optimized_values_.empty())
        {
            return;
        }

        optimized_path_.header.stamp = this->now();

        // 添加所有关键帧的位姿到路径
        for (const auto& keyframe : keyframes_)
        {
            if (optimized_values_.exists(X(keyframe->id)))
            {
                gtsam::Pose3 pose = optimized_values_.at<gtsam::Pose3>(X(keyframe->id));

                geometry_msgs::msg::PoseStamped pose_stamped;
                pose_stamped.header = optimized_path_.header;
                pose_stamped.pose.position.x = pose.x();
                pose_stamped.pose.position.y = pose.y();
                pose_stamped.pose.position.z = pose.z();

                Eigen::Quaterniond quat = pose.rotation().toQuaternion();
                pose_stamped.pose.orientation.x = quat.x();
                pose_stamped.pose.orientation.y = quat.y();
                pose_stamped.pose.orientation.z = quat.z();
                pose_stamped.pose.orientation.w = quat.w();

                optimized_path_.poses.push_back(pose_stamped);
            }
        }

        // 只保留最近的路径点（避免内存溢出）
        const size_t max_path_size = 1000;
        if (optimized_path_.poses.size() > max_path_size)
        {
            optimized_path_.poses.erase(
                optimized_path_.poses.begin(),
                optimized_path_.poses.end() - max_path_size);
        }

        optimized_path_pub_->publish(optimized_path_);
    }

    /**
     * @brief 发布关键帧点云地图
     */
    void publishKeyframesMap()
    {
        pcl::PointCloud<pcl::PointXYZI>::Ptr map_cloud(
            new pcl::PointCloud<pcl::PointXYZI>());

        for (const auto& keyframe : keyframes_)
        {
            if (!optimized_values_.exists(X(keyframe->id)))
            {
                continue;
            }

            // 获取优化后的位姿
            gtsam::Pose3 pose = optimized_values_.at<gtsam::Pose3>(X(keyframe->id));
            Eigen::Matrix4f transform = pose3ToMatrix(pose);

            // 变换点云
            pcl::PointCloud<pcl::PointXYZI>::Ptr transformed_cloud(
                new pcl::PointCloud<pcl::PointXYZI>());
            pcl::transformPointCloud(*keyframe->cloud, *transformed_cloud, transform);

            *map_cloud += *transformed_cloud;
        }

        // 下采样以减少数据量
        pcl::PointCloud<pcl::PointXYZI>::Ptr downsampled_map(
            new pcl::PointCloud<pcl::PointXYZI>());
        pcl::VoxelGrid<pcl::PointXYZI> voxel_filter;
        voxel_filter.setLeafSize(1.0, 1.0, 1.0);
        voxel_filter.setInputCloud(map_cloud);
        voxel_filter.filter(*downsampled_map);

        // 发布
        sensor_msgs::msg::PointCloud2 msg;
        pcl::toROSMsg(*downsampled_map, msg);
        msg.header.stamp = this->now();
        msg.header.frame_id = world_frame_;

        keyframes_map_pub_->publish(msg);
    }

    /**
     * @brief 发布回环可视化标记
     */
    void publishLoopMarkers()
    {
        visualization_msgs::msg::MarkerArray markers;

        int marker_id = 0;
        for (const auto& loop_pair : loop_pairs_)
        {
            if (!optimized_values_.exists(X(loop_pair.first)) ||
                !optimized_values_.exists(X(loop_pair.second)))
            {
                continue;
            }

            gtsam::Pose3 pose1 = optimized_values_.at<gtsam::Pose3>(X(loop_pair.first));
            gtsam::Pose3 pose2 = optimized_values_.at<gtsam::Pose3>(X(loop_pair.second));

            visualization_msgs::msg::Marker marker;
            marker.header.stamp = this->now();
            marker.header.frame_id = world_frame_;
            marker.ns = "loops";
            marker.id = marker_id++;
            marker.type = visualization_msgs::msg::Marker::LINE_LIST;
            marker.action = visualization_msgs::msg::Marker::ADD;

            geometry_msgs::msg::Point p1, p2;
            p1.x = pose1.x(); p1.y = pose1.y(); p1.z = pose1.z();
            p2.x = pose2.x(); p2.y = pose2.y(); p2.z = pose2.z();
            marker.points.push_back(p1);
            marker.points.push_back(p2);

            marker.scale.x = 0.2;  // 线宽
            marker.color.r = 1.0;
            marker.color.g = 0.0;
            marker.color.b = 0.0;
            marker.color.a = 1.0;

            markers.markers.push_back(marker);
        }

        loop_marker_pub_->publish(markers);
    }

    /**
     * @brief 将 nav_msgs::Odometry 转换为 Eigen::Matrix4f
     */
    Eigen::Matrix4f odometryToMatrix(const nav_msgs::msg::Odometry::SharedPtr& odom)
    {
        const auto& p = odom->pose.pose.position;
        const auto& q = odom->pose.pose.orientation;

        Eigen::Matrix4f matrix = Eigen::Matrix4f::Identity();
        matrix.block<3, 1>(0, 3) = Eigen::Vector3f(p.x, p.y, p.z);

        Eigen::Quaternionf quat(q.w, q.x, q.y, q.z);
        matrix.block<3, 3>(0, 0) = quat.toRotationMatrix();

        return matrix;
    }

    /**
     * @brief 将 Eigen::Matrix4f 转换为 gtsam::Pose3
     */
    gtsam::Pose3 matrixToPose3(const Eigen::Matrix4f& matrix)
    {
        Eigen::Matrix3d R = matrix.block<3, 3>(0, 0).cast<double>();
        Eigen::Vector3d t = matrix.block<3, 1>(0, 3).cast<double>();
        return gtsam::Pose3(gtsam::Rot3(R), gtsam::Point3(t));
    }

    /**
     * @brief 将 gtsam::Pose3 转换为 Eigen::Matrix4f
     */
    Eigen::Matrix4f pose3ToMatrix(const gtsam::Pose3& pose)
    {
        Eigen::Matrix4f matrix = Eigen::Matrix4f::Identity();
        matrix.block<3, 3>(0, 0) = pose.rotation().matrix().cast<float>();
        matrix.block<3, 1>(0, 3) = Eigen::Vector3f(
            static_cast<float>(pose.x()),
            static_cast<float>(pose.y()),
            static_cast<float>(pose.z()));
        return matrix;
    }

    // ==========================================
    // 订阅者和发布者
    // ==========================================
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;
    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr cloud_sub_;

    rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr optimized_odom_pub_;
    rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr optimized_path_pub_;
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr keyframes_map_pub_;
    rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr loop_marker_pub_;

    // TF 相关
    std::unique_ptr<tf2_ros::Buffer> tf_buffer_;
    std::unique_ptr<tf2_ros::TransformListener> tf_listener_;
    std::unique_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;

    // ==========================================
    // 数据存储
    // ==========================================
    std::mutex data_mutex_;
    std::vector<std::shared_ptr<KeyFrame>> keyframes_;  // 关键帧列表
    std::vector<std::pair<int, int>> loop_pairs_;       // 回环对列表
    std::vector<std::pair<rclcpp::Time, Eigen::Matrix4f>> odom_buffer_;  // 里程计缓冲

    // ScanContext 管理器
    ScanContextManager sc_manager_;

    // 下采样滤波器
    pcl::VoxelGrid<pcl::PointXYZI> downsample_filter_;

    // 最新点云
    pcl::PointCloud<pcl::PointXYZI>::Ptr latest_cloud_;

    // ==========================================
    // GTSAM 相关
    // ==========================================
    std::unique_ptr<gtsam::ISAM2> isam_;
    gtsam::NonlinearFactorGraph graph_;
    gtsam::Values initial_estimate_;
    gtsam::Values optimized_values_;

    // ==========================================
    // 状态变量
    // ==========================================
    int odom_count_;
    int keyframe_id_;
    bool is_initialized_;

    std::optional<geometry_msgs::msg::Pose> last_keyframe_pose_;
    std::optional<geometry_msgs::msg::Pose> last_odom_pose_;
    rclcpp::Time last_odom_time_;

    std::optional<Eigen::Matrix4f> pending_keyframe_odom_;
    rclcpp::Time pending_keyframe_stamp_;

    nav_msgs::msg::Path optimized_path_;

    // 坐标框架
    std::string world_frame_{"camera_init"};
    std::string body_frame_{"body"};
};

/**
 * @brief 主函数 - 启动 SC-PGO 节点
 */
int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);

    RCLCPP_INFO(rclcpp::get_logger("sc_pgo_node"), "启动 SC-PGO 节点...");

    try
    {
        auto node = std::make_shared<SC_PGO_Node>();
        rclcpp::spin(node);
    }
    catch (const std::exception& e)
    {
        RCLCPP_ERROR(rclcpp::get_logger("sc_pgo_node"),
            "节点异常退出: %s", e.what());
    }

    rclcpp::shutdown();
    return 0;
}
