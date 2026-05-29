// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dddmr_sys_core:srv/GetKeyFrameCloud.idl
// generated code does not contain a copyright notice

#ifndef DDDMR_SYS_CORE__SRV__DETAIL__GET_KEY_FRAME_CLOUD__TRAITS_HPP_
#define DDDMR_SYS_CORE__SRV__DETAIL__GET_KEY_FRAME_CLOUD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dddmr_sys_core/srv/detail/get_key_frame_cloud__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dddmr_sys_core
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetKeyFrameCloud_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: key_frame_number
  {
    out << "key_frame_number: ";
    rosidl_generator_traits::value_to_yaml(msg.key_frame_number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetKeyFrameCloud_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: key_frame_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_frame_number: ";
    rosidl_generator_traits::value_to_yaml(msg.key_frame_number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetKeyFrameCloud_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dddmr_sys_core

namespace rosidl_generator_traits
{

[[deprecated("use dddmr_sys_core::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dddmr_sys_core::srv::GetKeyFrameCloud_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dddmr_sys_core::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dddmr_sys_core::srv::to_yaml() instead")]]
inline std::string to_yaml(const dddmr_sys_core::srv::GetKeyFrameCloud_Request & msg)
{
  return dddmr_sys_core::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dddmr_sys_core::srv::GetKeyFrameCloud_Request>()
{
  return "dddmr_sys_core::srv::GetKeyFrameCloud_Request";
}

template<>
inline const char * name<dddmr_sys_core::srv::GetKeyFrameCloud_Request>()
{
  return "dddmr_sys_core/srv/GetKeyFrameCloud_Request";
}

template<>
struct has_fixed_size<dddmr_sys_core::srv::GetKeyFrameCloud_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dddmr_sys_core::srv::GetKeyFrameCloud_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dddmr_sys_core::srv::GetKeyFrameCloud_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'key_frame_cloud'
// Member 'key_frame_ground'
// Member 'key_frame_ground_edge'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace dddmr_sys_core
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetKeyFrameCloud_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: key_frame_cloud
  {
    out << "key_frame_cloud: ";
    to_flow_style_yaml(msg.key_frame_cloud, out);
    out << ", ";
  }

  // member: key_frame_ground
  {
    out << "key_frame_ground: ";
    to_flow_style_yaml(msg.key_frame_ground, out);
    out << ", ";
  }

  // member: key_frame_ground_edge
  {
    out << "key_frame_ground_edge: ";
    to_flow_style_yaml(msg.key_frame_ground_edge, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetKeyFrameCloud_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: key_frame_cloud
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_frame_cloud:\n";
    to_block_style_yaml(msg.key_frame_cloud, out, indentation + 2);
  }

  // member: key_frame_ground
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_frame_ground:\n";
    to_block_style_yaml(msg.key_frame_ground, out, indentation + 2);
  }

  // member: key_frame_ground_edge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_frame_ground_edge:\n";
    to_block_style_yaml(msg.key_frame_ground_edge, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetKeyFrameCloud_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dddmr_sys_core

namespace rosidl_generator_traits
{

[[deprecated("use dddmr_sys_core::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dddmr_sys_core::srv::GetKeyFrameCloud_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dddmr_sys_core::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dddmr_sys_core::srv::to_yaml() instead")]]
inline std::string to_yaml(const dddmr_sys_core::srv::GetKeyFrameCloud_Response & msg)
{
  return dddmr_sys_core::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dddmr_sys_core::srv::GetKeyFrameCloud_Response>()
{
  return "dddmr_sys_core::srv::GetKeyFrameCloud_Response";
}

template<>
inline const char * name<dddmr_sys_core::srv::GetKeyFrameCloud_Response>()
{
  return "dddmr_sys_core/srv/GetKeyFrameCloud_Response";
}

template<>
struct has_fixed_size<dddmr_sys_core::srv::GetKeyFrameCloud_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<dddmr_sys_core::srv::GetKeyFrameCloud_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<dddmr_sys_core::srv::GetKeyFrameCloud_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dddmr_sys_core::srv::GetKeyFrameCloud>()
{
  return "dddmr_sys_core::srv::GetKeyFrameCloud";
}

template<>
inline const char * name<dddmr_sys_core::srv::GetKeyFrameCloud>()
{
  return "dddmr_sys_core/srv/GetKeyFrameCloud";
}

template<>
struct has_fixed_size<dddmr_sys_core::srv::GetKeyFrameCloud>
  : std::integral_constant<
    bool,
    has_fixed_size<dddmr_sys_core::srv::GetKeyFrameCloud_Request>::value &&
    has_fixed_size<dddmr_sys_core::srv::GetKeyFrameCloud_Response>::value
  >
{
};

template<>
struct has_bounded_size<dddmr_sys_core::srv::GetKeyFrameCloud>
  : std::integral_constant<
    bool,
    has_bounded_size<dddmr_sys_core::srv::GetKeyFrameCloud_Request>::value &&
    has_bounded_size<dddmr_sys_core::srv::GetKeyFrameCloud_Response>::value
  >
{
};

template<>
struct is_service<dddmr_sys_core::srv::GetKeyFrameCloud>
  : std::true_type
{
};

template<>
struct is_service_request<dddmr_sys_core::srv::GetKeyFrameCloud_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dddmr_sys_core::srv::GetKeyFrameCloud_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DDDMR_SYS_CORE__SRV__DETAIL__GET_KEY_FRAME_CLOUD__TRAITS_HPP_
