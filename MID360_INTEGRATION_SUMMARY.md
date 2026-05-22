# Go2机器人Mid360雷达集成总结

## 完成的工作

### 1. 创建Mid360雷达配置文件
- **文件**: `/ws_gz/src/gz_quadbot/robots/descriptions/go2_description/xacro/mid360.xacro`
- **内容**:
  - Mid360雷达与base_link的固定连接（关节名：mid360_base_mount_joint）
  - 安装位置：X=0.3m, Y=0m, Z=0.38m
  - 旋转参数：Pitch=0.485596 rad (约27.8°)
  - 创建livox_base_link和livox_frame两个link
  - 配置Gazebo插件用于模拟雷达传感器
  - 配置IMU传感器

### 2. 创建robot_mid360.xacro文件
- **文件**: `/ws_gz/src/gz_quadbot/robots/descriptions/go2_description/xacro/robot_mid360.xacro`
- **内容**: 完整的Go2机器人URDF模型，使用mid360.xacro替代原来的velodyne.xacro

### 3. 配置Mid360数据话题
- **雷达点云话题**: `/livox/lidar`
  - 由liblivox_laser_simulation.so插件发布
  - 更新频率：10Hz
  - 扫描模式：使用mid360.csv文件定义的扫描模式

- **IMU数据话题**: `/livox/imu`
  - 由libgazebo_ros_imu_sensor.so插件发布
  - 更新频率：100Hz
  - 包含角速度和线性加速度数据，带有高斯噪声模型

### 4. 资源文件管理
- **复制的文件**:
  - `/ws_gz/src/gz_quadbot/robots/descriptions/go2_description/meshes/livox_mid40.dae` - Mid360网格模型
  - `/ws_gz/src/gz_quadbot/robots/descriptions/go2_description/scan_mode/mid360.csv` - 雷达扫描模式定义

### 5. 更新依赖配置
- **修改文件**: `/ws_gz/src/gz_quadbot/robots/descriptions/go2_description/package.xml`
- 移除了livox_laser_simulation依赖（因为资源文件已复制到go2_description中）

## 关键参数

### Mid360安装参数
```xml
<joint name="mid360_base_mount_joint" type="fixed">
    <origin rpy="0 0.485596 0" xyz="0.3 0 0.38"/>
    <parent link="base_link"/>
    <child link="livox_base_link"/>
</joint>
```

### 雷达传感器配置
- 水平扫描范围：0-360°（100个样本）
- 垂直扫描范围：-7.22°-55.22°（360个样本）
- 最小距离：0.1m
- 最大距离：200m
- 分辨率：0.002m
- 噪声模型：高斯噪声（均值=0，标准差=0.01）

### IMU传感器配置
- 角速度噪声：标准差=2e-4
- 线性加速度噪声：标准差=1.7e-2
- 更新频率：100Hz

## 编译和使用

### 编译命令
```bash
cd /ws_gz
source /opt/ros/humble/setup.bash
colcon build --packages-select go2_description
```

### 使用新的Mid360机器人模型
修改launch或参数文件中的模型路径：
- 原来：`robot.xacro` 或 `robot_VLP.xacro`（使用Velodyne VLP16）
- 新的：`robot_mid360.xacro`（使用Mid360）

### 在Gazebo中启动
```bash
source /opt/ros/humble/setup.bash
source /ws_gz/install/setup.bash

# 使用robot_mid360.xacro启动机器人
ros2 launch go2_description description.launch.py \
    description_path:="$(ros2 pkg prefix go2_description)/share/go2_description/xacro/robot_mid360.xacro"
```

## 关键改动

1. **新增文件**:
   - `xacro/mid360.xacro` - Mid360雷达配置
   - `xacro/robot_mid360.xacro` - 完整机器人模型
   - `meshes/livox_mid40.dae` - 网格文件
   - `scan_mode/mid360.csv` - 扫描模式定义

2. **修改文件**:
   - `package.xml` - 移除livox_laser_simulation依赖

## 验证

已通过以下验证：
- ✅ xacro文件成功转换为URDF
- ✅ 雷达话题正确设置为/livox/lidar
- ✅ IMU话题正确设置为/livox/imu
- ✅ 安装参数正确应用
- ✅ go2_description包成功编译

## 使用liblivox_laser_simulation.so插件的说明

该配置依赖于liblivox_laser_simulation.so Gazebo插件，该插件应该在你的系统中已安装。如果没有安装，你需要：

1. 编译livox_laser_simulation包（ROS 1/catkin）
2. 或者使用其他兼容的雷达模拟插件
3. 或者使用标准的Gazebo ray传感器插件

## 数据验证

在启动Gazebo后，可以通过以下命令验证数据：
```bash
# 查看雷达点云话题
ros2 topic echo /livox/lidar

# 查看IMU数据
ros2 topic echo /livox/imu
```
