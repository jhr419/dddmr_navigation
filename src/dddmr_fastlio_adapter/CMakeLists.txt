cmake_minimum_required(VERSION 3.8)
project(dddmr_fastlio_adapter)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(tf2_eigen REQUIRED)
find_package(PCL REQUIRED COMPONENTS common io filters)
find_package(pcl_conversions REQUIRED)
find_package(livox_ros_driver2 QUIET)

set(dependencies
  rclcpp
  std_msgs
  std_srvs
  sensor_msgs
  nav_msgs
  geometry_msgs
  tf2
  tf2_ros
  tf2_geometry_msgs
  tf2_eigen
  pcl_conversions
)

if(livox_ros_driver2_FOUND)
  list(APPEND dependencies livox_ros_driver2)
  add_compile_definitions(USE_LIVOX_CUSTOM_MSG)
else()
  message(WARNING "livox_ros_driver2 was not found; fastlio_localization_adapter_node will support PointCloud2 input only.")
endif()

include_directories(
  include
  ${PCL_INCLUDE_DIRS}
)

add_executable(fastlio_dddmr_adapter_node
  src/fastlio_dddmr_adapter_node.cpp
)

add_executable(fastlio_localization_adapter_node
  src/fastlio_localization_adapter_node.cpp
)

add_executable(pcd_map_publisher_node
  src/pcd_map_publisher_node.cpp
)

ament_target_dependencies(fastlio_dddmr_adapter_node
  ${dependencies}
)
target_link_libraries(fastlio_dddmr_adapter_node
  ${PCL_LIBRARIES}
)

ament_target_dependencies(fastlio_localization_adapter_node
  ${dependencies}
)
target_link_libraries(fastlio_localization_adapter_node
  ${PCL_LIBRARIES}
)

ament_target_dependencies(pcd_map_publisher_node
  ${dependencies}
)
target_link_libraries(pcd_map_publisher_node
  ${PCL_LIBRARIES}
)

install(TARGETS
  fastlio_dddmr_adapter_node
  fastlio_localization_adapter_node
  pcd_map_publisher_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  launch
  config
  DESTINATION share/${PROJECT_NAME}
)

ament_export_dependencies(${dependencies})
ament_package()
