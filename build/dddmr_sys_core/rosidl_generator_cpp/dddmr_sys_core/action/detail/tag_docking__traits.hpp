// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dddmr_sys_core:action/TagDocking.idl
// generated code does not contain a copyright notice

#ifndef DDDMR_SYS_CORE__ACTION__DETAIL__TAG_DOCKING__TRAITS_HPP_
#define DDDMR_SYS_CORE__ACTION__DETAIL__TAG_DOCKING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dddmr_sys_core/action/detail/tag_docking__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dddmr_sys_core
{

namespace action
{

inline void to_flow_style_yaml(
  const TagDocking_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TagDocking_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TagDocking_Goal & msg, bool use_flow_style = false)
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
  const dddmr_sys_core::action::TagDocking_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  dddmr_sys_core::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dddmr_sys_core::action::to_yaml() instead")]]
inline std::string to_yaml(const dddmr_sys_core::action::TagDocking_Goal & msg)
{
  return dddmr_sys_core::action::to_yaml(msg);
}

template<>
inline const char * data_type<dddmr_sys_core::action::TagDocking_Goal>()
{
  return "dddmr_sys_core::action::TagDocking_Goal";
}

template<>
inline const char * name<dddmr_sys_core::action::TagDocking_Goal>()
{
  return "dddmr_sys_core/action/TagDocking_Goal";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::TagDocking_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dddmr_sys_core::action::TagDocking_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dddmr_sys_core::action::TagDocking_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dddmr_sys_core
{

namespace action
{

inline void to_flow_style_yaml(
  const TagDocking_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: succeed
  {
    out << "succeed: ";
    rosidl_generator_traits::value_to_yaml(msg.succeed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TagDocking_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: succeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "succeed: ";
    rosidl_generator_traits::value_to_yaml(msg.succeed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TagDocking_Result & msg, bool use_flow_style = false)
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
  const dddmr_sys_core::action::TagDocking_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  dddmr_sys_core::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dddmr_sys_core::action::to_yaml() instead")]]
inline std::string to_yaml(const dddmr_sys_core::action::TagDocking_Result & msg)
{
  return dddmr_sys_core::action::to_yaml(msg);
}

template<>
inline const char * data_type<dddmr_sys_core::action::TagDocking_Result>()
{
  return "dddmr_sys_core::action::TagDocking_Result";
}

template<>
inline const char * name<dddmr_sys_core::action::TagDocking_Result>()
{
  return "dddmr_sys_core/action/TagDocking_Result";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::TagDocking_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dddmr_sys_core::action::TagDocking_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dddmr_sys_core::action::TagDocking_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dddmr_sys_core
{

namespace action
{

inline void to_flow_style_yaml(
  const TagDocking_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TagDocking_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TagDocking_Feedback & msg, bool use_flow_style = false)
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
  const dddmr_sys_core::action::TagDocking_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  dddmr_sys_core::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dddmr_sys_core::action::to_yaml() instead")]]
inline std::string to_yaml(const dddmr_sys_core::action::TagDocking_Feedback & msg)
{
  return dddmr_sys_core::action::to_yaml(msg);
}

template<>
inline const char * data_type<dddmr_sys_core::action::TagDocking_Feedback>()
{
  return "dddmr_sys_core::action::TagDocking_Feedback";
}

template<>
inline const char * name<dddmr_sys_core::action::TagDocking_Feedback>()
{
  return "dddmr_sys_core/action/TagDocking_Feedback";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::TagDocking_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dddmr_sys_core::action::TagDocking_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dddmr_sys_core::action::TagDocking_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "dddmr_sys_core/action/detail/tag_docking__traits.hpp"

namespace dddmr_sys_core
{

namespace action
{

inline void to_flow_style_yaml(
  const TagDocking_SendGoal_Request & msg,
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
  const TagDocking_SendGoal_Request & msg,
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

inline std::string to_yaml(const TagDocking_SendGoal_Request & msg, bool use_flow_style = false)
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
  const dddmr_sys_core::action::TagDocking_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dddmr_sys_core::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dddmr_sys_core::action::to_yaml() instead")]]
inline std::string to_yaml(const dddmr_sys_core::action::TagDocking_SendGoal_Request & msg)
{
  return dddmr_sys_core::action::to_yaml(msg);
}

template<>
inline const char * data_type<dddmr_sys_core::action::TagDocking_SendGoal_Request>()
{
  return "dddmr_sys_core::action::TagDocking_SendGoal_Request";
}

template<>
inline const char * name<dddmr_sys_core::action::TagDocking_SendGoal_Request>()
{
  return "dddmr_sys_core/action/TagDocking_SendGoal_Request";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::TagDocking_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<dddmr_sys_core::action::TagDocking_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<dddmr_sys_core::action::TagDocking_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<dddmr_sys_core::action::TagDocking_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<dddmr_sys_core::action::TagDocking_SendGoal_Request>
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
  const TagDocking_SendGoal_Response & msg,
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
  const TagDocking_SendGoal_Response & msg,
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

inline std::string to_yaml(const TagDocking_SendGoal_Response & msg, bool use_flow_style = false)
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
  const dddmr_sys_core::action::TagDocking_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dddmr_sys_core::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dddmr_sys_core::action::to_yaml() instead")]]
inline std::string to_yaml(const dddmr_sys_core::action::TagDocking_SendGoal_Response & msg)
{
  return dddmr_sys_core::action::to_yaml(msg);
}

template<>
inline const char * data_type<dddmr_sys_core::action::TagDocking_SendGoal_Response>()
{
  return "dddmr_sys_core::action::TagDocking_SendGoal_Response";
}

template<>
inline const char * name<dddmr_sys_core::action::TagDocking_SendGoal_Response>()
{
  return "dddmr_sys_core/action/TagDocking_SendGoal_Response";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::TagDocking_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<dddmr_sys_core::action::TagDocking_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<dddmr_sys_core::action::TagDocking_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dddmr_sys_core::action::TagDocking_SendGoal>()
{
  return "dddmr_sys_core::action::TagDocking_SendGoal";
}

template<>
inline const char * name<dddmr_sys_core::action::TagDocking_SendGoal>()
{
  return "dddmr_sys_core/action/TagDocking_SendGoal";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::TagDocking_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<dddmr_sys_core::action::TagDocking_SendGoal_Request>::value &&
    has_fixed_size<dddmr_sys_core::action::TagDocking_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<dddmr_sys_core::action::TagDocking_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<dddmr_sys_core::action::TagDocking_SendGoal_Request>::value &&
    has_bounded_size<dddmr_sys_core::action::TagDocking_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<dddmr_sys_core::action::TagDocking_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<dddmr_sys_core::action::TagDocking_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dddmr_sys_core::action::TagDocking_SendGoal_Response>
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
  const TagDocking_GetResult_Request & msg,
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
  const TagDocking_GetResult_Request & msg,
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

inline std::string to_yaml(const TagDocking_GetResult_Request & msg, bool use_flow_style = false)
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
  const dddmr_sys_core::action::TagDocking_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dddmr_sys_core::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dddmr_sys_core::action::to_yaml() instead")]]
inline std::string to_yaml(const dddmr_sys_core::action::TagDocking_GetResult_Request & msg)
{
  return dddmr_sys_core::action::to_yaml(msg);
}

template<>
inline const char * data_type<dddmr_sys_core::action::TagDocking_GetResult_Request>()
{
  return "dddmr_sys_core::action::TagDocking_GetResult_Request";
}

template<>
inline const char * name<dddmr_sys_core::action::TagDocking_GetResult_Request>()
{
  return "dddmr_sys_core/action/TagDocking_GetResult_Request";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::TagDocking_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<dddmr_sys_core::action::TagDocking_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<dddmr_sys_core::action::TagDocking_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "dddmr_sys_core/action/detail/tag_docking__traits.hpp"

namespace dddmr_sys_core
{

namespace action
{

inline void to_flow_style_yaml(
  const TagDocking_GetResult_Response & msg,
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
  const TagDocking_GetResult_Response & msg,
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

inline std::string to_yaml(const TagDocking_GetResult_Response & msg, bool use_flow_style = false)
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
  const dddmr_sys_core::action::TagDocking_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dddmr_sys_core::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dddmr_sys_core::action::to_yaml() instead")]]
inline std::string to_yaml(const dddmr_sys_core::action::TagDocking_GetResult_Response & msg)
{
  return dddmr_sys_core::action::to_yaml(msg);
}

template<>
inline const char * data_type<dddmr_sys_core::action::TagDocking_GetResult_Response>()
{
  return "dddmr_sys_core::action::TagDocking_GetResult_Response";
}

template<>
inline const char * name<dddmr_sys_core::action::TagDocking_GetResult_Response>()
{
  return "dddmr_sys_core/action/TagDocking_GetResult_Response";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::TagDocking_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<dddmr_sys_core::action::TagDocking_Result>::value> {};

template<>
struct has_bounded_size<dddmr_sys_core::action::TagDocking_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<dddmr_sys_core::action::TagDocking_Result>::value> {};

template<>
struct is_message<dddmr_sys_core::action::TagDocking_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dddmr_sys_core::action::TagDocking_GetResult>()
{
  return "dddmr_sys_core::action::TagDocking_GetResult";
}

template<>
inline const char * name<dddmr_sys_core::action::TagDocking_GetResult>()
{
  return "dddmr_sys_core/action/TagDocking_GetResult";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::TagDocking_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<dddmr_sys_core::action::TagDocking_GetResult_Request>::value &&
    has_fixed_size<dddmr_sys_core::action::TagDocking_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<dddmr_sys_core::action::TagDocking_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<dddmr_sys_core::action::TagDocking_GetResult_Request>::value &&
    has_bounded_size<dddmr_sys_core::action::TagDocking_GetResult_Response>::value
  >
{
};

template<>
struct is_service<dddmr_sys_core::action::TagDocking_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<dddmr_sys_core::action::TagDocking_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dddmr_sys_core::action::TagDocking_GetResult_Response>
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
// #include "dddmr_sys_core/action/detail/tag_docking__traits.hpp"

namespace dddmr_sys_core
{

namespace action
{

inline void to_flow_style_yaml(
  const TagDocking_FeedbackMessage & msg,
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
  const TagDocking_FeedbackMessage & msg,
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

inline std::string to_yaml(const TagDocking_FeedbackMessage & msg, bool use_flow_style = false)
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
  const dddmr_sys_core::action::TagDocking_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  dddmr_sys_core::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dddmr_sys_core::action::to_yaml() instead")]]
inline std::string to_yaml(const dddmr_sys_core::action::TagDocking_FeedbackMessage & msg)
{
  return dddmr_sys_core::action::to_yaml(msg);
}

template<>
inline const char * data_type<dddmr_sys_core::action::TagDocking_FeedbackMessage>()
{
  return "dddmr_sys_core::action::TagDocking_FeedbackMessage";
}

template<>
inline const char * name<dddmr_sys_core::action::TagDocking_FeedbackMessage>()
{
  return "dddmr_sys_core/action/TagDocking_FeedbackMessage";
}

template<>
struct has_fixed_size<dddmr_sys_core::action::TagDocking_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<dddmr_sys_core::action::TagDocking_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<dddmr_sys_core::action::TagDocking_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<dddmr_sys_core::action::TagDocking_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<dddmr_sys_core::action::TagDocking_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<dddmr_sys_core::action::TagDocking>
  : std::true_type
{
};

template<>
struct is_action_goal<dddmr_sys_core::action::TagDocking_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<dddmr_sys_core::action::TagDocking_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<dddmr_sys_core::action::TagDocking_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // DDDMR_SYS_CORE__ACTION__DETAIL__TAG_DOCKING__TRAITS_HPP_
