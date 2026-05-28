# dddmr_fastlio_adapter

This package adapts Fast-LIO2 mapping output to the DDDMR map format used by
`mcl_3dl` and the beginner guide navigation launches.

## Runtime Inputs

- `/Odometry` (`nav_msgs/msg/Odometry`) from Fast-LIO2
- `/cloud_registered_body` (`sensor_msgs/msg/PointCloud2`) from Fast-LIO2

## Runtime Outputs

- `/lego_loam_map`
- `/lego_loam_ground`
- `/lego_loam_ground_edge`
- `/cloud_keypose_6d`
- `/key_poses`
- `/tf`: `map -> base_link` when `publish_tf` is true

## Saved DDDMR Map Layout

Call the save service after mapping:

```bash
ros2 service call /save_fastlio_dddmr_map std_srvs/srv/Trigger {}
```

The adapter writes:

```text
<mapping_dir>/
  map.pcd
  ground.pcd
  poses.pcd
  edges.pcd
  pcd/
    0_feature.pcd
    0_ground.pcd
    0_surface.pcd
    1_feature.pcd
    1_ground.pcd
    1_surface.pcd
    ...
```

For navigation, set `pose_graph_dir` in the DDDMR navigation yaml to the same
`mapping_dir`.
