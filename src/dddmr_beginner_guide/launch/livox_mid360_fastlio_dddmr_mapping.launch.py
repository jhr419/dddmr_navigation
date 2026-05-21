import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, LogInfo
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    adapter_share = get_package_share_directory("dddmr_fastlio_adapter")
    fast_lio_share = get_package_share_directory("fast_lio")
    beginner_share = get_package_share_directory("dddmr_beginner_guide")

    fastlio_config_dir = os.path.join(beginner_share, "config")
    adapter_config = os.path.join(adapter_share, "config", "livox_mid360_dddmr_adapter.yaml")
    default_rviz_config = os.path.join(
        beginner_share, "rviz", "livox_mid360_fastlio_dddmr_mapping.rviz"
    )

    use_sim_time = LaunchConfiguration("use_sim_time")
    mapping_dir = LaunchConfiguration("mapping_dir")
    rviz_config = LaunchConfiguration("rviz_config")

    fastlio_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(fast_lio_share, "launch", "mapping.launch.py")
        ),
        launch_arguments={
            "use_sim_time": use_sim_time,
            "config_path": fastlio_config_dir,
            "config_file": "fastlio_mid360_dddmr.yaml",
            "rviz": "false",
        }.items(),
    )

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

    baselink2footprint = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="baselink2footprint",
        arguments=["0.0", "0", "-0.24", "0.0", "0.0", "0", "base_link", "base_footprint"],
    )

    baselink2mid360 = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="baselink2mid360",
        arguments=["0.3", "0", "0.38", "0.0", "0.485596", "0", "base_link", "livox_frame"],
    )

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="screen",
        respawn=False,
        arguments=["-d", rviz_config],
    )

    return LaunchDescription([
        DeclareLaunchArgument("use_sim_time", default_value="false"),
        DeclareLaunchArgument("mapping_dir", default_value="/tmp/dddmr_fastlio_mid360_map"),
        DeclareLaunchArgument("rviz_config", default_value=default_rviz_config),
        LogInfo(msg=["Starting RViz with config: ", rviz_config]),
        fastlio_launch,
        adapter_node,
        baselink2footprint,
        baselink2mid360,
        rviz_node,
    ])
