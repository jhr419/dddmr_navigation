# =============================================================================
# dddmr_sc_pgo 包的 CMakeLists.txt
# 
# 该包实现基于 ScanContext 的回环检测和 GTSAM 位姿图优化
# 用于增强 Fast-LIO 建图精度，修正累积漂移
# =============================================================================

cmake_minimum_required(VERSION 3.8)
project(dddmr_sc_pgo)

# 添加 GTSAM cmake 路径
list(APPEND CMAKE_PREFIX_PATH "/usr/local/lib/cmake")

# 添加 /usr/local/lib 到库搜索路径（GTSAM 安装位置）
link_directories(/usr/local/lib)

# ============================================================================
# C++ 标准设置
# ============================================================================
if(CMAKE_CXX_STANDARD LESS 14)
    set(CMAKE_CXX_STANDARD 14)
endif()

# 输出编译详细信息
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
endif()

# ============================================================================
# 编译选项
# ============================================================================
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options(-Wall -Wextra -Wpedantic)
    # 针对 ROS2 优化
    add_compile_options(-Wno-unused-parameter)
endif()

# ============================================================================
# 查找依赖包
# ============================================================================

# ROS2 核心依赖
find_package(ament_cmake_ros REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)

# ROS2 消息和服务
find_package(std_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)

# TF2 相关
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_eigen REQUIRED)

# PCL 相关
find_package(pcl_conversions REQUIRED)
find_package(pcl_ros REQUIRED)
find_package(PCL REQUIRED)

# GTSAM - 位姿图优化库
# GTSAM 需要单独安装: sudo apt install libgtsam-dev libgtsam-unstable-dev
# 使用 modern CMake target 方式链接
find_package(GTSAM REQUIRED)

# Eigen3（通常 PCL 会自带）
find_package(Eigen3 REQUIRED)

# ============================================================================
# 头文件路径
# ============================================================================
include_directories(
    include
    include/dddmr_sc_pgo
    ${PCL_INCLUDE_DIRS}
    ${EIGEN3_INCLUDE_DIR}
    ${GTSAM_INCLUDE_DIRS}
)

# ============================================================================
# 添加库和可执行文件
# ============================================================================

# ScanContext 库
add_library(scan_context_lib
    src/scan_context.cpp
)

# 设置 ScanContext 库的头文件
target_include_directories(scan_context_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# 链接 ScanContext 库的系统依赖
ament_target_dependencies(scan_context_lib
    PCL
    Eigen3
)

# SC-PGO 主节点
add_executable(sc_pgo_node
    src/sc_pgo_node.cpp
)

# 链接 GTSAM 和其他依赖
target_link_libraries(sc_pgo_node
    scan_context_lib
    gtsam
    gtsam_unstable
)

# 链接 ROS 依赖
ament_target_dependencies(sc_pgo_node
    rclcpp
    std_msgs
    nav_msgs
    sensor_msgs
    geometry_msgs
    visualization_msgs
    tf2
    tf2_ros
    tf2_eigen
    pcl_conversions
    pcl_ros
)

# ============================================================================
# 安装目标
# ============================================================================

# 安装可执行文件
install(TARGETS sc_pgo_node
    DESTINATION lib/${PROJECT_NAME}
)

# 安装 ScanContext 库
install(TARGETS scan_context_lib
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION lib
)

# 安装头文件
install(
    DIRECTORY include/
    DESTINATION include
)

# 安装 launch 文件
install(
    DIRECTORY launch
    DESTINATION share/${PROJECT_NAME}
)

# 安装配置文件
install(
    DIRECTORY config
    DESTINATION share/${PROJECT_NAME}
)

# ============================================================================
# ROS2 插件注册（如果有）
# ============================================================================

# 如果需要组件注册，可以使用以下方式
# rclcpp_components_register_node(sc_pgo_node
#     PLUGIN "dddmr_sc_pgo::SCPGOComponent"
#     EXECUTABLE sc_pgo_node
# )

# ============================================================================
# 测试
# ============================================================================
if(BUILD_TESTING)
    find_package(ament_lint_auto REQUIRED)
    ament_lint_auto_find_test_dependencies()
endif()

# ============================================================================
# 打包信息
# ============================================================================
ament_export_dependencies(
    rclcpp
    std_msgs
    nav_msgs
    sensor_msgs
    geometry_msgs
    visualization_msgs
    tf2
    tf2_ros
    tf2_eigen
    pcl_conversions
    pcl_ros
)

ament_export_include_directories(include)

# Finish CMake
ament_package()
