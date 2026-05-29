# =============================================================================
# SC-PGO 独立启动文件
# 
# 该 launch 文件单独启动 SC-PGO 节点，用于接收外部里程计和点云数据
# 
# 使用方式:
#   ros2 launch dddmr_sc_pgo sc_pgo.launch.py
# 
# 或者重映射话题以适配不同的数据源:
#   ros2 launch dddmr_sc_pgo sc_pgo.launch.py \
#       odom_topic:=/your/odom_topic \
#       cloud_topic:=/your/cloud_topic
# =============================================================================

import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, LogInfo
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    # 获取包路径
    package_name = 'dddmr_sc_pgo'
    package_share = get_package_share_directory(package_name)
    
    # 配置文件路径
    default_config_file = os.path.join(package_share, 'config', 'sc_pgo.yaml')
    
    # 配置文件参数
    config_file = LaunchConfiguration('config_file')
    
    # 话题参数 - 用于适配不同的数据源
    odom_topic = LaunchConfiguration('odom_topic')
    cloud_topic = LaunchConfiguration('cloud_topic')
    
    # 其他参数
    use_sim_time = LaunchConfiguration('use_sim_time')
    enable_rviz = LaunchConfiguration('enable_rviz')
    
    # 声明启动参数
    declare_config_file_cmd = DeclareLaunchArgument(
        'config_file',
        default_value=default_config_file,
        description='SC-PGO 配置文件路径'
    )
    
    declare_odom_topic_cmd = DeclareLaunchArgument(
        'odom_topic',
        default_value='/odom',
        description='里程计话题来源'
    )
    
    declare_cloud_topic_cmd = DeclareLaunchArgument(
        'cloud_topic',
        default_value='/cloud',
        description='点云话题来源'
    )
    
    declare_use_sim_time_cmd = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='使用仿真时间'
    )
    
    declare_enable_rviz_cmd = DeclareLaunchArgument(
        'enable_rviz',
        default_value='true',
        description='是否启动 RViz'
    )
    
    # SC-PGO 节点
    sc_pgo_node = Node(
        package=package_name,
        executable='sc_pgo_node',
        name='sc_pgo',
        output='screen',
        parameters=[{
            'config_file': config_file,
            'use_sim_time': use_sim_time,
        }],
        # 话题重映射：将 SC-PGO 期望的话题名称映射到实际的话题
        remappings=[
            ('/odom', odom_topic),
            ('/cloud', cloud_topic),
        ],
    )
    
    # RViz 节点（可选）
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        condition=IfCondition(enable_rviz),
        arguments=['-d', os.path.join(package_share, 'rviz', 'sc_pgo.rviz')],
    )
    
    # 打印启动信息
    log_info = LogInfo(msg=[
        '==========================================',
        '       启动 SC-PGO 回环检测模块       ',
        '==========================================',
        '里程计话题: ', odom_topic,
        '点云话题: ', cloud_topic,
        '配置文件: ', config_file,
        '=========================================='
    ])
    
    # 构建并返回启动描述
    return LaunchDescription([
        # 参数声明
        declare_config_file_cmd,
        declare_odom_topic_cmd,
        declare_cloud_topic_cmd,
        declare_use_sim_time_cmd,
        declare_enable_rviz_cmd,
        
        # 信息打印
        log_info,
        
        # 节点启动
        sc_pgo_node,
        rviz_node,
    ])
