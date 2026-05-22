# Go2 Mid360雷达启动配置

## 启动带Mid360的仿真

### 直接启动（默认使用Mid360）
```bash
ros2 launch go2_config gz_lidar_odom.launch.py
```

此命令将自动使用`robot_mid360.xacro`启动Go2机器人，配置Mid360雷达。

### 使用VLP16雷达（Velodyne）
如果需要切换回原来的Velodyne VLP16雷达：
```bash
ros2 launch go2_config gz_lidar_odom.launch.py \
    description_path:="$(ros2 pkg prefix go2_description)/share/go2_description/xacro/robot_VLP.xacro"
```

或者简单地指定lidar_type：
```bash
ros2 launch go2_config gz_lidar_odom.launch.py lidar_type:=vlp16
```

## 修改的文件

### gz_lidar_odom.launch.py
- **默认模型**: 改为 `robot_mid360.xacro`
- **新增参数**:
  - `lidar_type`: 雷达类型选择 (默认: 'mid360')
  - `description_path`: 机器人描述文件路径 (默认: `robot_mid360.xacro`)

## 验证Mid360仿真数据

启动后，可以通过以下命令验证雷达和IMU数据：

```bash
# 查看雷达点云话题
ros2 topic echo /livox/lidar

# 查看IMU数据
ros2 topic echo /livox/imu

# 查看所有发布的话题
ros2 topic list | grep livox
```

## 可用的启动参数

```bash
ros2 launch go2_config gz_lidar_odom.launch.py --show-args
```

主要参数：
- `use_sim_time`: 使用Gazebo仿真时钟 (默认: true)
- `gui`: 启用Gazebo GUI (默认: true)
- `rviz`: 启动RViz可视化 (默认: false)
- `lidar_type`: 选择雷达类型 (默认: mid360)
- `description_path`: 自定义机器人描述文件路径
- `world`: 选择Gazebo世界文件
- 其他参数参见 `--show-args` 输出

## 完整启动示例

```bash
# 启动Mid360仿真，并启用RViz
ros2 launch go2_config gz_lidar_odom.launch.py rviz:=true

# 启动Mid360仿真，指定特定世界
ros2 launch go2_config gz_lidar_odom.launch.py world:="/path/to/world.world"

# 启动VLP16仿真（切换雷达类型）
ros2 launch go2_config gz_lidar_odom.launch.py description_path:="$(ros2 pkg prefix go2_description)/share/go2_description/xacro/robot_VLP.xacro"
```

## 其他相关Launch文件

- `gazebo.launch.py`: 独立的Gazebo启动 (需要手动修改或使用参数)
- `gazebo_velodyne.launch.py`: 特定于Velodyne的配置 (当前未修改，仍使用VLP16)

如果需要在其他launch文件中也使用Mid360，可以参考本文件中对`gz_lidar_odom.launch.py`的修改方式。
