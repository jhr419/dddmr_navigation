// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from dddmr_sys_core:srv/GetKeyFrameCloud.idl
// generated code does not contain a copyright notice

#ifndef DDDMR_SYS_CORE__SRV__DETAIL__GET_KEY_FRAME_CLOUD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define DDDMR_SYS_CORE__SRV__DETAIL__GET_KEY_FRAME_CLOUD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "dddmr_sys_core/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "dddmr_sys_core/srv/detail/get_key_frame_cloud__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace dddmr_sys_core
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dddmr_sys_core
cdr_serialize(
  const dddmr_sys_core::srv::GetKeyFrameCloud_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dddmr_sys_core
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dddmr_sys_core::srv::GetKeyFrameCloud_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dddmr_sys_core
get_serialized_size(
  const dddmr_sys_core::srv::GetKeyFrameCloud_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dddmr_sys_core
max_serialized_size_GetKeyFrameCloud_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dddmr_sys_core

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dddmr_sys_core
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dddmr_sys_core, srv, GetKeyFrameCloud_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dddmr_sys_core/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "dddmr_sys_core/srv/detail/get_key_frame_cloud__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace dddmr_sys_core
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dddmr_sys_core
cdr_serialize(
  const dddmr_sys_core::srv::GetKeyFrameCloud_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dddmr_sys_core
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dddmr_sys_core::srv::GetKeyFrameCloud_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dddmr_sys_core
get_serialized_size(
  const dddmr_sys_core::srv::GetKeyFrameCloud_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dddmr_sys_core
max_serialized_size_GetKeyFrameCloud_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dddmr_sys_core

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dddmr_sys_core
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dddmr_sys_core, srv, GetKeyFrameCloud_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dddmr_sys_core/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dddmr_sys_core
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dddmr_sys_core, srv, GetKeyFrameCloud)();

#ifdef __cplusplus
}
#endif

#endif  // DDDMR_SYS_CORE__SRV__DETAIL__GET_KEY_FRAME_CLOUD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
