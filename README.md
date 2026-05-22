# DDDMR Navigation

本项目基于 [dfl-rlab/dddmr_navigation](https://github.com/dfl-rlab/dddmr_navigation) 进行二次开发，目标是在四足机器人平台上构建一套可落地的三维建图与导航系统。

当前仓库主要面向 ROS 2 Humble + Docker 环境，包含建图、定位、全局规划、局部规划、三维感知、RViz 工具以及 Gazebo 仿真相关模块。

## 功能概览

- 三维建图：基于 FAST-LIO / DDDMR 建图流程
- 三维定位：基于点云地图的 MCL 3D 定位
- 路径规划：全局规划、局部规划与点到点导航
- 三维感知：静态层、禁行区、速度限制层、深度相机/激光雷达感知
- 仿真支持：Gazebo 四足机器人导航示例
- Docker 环境：提供 x64、x64 CUDA、Jetson L4T、Gazebo 镜像构建脚本

## 目录结构

```text
.
├── dddmr_docker/              # Dockerfile、镜像构建和容器启动脚本
├── src/
│   ├── dddmr_beginner_guide/  # 快速启动、建图/导航 launch 和 RViz 配置
│   ├── dddmr_fastlio_adapter/ # FAST-LIO 与 DDDMR 的适配节点
│   ├── dddmr_global_planner/  # 全局规划
│   ├── dddmr_local_planner/   # 局部规划、轨迹生成、恢复行为
│   ├── dddmr_mcl_3dl/         # 3D MCL 定位
│   ├── dddmr_p2p_move_base/   # 点到点导航状态机
│   ├── dddmr_perception_3d/   # 三维感知层
│   ├── dddmr_rviz_tools/      # RViz 插件工具
│   └── FAST_LIO/              # FAST-LIO 建图模块
└── README.md
```

## 环境要求

- Ubuntu 22.04
- Docker
- ROS 2 Humble（推荐通过本仓库 Docker 镜像使用）
- x64 主机或 Jetson Orin / L4T 平台
- 如需 CUDA / TensorRT：NVIDIA GPU、NVIDIA Driver、NVIDIA Container Toolkit

> 目前主要维护 x64 Docker 环境；嵌入式算力平台可参考 `dddmr_docker/docker_file/build.bash` 中的 `l4t` 构建流程。

## 快速开始

### 1. 克隆仓库

建议将仓库放在 `$HOME/dddmr_navigation`，因为默认 Docker 启动脚本会挂载这个路径。

```bash
cd ~
git clone https://github.com/jhr419/dddmr_navigation.git
cd ~/dddmr_navigation
git submodule update --init --recursive
```

如果使用数据包或保存地图，建议提前创建数据目录：

```bash
mkdir -p ~/dddmr_bags
```

### 2. 获取 Docker 镜像

#### 方式 A：拉取预构建镜像

导航核心镜像：

```bash
docker pull crpi-qci9pnpgcam16gus.cn-beijing.personal.cr.aliyuncs.com/zkyukun/dddmr_navigation:0.1
docker tag crpi-qci9pnpgcam16gus.cn-beijing.personal.cr.aliyuncs.com/zkyukun/dddmr_navigation:0.1 dddmr_navigation:0.1
```

Gazebo 仿真镜像：

```bash
docker pull crpi-qci9pnpgcam16gus.cn-beijing.personal.cr.aliyuncs.com/zkyukun/dddmr_gazebo:0.1
docker tag crpi-qci9pnpgcam16gus.cn-beijing.personal.cr.aliyuncs.com/zkyukun/dddmr_gazebo:0.1 dddmr_gazebo:0.1
```

#### 方式 B：本地构建镜像

```bash
cd ~/dddmr_navigation/dddmr_docker/docker_file
./build.bash
```

可选构建类型：

| 选项 | 说明 | 镜像名 |
| --- | --- | --- |
| `x64` | x64 CPU 环境 | `dddmr:x64` |
| `x64` + CUDA | x64 CUDA / TensorRT 环境 | `dddmr:cuda` |
| `l4t` | Jetson L4T 环境 | `dddmr:l4t_r36` |
| `x64_gz` | Gazebo 仿真环境 | `dddmr_gz:x64` |

## 启动 Docker 环境

### 导航核心容器

如果使用本地构建的 `dddmr:x64` 镜像：

```bash
cd ~/dddmr_navigation/dddmr_docker/docker_file
./run_x64.bash
```

如果使用预构建的 `dddmr_navigation:0.1` 镜像：

```bash
xhost +local:docker

docker run -it \
  --name dddmr_x64_navigation \
  --privileged \
  --network host \
  --security-opt label=disable \
  --hostname "$(hostname)" \
  -e DISPLAY="$DISPLAY" \
  -e QT_X11_NO_MITSHM=1 \
  -v "$HOME/dddmr_navigation:/root/dddmr_navigation" \
  -v "$HOME/dddmr_bags:/root/dddmr_bags" \
  -v /tmp:/tmp \
  -v /dev:/dev \
  -w /root \
  dddmr_navigation:0.1 \
  bash
```

进入容器后：

```bash
cd /root/dddmr_navigation
source /opt/ros/humble/setup.bash
colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release
source install/setup.bash
```

### Gazebo 仿真容器

如果使用预构建的 `dddmr_gazebo:0.1` 镜像：

```bash
xhost +local:docker

docker run -it \
  --name dddmr_x64_gazebo \
  --privileged \
  --network host \
  --security-opt label=disable \
  --hostname "$(hostname)" \
  -e DISPLAY="$DISPLAY" \
  -e QT_X11_NO_MITSHM=1 \
  -v "$HOME/dddmr_gazebo:/root/dddmr_gazebo" \
  -v /dev:/dev \
  -v /tmp:/tmp \
  -w /ws_gz \
  dddmr_gazebo:0.1 \
  bash
```

如果使用本地构建的 Gazebo 镜像，可参考：

```bash
cd ~/dddmr_navigation/src/dddmr_beginner_guide
./run_x64_gazebo.bash
```

## 建图

进入导航容器并完成编译后，启动 Mid360 + FAST-LIO + DDDMR 建图流程：

```bash
cd /root/dddmr_navigation
source /opt/ros/humble/setup.bash
source install/setup.bash
ros2 launch dddmr_beginner_guide livox_mid360_fastlio_dddmr_mapping.launch
```

如果使用 Airy 倾斜 45 度的真实机器人配置：

```bash
ros2 launch dddmr_beginner_guide airy_tilt45_mapping.launch
```

保存建图结果：

```bash
ros2 service call /save_mapped_point_cloud std_srvs/srv/Empty
```

## 导航

进入导航容器并完成编译后，启动导航流程：

```bash
cd /root/dddmr_navigation
source /opt/ros/humble/setup.bash
source install/setup.bash
ros2 launch dddmr_beginner_guide airy_tilt45_navigation.launch
```

仓库中还保留了 Livox Mid360 的导航 launch 文件：

```bash
ros2 launch dddmr_beginner_guide livox_mid360_navigaton.launch
```

> 注意：当前文件名为 `livox_mid360_navigaton.launch`，不是 `livox_mid360_navigation.launch`。

## Gazebo 示例

推荐参考 `src/dddmr_beginner_guide/README.md` 中的 Gazebo 教程。基本流程是开启两个终端：

终端 1：启动 Gazebo 仿真环境。

```bash
cd ~/dddmr_navigation/src/dddmr_beginner_guide
./run_x64_gazebo.bash
```

容器内：

```bash
source /opt/ros/humble/setup.bash
colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release
source install/setup.bash
ros2 launch go2_config gz_lidar_odom.launch.py
```

终端 2：启动导航环境。

```bash
cd ~/dddmr_navigation/src/dddmr_beginner_guide
./run_x64_navigation.bash
```

容器内：

```bash
cd /root/dddmr_navigation
source /opt/ros/humble/setup.bash
colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release
source install/setup.bash
ros2 launch p2p_move_base go2_localization.launch
```

## 机器人接入要求

真实机器人需要至少提供以下 ROS 2 接口：

| 类型 | Topic | Message | 说明 |
| --- | --- | --- | --- |
| 速度控制 | `/cmd_vel` | `geometry_msgs/msg/Twist` | DDDMR 输出给机器人底盘的速度指令 |
| 点云 | `/lidar_point_cloud` | `sensor_msgs/msg/PointCloud2` | 3D LiDAR 点云 |
| 里程计 | `/odom` | `nav_msgs/msg/Odometry` | 机器人里程计 |
| TF | `/tf` | `tf2_msgs/msg/TFMessage` | 建议包含 `odom -> base_link -> lidar_link` |

请确保点云消息中的 `frame_id` 与 TF 树中的 LiDAR 坐标系一致。

## 常见问题

### RViz / Gazebo 无法显示图形界面

确认宿主机执行过：

```bash
xhost +local:docker
```

同时确认容器启动参数中挂载了 `/tmp`，并传入了 `DISPLAY`。

### 容器名已存在

如果之前创建过同名容器，可以先启动旧容器：

```bash
docker start -ai dddmr_x64_navigation
```

或删除旧容器后重新创建：

```bash
docker rm dddmr_x64_navigation
```

### 修改代码后需要重新编译吗

C++ 包需要重新编译：

```bash
cd /root/dddmr_navigation
colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release
source install/setup.bash
```

Python launch / 配置文件通常不需要完整重编译，但建议重新 `source install/setup.bash`。

## 参考文档

- [DDDMR Beginner Guide](src/dddmr_beginner_guide/README.md)
- [Docker 说明](dddmr_docker/README.md)
- [FAST-LIO](src/FAST_LIO/README.md)
- [DDDMR Global Planner](src/dddmr_global_planner/README.md)
- [DDDMR Local Planner](src/dddmr_local_planner/README.md)
- [DDDMR Perception 3D](src/dddmr_perception_3d/README.md)
