# SC-PGO 模块说明

## 概述

SC-PGO 是基于 ScanContext 的回环检测与 GTSAM 位姿图优化模块，用于增强 Fast-LIO 的建图精度，修正累积漂移。

## 工作流程

```
Fast-LIO 里程计 /odom ─────┐
                            ├──> SC-PGO Node ──> /sc_pgo/optimized_odom
Fast-LIO 点云 /cloud ──────┘       │
                                    ├──> /sc_pgo/optimized_path
                                    ├──> /sc_pgo/keyframes_map
                                    └──> /sc_pgo/loop_markers
```

1. 接收 Fast-LIO 的里程计和点云数据
2. 定期保存关键帧及其 ScanContext 描述子
3. 使用 ScanContext 检测回环候选
4. ICP 验证回环并计算精确变换
5. 构建 GTSAM 位姿图并进行优化
6. 发布优化后的轨迹和地图

## 启动方式

```bash
ros2 launch dddmr_beginner_guide livox_mid360_fastlio_scpgo_mapping.launch.py
```

## 参数配置

配置文件位于 `dddmr_sc_pgo/config/sc_pgo.yaml`

### ScanContext 参数

| 参数 | 默认值 | 说明 |
|------|--------|------|
| `sc_max_radius` | 20.0 | 最大检测半径（米） |
| `sc_num_rings` | 20 | 极坐标网格环数 |
| `sc_num_sectors` | 60 | 极坐标网格扇区数 |
| `sc_tree_depth` | 20 | KD-Tree 搜索深度 |
| `sc_loop_threshold` | 0.60 | 回环检测阈值（越低越宽松） |

### 关键帧参数

| 参数 | 默认值 | 说明 |
|------|--------|------|
| `keyframe_distance` | 1.5 | 关键帧距离阈值（米） |
| `keyframe_angle` | 500.0 | 关键帧角度阈值（度） |

### 回环检测参数

| 参数 | 默认值 | 说明 |
|------|--------|------|
| `loop_min_interval` | 30 | 回环检测最小间隔帧数 |
| `loop_trans_threshold` | 1.0 | 平移验证阈值 |
| `loop_rot_threshold` | 30.0 | 旋转验证阈值 |
| `floor_height_threshold` | 4.0 | 楼层高度阈值（米） |

### ICP 参数

| 参数 | 默认值 | 说明 |
|------|--------|------|
| `icp_max_corr_distance` | 3.0 | ICP 最大对应点距离 |
| `icp_max_iterations` | 100 | ICP 最大迭代次数 |
| `icp_max_error` | 1.0 | ICP 最大匹配误差阈值 |

### 噪声模型参数

| 参数 | 默认值 | 说明 |
|------|--------|------|
| `odom_trans_noise` | 0.1 | 里程计平移噪声（米） |
| `odom_rot_noise` | 0.05 | 里程计旋转噪声（弧度） |
| `loop_noise` | 0.35 | 回环噪声（越小越信任回环） |

## 发布的话题

| 话题 | 类型 | 说明 |
|------|------|------|
| `/sc_pgo/optimized_odom` | nav_msgs/Odometry | 优化后的里程计 |
| `/sc_pgo/optimized_path` | nav_msgs/Path | 优化后的轨迹 |
| `/sc_pgo/keyframes_map` | sensor_msgs/PointCloud2 | 关键帧点云地图 |
| `/sc_pgo/loop_markers` | visualization_msgs/MarkerArray | 回环可视化标记 |

## 订阅的话题

| 话题 | 类型 | 说明 |
|------|------|------|
| `/odom` | nav_msgs/Odometry | Fast-LIO 里程计 |
| `/cloud` | sensor_msgs/PointCloud2 | Fast-LIO 点云 |

## 坐标框架

| 框架 | 默认值 | 说明 |
|------|--------|------|
| `world_frame` | camera_init | 世界坐标系 |
| `body_frame` | body | 机器人坐标系 |

## 参数调优建议

### 提高召回率（检测更多回环）

- 降低 `sc_loop_threshold`（如 0.55）
- 降低 `icp_max_error`（如 0.8）

### 提高精度（过滤错误回环）

- 提高 `sc_loop_threshold`（如 0.70）
- 提高 `icp_max_error`（如 1.2）
- 收紧 `loop_noise`（如 0.3）

### 跨楼层场景

代码内置了下楼/跨楼层过滤逻辑：
- Z 差异 > 1.0m 拒绝
- Z 差异 > 0.3m 且帧间隔 < 100 拒绝（下楼过程中的误匹配）

## 依赖

- ROS 2 Humble
- GTSAM
- PCL
- Fast-LIO
