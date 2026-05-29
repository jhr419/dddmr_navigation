# =============================================================================
# Fast-LIO + SC-PGO 集成启动文件
# 
# 该 launch 文件同时启动 Fast-LIO 建图和 SC-PGO 回环检测优化
# 实现完整的 LiDAR SLAM 系统：里程计 + 回环检测 + 位姿图优化
# 
# 使用方式:
#   ros2 launch dddmr_beginner_guide livox_mid360_fastlio_scpgo_mapping.launch.py
# =============================================================================

import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, LogInfo
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    # ========================================
    # 获取各包的路径
    # ========================================
    adapter_share = get_package_share_directory("dddmr_fastlio_adapter")
    fast_lio_share = get_package_share_directory("fast_lio")
    beginner_share = get_package_share_directory("dddmr_beginner_guide")
    sc_pgo_share = get_package_share_directory("dddmr_sc_pgo")
    
    # ========================================
    # 配置文件路径
    # ========================================
    # Fast-LIO 配置
    fastlio_config_dir = os.path.join(beginner_share, "config")
    adapter_config = os.path.join(
        adapter_share, "config", "livox_mid360_dddmr_adapter.yaml"
    )
    
    # SC-PGO 配置
    sc_pgo_config = os.path.join(sc_pgo_share, "config", "sc_pgo.yaml")
    
    # RViz 配置
    default_rviz_config = os.path.join(
        beginner_share, "rviz", "livox_mid360_fastlio_dddmr_mapping.rviz"
    )
    
    # ========================================
    # 启动参数声明
    # ========================================
    use_sim_time = LaunchConfiguration("use_sim_time")
    mapping_dir = LaunchConfiguration("mapping_dir")
    rviz_config = LaunchConfiguration("rviz_config")
    
    # SC-PGO 相关参数
    sc_pgo_enable = LaunchConfiguration("sc_pgo_enable")
    
    # ========================================
    # 声明启动参数
    # ========================================
    declare_use_sim_time = DeclareLaunchArgument(
        "use_sim_time",
        default_value="false",
        description="使用仿真时间（仅用于 Gazebo 仿真）"
    )
    
    declare_mapping_dir = DeclareLaunchArgument(
        "mapping_dir",
        default_value="/tmp/dddmr_fastlio_mid360_map",
        description="地图保存目录"
    )
    
    declare_rviz_config = DeclareLaunchArgument(
        "rviz_config",
        default_value=default_rviz_config,
        description="RViz 配置文件路径"
    )
    
    declare_sc_pgo_enable = DeclareLaunchArgument(
        "sc_pgo_enable",
        default_value="true",
        description="是否启用 SC-PGO 回环检测"
    )
    
    # ========================================
    # 启动 Fast-LIO
    # ========================================
    fastlio_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(fast_lio_share, "launch", "mapping.launch.py")
        ),
        launch_arguments={
            "use_sim_time": use_sim_time,
            "config_path": fastlio_config_dir,
            "config_file": "fastlio_mid360_dddmr.yaml",
            "rviz": "false",  # 我们自己管理 RViz
        }.items(),
    )
    
    # ========================================
    # 启动 SC-PGO 节点（回环检测 + 位姿图优化）
    # ========================================
    sc_pgo_node = Node(
        package="dddmr_sc_pgo",
        executable="sc_pgo_node",
        name="sc_pgo",
        output="screen",
        parameters=[sc_pgo_config],
        # 话题重映射：将 SC-PGO 期望的话题映射到 Fast-LIO 的话题
        remappings=[
            # Fast-LIO 话题 -> SC-PGO 期望的话题
            ("/odom", "/Odometry"),              # Fast-LIO 里程计
            ("/cloud", "/cloud_registered"),     # Fast-LIO 点云
        ],
        # 条件启动：仅当启用 SC-PGO 时启动
        condition=IfCondition(sc_pgo_enable),
    )
    
    # ========================================
    # 启动适配器节点（数据转换/保存）
    # ========================================
    adapter_node = Node(
        package="dddmr_fastlio_adapter",
        executable="fastlio_dddmr_adapter_node",
        output="screen",
        parameters=[
            adapter_config,
            {"use_sim_time": use_sim_time},
            {"mapping_dir": mapping_dir},
        ],
    )
    
    # ========================================
    # TF 变换发布
    # ========================================
    # base_link -> base_footprint 变换
    baselink2footprint = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="baselink2footprint",
        arguments=[
            "0.0", "0", "-0.24",    # 平移 x, y, z
            "0.0", "0.0", "0",       # 旋转 roll, pitch, yaw
            "base_link", "base_footprint"
        ],
    )
    
    # base_link -> livox_frame 变换（Livox Mid360 雷达位置）
    baselink2mid360 = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="baselink2mid360",
        arguments=[
            "0.3", "0", "0.38",      # 平移 x, y, z
            "0.0", "0.485596", "0",  # 旋转 roll, pitch, yaw
            "base_link", "livox_frame"
        ],
    )
    
    # ========================================
    # 启动 RViz
    # ========================================
    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="screen",
        respawn=False,
        arguments=["-d", rviz_config],
    )
    
    # ========================================
    # 启动信息
    # ========================================
    startup_info = LogInfo(msg=[
        '\n',
        '===========================================\n',
        '     Fast-LIO + SC-PGO SLAM 系统启动        \n',
        '===========================================\n',
        '  组件:\n',
        '    - Fast-LIO: LiDAR-IMU 里程计\n',
        '    - SC-PGO: ScanContext 回环检测 + GTSAM 优化\n',
        '  话题映射:\n',
        '    - /Odometry -> /odom (Fast-LIO -> SC-PGO)\n',
        '    - /cloud_registered -> /cloud (Fast-LIO -> SC-PGO)\n',
        '  输出:\n',
        '    - /sc_pgo/optimized_odom: 优化后的里程计\n',
        '    - /sc_pgo/optimized_path: 优化后的轨迹\n',
        '    - /sc_pgo/keyframes_map: 关键帧地图\n',
        '===========================================\n',
    ])
    
    # ========================================
    # 构建启动描述
    # ========================================
    return LaunchDescription([
        # 参数声明
        declare_use_sim_time,
        declare_mapping_dir,
        declare_rviz_config,
        declare_sc_pgo_enable,
        
        # 启动信息
        startup_info,
        
        # 节点启动
        fastlio_launch,          # Fast-LIO 里程计
        sc_pgo_node,             # SC-PGO 回环检测
        adapter_node,            # 适配器（数据保存）
        baselink2footprint,      # TF 变换
        baselink2mid360,         # TF 变换
        rviz_node,               # 可视化
    ])
