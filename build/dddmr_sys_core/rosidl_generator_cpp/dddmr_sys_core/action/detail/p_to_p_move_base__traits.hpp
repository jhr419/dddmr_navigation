// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dddmr_sys_core:action/PToPMoveBase.idl
// generated code does not contain a copyright notice

#ifndef DDDMR_SYS_CORE__ACTION__DETAIL__P_TO_P_MOVE_BASE__TRAITS_HPP_
#define DDDMR_SYS_CORE__ACTION__DETAIL__P_TO_P_MOVE_BASE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dddmr_sys_core/action/detail/p_to_p_move_base__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace dddmr_sys_core
{

namespace action
{

inline void to_flow_style_yaml(
  const PToPMoveBase_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_pose
  {
    out << "target_pose: ";
    to_flow_style_yaml(msg.target_pose, out);
    out << ", ";
  }

  // member: target_value
  {
    out << "target_value: ";
    rosidl_generator_traits::value_to_yaml(msg.target_value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PToPMoveBase_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pose:\n";
    to_block_style_yaml(msg.target_pose, out, indentation + 2);
  }

  // member: target_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_value: ";
    rosidl_generator_traits::value_to_yaml(msg.target_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PToPMoveBase_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dddmr_sys_core

namespace rosidl_generator_traits
{

[[deprecated("use dddmr_sys_core::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dddmr_sys_core::action::PToPMoveBase_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  dddmr_sys_core::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dddmr_sys_core::action::to_yaml() instead")]]
inline std::string to_yaml(const dddmr_sys_core::action::PToPMoveBase_Goal & msg)
{
  return dddmr_sys_core::action::to_yaml(msg);
}

template<>
inline const char * data_type<dddmr_sys_core::action::PToPMoveBase_Goal>()
{
  return "dddmr_sys_core::action::PToPMoveBase_Goal";
}

template<>
inline const char * name<dddmr_sys_core::action::PToPMoveBase_Goal>()
{
  return "dddmr_sys_core/action/PToPMoveBase_Goal";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::PToPMoveBase_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<dddmr_sys_core::action::PToPMoveBase_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<dddmr_sys_core::action::PToPMoveBase_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dddmr_sys_core
{

namespace action
{

inline void to_flow_style_yaml(
  const PToPMoveBase_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PToPMoveBase_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PToPMoveBase_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dddmr_sys_core

namespace rosidl_generator_traits
{

[[deprecated("use dddmr_sys_core::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dddmr_sys_core::action::PToPMoveBase_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  dddmr_sys_core::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dddmr_sys_core::action::to_yaml() instead")]]
inline std::string to_yaml(const dddmr_sys_core::action::PToPMoveBase_Result & msg)
{
  return dddmr_sys_core::action::to_yaml(msg);
}

template<>
inline const char * data_type<dddmr_sys_core::action::PToPMoveBase_Result>()
{
  return "dddmr_sys_core::action::PToPMoveBase_Result";
}

template<>
inline const char * name<dddmr_sys_core::action::PToPMoveBase_Result>()
{
  return "dddmr_sys_core/action/PToPMoveBase_Result";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::PToPMoveBase_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dddmr_sys_core::action::PToPMoveBase_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dddmr_sys_core::action::PToPMoveBase_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'base_position'
#include "geometry_msgs/msg/detail/transform_stamped__traits.hpp"

namespace dddmr_sys_core
{

namespace action
{

inline void to_flow_style_yaml(
  const PToPMoveBase_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: base_position
  {
    out << "base_position: ";
    to_flow_style_yaml(msg.base_position, out);
    out << ", ";
  }

  // member: last_decision
  {
    out << "last_decision: ";
    rosidl_generator_traits::value_to_yaml(msg.last_decision, out);
    out << ", ";
  }

  // member: current_decision
  {
    out << "current_decision: ";
    rosidl_generator_traits::value_to_yaml(msg.current_decision, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PToPMoveBase_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: base_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_position:\n";
    to_block_style_yaml(msg.base_position, out, indentation + 2);
  }

  // member: last_decision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_decision: ";
    rosidl_generator_traits::value_to_yaml(msg.last_decision, out);
    out << "\n";
  }

  // member: current_decision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_decision: ";
    rosidl_generator_traits::value_to_yaml(msg.current_decision, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PToPMoveBase_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dddmr_sys_core

namespace rosidl_generator_traits
{

[[deprecated("use dddmr_sys_core::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dddmr_sys_core::action::PToPMoveBase_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  dddmr_sys_core::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dddmr_sys_core::action::to_yaml() instead")]]
inline std::string to_yaml(const dddmr_sys_core::action::PToPMoveBase_Feedback & msg)
{
  return dddmr_sys_core::action::to_yaml(msg);
}

template<>
inline const char * data_type<dddmr_sys_core::action::PToPMoveBase_Feedback>()
{
  return "dddmr_sys_core::action::PToPMoveBase_Feedback";
}

template<>
inline const char * name<dddmr_sys_core::action::PToPMoveBase_Feedback>()
{
  return "dddmr_sys_core/action/PToPMoveBase_Feedback";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::PToPMoveBase_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dddmr_sys_core::action::PToPMoveBase_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dddmr_sys_core::action::PToPMoveBase_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "dddmr_sys_core/action/detail/p_to_p_move_base__traits.hpp"

namespace dddmr_sys_core
{

namespace action
{

inline void to_flow_style_yaml(
  const PToPMoveBase_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PToPMoveBase_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PToPMoveBase_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dddmr_sys_core

namespace rosidl_generator_traits
{

[[deprecated("use dddmr_sys_core::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dddmr_sys_core::action::PToPMoveBase_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dddmr_sys_core::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dddmr_sys_core::action::to_yaml() instead")]]
inline std::string to_yaml(const dddmr_sys_core::action::PToPMoveBase_SendGoal_Request & msg)
{
  return dddmr_sys_core::action::to_yaml(msg);
}

template<>
inline const char * data_type<dddmr_sys_core::action::PToPMoveBase_SendGoal_Request>()
{
  return "dddmr_sys_core::action::PToPMoveBase_SendGoal_Request";
}

template<>
inline const char * name<dddmr_sys_core::action::PToPMoveBase_SendGoal_Request>()
{
  return "dddmr_sys_core/action/PToPMoveBase_SendGoal_Request";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::PToPMoveBase_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<dddmr_sys_core::action::PToPMoveBase_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<dddmr_sys_core::action::PToPMoveBase_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<dddmr_sys_core::action::PToPMoveBase_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<dddmr_sys_core::action::PToPMoveBase_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace dddmr_sys_core
{

namespace action
{

inline void to_flow_style_yaml(
  const PToPMoveBase_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PToPMoveBase_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PToPMoveBase_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dddmr_sys_core

namespace rosidl_generator_traits
{

[[deprecated("use dddmr_sys_core::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dddmr_sys_core::action::PToPMoveBase_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dddmr_sys_core::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dddmr_sys_core::action::to_yaml() instead")]]
inline std::string to_yaml(const dddmr_sys_core::action::PToPMoveBase_SendGoal_Response & msg)
{
  return dddmr_sys_core::action::to_yaml(msg);
}

template<>
inline const char * data_type<dddmr_sys_core::action::PToPMoveBase_SendGoal_Response>()
{
  return "dddmr_sys_core::action::PToPMoveBase_SendGoal_Response";
}

template<>
inline const char * name<dddmr_sys_core::action::PToPMoveBase_SendGoal_Response>()
{
  return "dddmr_sys_core/action/PToPMoveBase_SendGoal_Response";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::PToPMoveBase_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<dddmr_sys_core::action::PToPMoveBase_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<dddmr_sys_core::action::PToPMoveBase_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dddmr_sys_core::action::PToPMoveBase_SendGoal>()
{
  return "dddmr_sys_core::action::PToPMoveBase_SendGoal";
}

template<>
inline const char * name<dddmr_sys_core::action::PToPMoveBase_SendGoal>()
{
  return "dddmr_sys_core/action/PToPMoveBase_SendGoal";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::PToPMoveBase_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<dddmr_sys_core::action::PToPMoveBase_SendGoal_Request>::value &&
    has_fixed_size<dddmr_sys_core::action::PToPMoveBase_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<dddmr_sys_core::action::PToPMoveBase_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<dddmr_sys_core::action::PToPMoveBase_SendGoal_Request>::value &&
    has_bounded_size<dddmr_sys_core::action::PToPMoveBase_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<dddmr_sys_core::action::PToPMoveBase_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<dddmr_sys_core::action::PToPMoveBase_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dddmr_sys_core::action::PToPMoveBase_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace dddmr_sys_core
{

namespace action
{

inline void to_flow_style_yaml(
  const PToPMoveBase_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PToPMoveBase_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PToPMoveBase_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dddmr_sys_core

namespace rosidl_generator_traits
{

[[deprecated("use dddmr_sys_core::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dddmr_sys_core::action::PToPMoveBase_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dddmr_sys_core::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dddmr_sys_core::action::to_yaml() instead")]]
inline std::string to_yaml(const dddmr_sys_core::action::PToPMoveBase_GetResult_Request & msg)
{
  return dddmr_sys_core::action::to_yaml(msg);
}

template<>
inline const char * data_type<dddmr_sys_core::action::PToPMoveBase_GetResult_Request>()
{
  return "dddmr_sys_core::action::PToPMoveBase_GetResult_Request";
}

template<>
inline const char * name<dddmr_sys_core::action::PToPMoveBase_GetResult_Request>()
{
  return "dddmr_sys_core/action/PToPMoveBase_GetResult_Request";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::PToPMoveBase_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<dddmr_sys_core::action::PToPMoveBase_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<dddmr_sys_core::action::PToPMoveBase_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__traits.hpp"

namespace dddmr_sys_core
{

namespace action
{

inline void to_flow_style_yaml(
  const PToPMoveBase_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PToPMoveBase_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PToPMoveBase_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dddmr_sys_core

namespace rosidl_generator_traits
{

[[deprecated("use dddmr_sys_core::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dddmr_sys_core::action::PToPMoveBase_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dddmr_sys_core::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dddmr_sys_core::action::to_yaml() instead")]]
inline std::string to_yaml(const dddmr_sys_core::action::PToPMoveBase_GetResult_Response & msg)
{
  return dddmr_sys_core::action::to_yaml(msg);
}

template<>
inline const char * data_type<dddmr_sys_core::action::PToPMoveBase_GetResult_Response>()
{
  return "dddmr_sys_core::action::PToPMoveBase_GetResult_Response";
}

template<>
inline const char * name<dddmr_sys_core::action::PToPMoveBase_GetResult_Response>()
{
  return "dddmr_sys_core/action/PToPMoveBase_GetResult_Response";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::PToPMoveBase_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<dddmr_sys_core::action::PToPMoveBase_Result>::value> {};

template<>
struct has_bounded_size<dddmr_sys_core::action::PToPMoveBase_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<dddmr_sys_core::action::PToPMoveBase_Result>::value> {};

template<>
struct is_message<dddmr_sys_core::action::PToPMoveBase_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dddmr_sys_core::action::PToPMoveBase_GetResult>()
{
  return "dddmr_sys_core::action::PToPMoveBase_GetResult";
}

template<>
inline const char * name<dddmr_sys_core::action::PToPMoveBase_GetResult>()
{
  return "dddmr_sys_core/action/PToPMoveBase_GetResult";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::PToPMoveBase_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<dddmr_sys_core::action::PToPMoveBase_GetResult_Request>::value &&
    has_fixed_size<dddmr_sys_core::action::PToPMoveBase_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<dddmr_sys_core::action::PToPMoveBase_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<dddmr_sys_core::action::PToPMoveBase_GetResult_Request>::value &&
    has_bounded_size<dddmr_sys_core::action::PToPMoveBase_GetResult_Response>::value
  >
{
};

template<>
struct is_service<dddmr_sys_core::action::PToPMoveBase_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<dddmr_sys_core::action::PToPMoveBase_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dddmr_sys_core::action::PToPMoveBase_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__traits.hpp"

namespace dddmr_sys_core
{

namespace action
{

inline void to_flow_style_yaml(
  const PToPMoveBase_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PToPMoveBase_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PToPMoveBase_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dddmr_sys_core

namespace rosidl_generator_traits
{

[[deprecated("use dddmr_sys_core::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dddmr_sys_core::action::PToPMoveBase_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  dddmr_sys_core::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dddmr_sys_core::action::to_yaml() instead")]]
inline std::string to_yaml(const dddmr_sys_core::action::PToPMoveBase_FeedbackMessage & msg)
{
  return dddmr_sys_core::action::to_yaml(msg);
}

template<>
inline const char * data_type<dddmr_sys_core::action::PToPMoveBase_FeedbackMessage>()
{
  return "dddmr_sys_core::action::PToPMoveBase_FeedbackMessage";
}

template<>
inline const char * name<dddmr_sys_core::action::PToPMoveBase_FeedbackMessage>()
{
  return "dddmr_sys_core/action/PToPMoveBase_FeedbackMessage";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::PToPMoveBase_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<dddmr_sys_core::action::PToPMoveBase_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<dddmr_sys_core::action::PToPMoveBase_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<dddmr_sys_core::action::PToPMoveBase_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<dddmr_sys_core::action::PToPMoveBase_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<dddmr_sys_core::action::PToPMoveBase>
  : std::true_type
{
};

template<>
struct is_action_goal<dddmr_sys_core::action::PToPMoveBase_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<dddmr_sys_core::action::PToPMoveBase_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<dddmr_sys_core::action::PToPMoveBase_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // DDDMR_SYS_CORE__ACTION__DETAIL__P_TO_P_MOVE_BASE__TRAITS_HPP_
