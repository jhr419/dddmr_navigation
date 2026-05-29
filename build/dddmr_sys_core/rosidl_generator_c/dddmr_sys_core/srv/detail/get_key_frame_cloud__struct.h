// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dddmr_sys_core:srv/GetKeyFrameCloud.idl
// generated code does not contain a copyright notice

#ifndef DDDMR_SYS_CORE__SRV__DETAIL__GET_KEY_FRAME_CLOUD__STRUCT_H_
#define DDDMR_SYS_CORE__SRV__DETAIL__GET_KEY_FRAME_CLOUD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetKeyFrameCloud in the package dddmr_sys_core.
typedef struct dddmr_sys_core__srv__GetKeyFrameCloud_Request
{
  int32_t key_frame_number;
} dddmr_sys_core__srv__GetKeyFrameCloud_Request;

// Struct for a sequence of dddmr_sys_core__srv__GetKeyFrameCloud_Request.
typedef struct dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence
{
  dddmr_sys_core__srv__GetKeyFrameCloud_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'key_frame_cloud'
// Member 'key_frame_ground'
// Member 'key_frame_ground_edge'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"

/// Struct defined in srv/GetKeyFrameCloud in the package dddmr_sys_core.
typedef struct dddmr_sys_core__srv__GetKeyFrameCloud_Response
{
  sensor_msgs__msg__PointCloud2 key_frame_cloud;
  sensor_msgs__msg__PointCloud2 key_frame_ground;
  sensor_msgs__msg__PointCloud2 key_frame_ground_edge;
} dddmr_sys_core__srv__GetKeyFrameCloud_Response;

// Struct for a sequence of dddmr_sys_core__srv__GetKeyFrameCloud_Response.
typedef struct dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence
{
  dddmr_sys_core__srv__GetKeyFrameCloud_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DDDMR_SYS_CORE__SRV__DETAIL__GET_KEY_FRAME_CLOUD__STRUCT_H_
