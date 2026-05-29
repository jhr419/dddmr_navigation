// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dddmr_sys_core:action/RecoveryBehaviors.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dddmr_sys_core/action/detail/recovery_behaviors__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dddmr_sys_core
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RecoveryBehaviors_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dddmr_sys_core::action::RecoveryBehaviors_Goal(_init);
}

void RecoveryBehaviors_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dddmr_sys_core::action::RecoveryBehaviors_Goal *>(message_memory);
  typed_message->~RecoveryBehaviors_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RecoveryBehaviors_Goal_message_member_array[1] = {
  {
    "behavior_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core::action::RecoveryBehaviors_Goal, behavior_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RecoveryBehaviors_Goal_message_members = {
  "dddmr_sys_core::action",  // message namespace
  "RecoveryBehaviors_Goal",  // message name
  1,  // number of fields
  sizeof(dddmr_sys_core::action::RecoveryBehaviors_Goal),
  RecoveryBehaviors_Goal_message_member_array,  // message members
  RecoveryBehaviors_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  RecoveryBehaviors_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RecoveryBehaviors_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RecoveryBehaviors_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dddmr_sys_core


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dddmr_sys_core::action::RecoveryBehaviors_Goal>()
{
  return &::dddmr_sys_core::action::rosidl_typesupport_introspection_cpp::RecoveryBehaviors_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dddmr_sys_core, action, RecoveryBehaviors_Goal)() {
  return &::dddmr_sys_core::action::rosidl_typesupport_introspection_cpp::RecoveryBehaviors_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dddmr_sys_core/action/detail/recovery_behaviors__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dddmr_sys_core
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RecoveryBehaviors_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dddmr_sys_core::action::RecoveryBehaviors_Result(_init);
}

void RecoveryBehaviors_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dddmr_sys_core::action::RecoveryBehaviors_Result *>(message_memory);
  typed_message->~RecoveryBehaviors_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RecoveryBehaviors_Result_message_member_array[2] = {
  {
    "succeed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core::action::RecoveryBehaviors_Result, succeed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core::action::RecoveryBehaviors_Result, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RecoveryBehaviors_Result_message_members = {
  "dddmr_sys_core::action",  // message namespace
  "RecoveryBehaviors_Result",  // message name
  2,  // number of fields
  sizeof(dddmr_sys_core::action::RecoveryBehaviors_Result),
  RecoveryBehaviors_Result_message_member_array,  // message members
  RecoveryBehaviors_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  RecoveryBehaviors_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RecoveryBehaviors_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RecoveryBehaviors_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dddmr_sys_core


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dddmr_sys_core::action::RecoveryBehaviors_Result>()
{
  return &::dddmr_sys_core::action::rosidl_typesupport_introspection_cpp::RecoveryBehaviors_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dddmr_sys_core, action, RecoveryBehaviors_Result)() {
  return &::dddmr_sys_core::action::rosidl_typesupport_introspection_cpp::RecoveryBehaviors_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dddmr_sys_core/action/detail/recovery_behaviors__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dddmr_sys_core
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RecoveryBehaviors_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dddmr_sys_core::action::RecoveryBehaviors_Feedback(_init);
}

void RecoveryBehaviors_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dddmr_sys_core::action::RecoveryBehaviors_Feedback *>(message_memory);
  typed_message->~RecoveryBehaviors_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RecoveryBehaviors_Feedback_message_member_array[1] = {
  {
    "undergoing",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core::action::RecoveryBehaviors_Feedback, undergoing),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RecoveryBehaviors_Feedback_message_members = {
  "dddmr_sys_core::action",  // message namespace
  "RecoveryBehaviors_Feedback",  // message name
  1,  // number of fields
  sizeof(dddmr_sys_core::action::RecoveryBehaviors_Feedback),
  RecoveryBehaviors_Feedback_message_member_array,  // message members
  RecoveryBehaviors_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  RecoveryBehaviors_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RecoveryBehaviors_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RecoveryBehaviors_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dddmr_sys_core


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dddmr_sys_core::action::RecoveryBehaviors_Feedback>()
{
  return &::dddmr_sys_core::action::rosidl_typesupport_introspection_cpp::RecoveryBehaviors_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dddmr_sys_core, action, RecoveryBehaviors_Feedback)() {
  return &::dddmr_sys_core::action::rosidl_typesupport_introspection_cpp::RecoveryBehaviors_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dddmr_sys_core/action/detail/recovery_behaviors__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dddmr_sys_core
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RecoveryBehaviors_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request(_init);
}

void RecoveryBehaviors_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request *>(message_memory);
  typed_message->~RecoveryBehaviors_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RecoveryBehaviors_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dddmr_sys_core::action::RecoveryBehaviors_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RecoveryBehaviors_SendGoal_Request_message_members = {
  "dddmr_sys_core::action",  // message namespace
  "RecoveryBehaviors_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request),
  RecoveryBehaviors_SendGoal_Request_message_member_array,  // message members
  RecoveryBehaviors_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RecoveryBehaviors_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RecoveryBehaviors_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RecoveryBehaviors_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dddmr_sys_core


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request>()
{
  return &::dddmr_sys_core::action::rosidl_typesupport_introspection_cpp::RecoveryBehaviors_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dddmr_sys_core, action, RecoveryBehaviors_SendGoal_Request)() {
  return &::dddmr_sys_core::action::rosidl_typesupport_introspection_cpp::RecoveryBehaviors_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dddmr_sys_core/action/detail/recovery_behaviors__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dddmr_sys_core
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RecoveryBehaviors_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response(_init);
}

void RecoveryBehaviors_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response *>(message_memory);
  typed_message->~RecoveryBehaviors_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RecoveryBehaviors_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RecoveryBehaviors_SendGoal_Response_message_members = {
  "dddmr_sys_core::action",  // message namespace
  "RecoveryBehaviors_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response),
  RecoveryBehaviors_SendGoal_Response_message_member_array,  // message members
  RecoveryBehaviors_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RecoveryBehaviors_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RecoveryBehaviors_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RecoveryBehaviors_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dddmr_sys_core


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response>()
{
  return &::dddmr_sys_core::action::rosidl_typesupport_introspection_cpp::RecoveryBehaviors_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dddmr_sys_core, action, RecoveryBehaviors_SendGoal_Response)() {
  return &::dddmr_sys_core::action::rosidl_typesupport_introspection_cpp::RecoveryBehaviors_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "dddmr_sys_core/action/detail/recovery_behaviors__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace dddmr_sys_core
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers RecoveryBehaviors_SendGoal_service_members = {
  "dddmr_sys_core::action",  // service namespace
  "RecoveryBehaviors_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<dddmr_sys_core::action::RecoveryBehaviors_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t RecoveryBehaviors_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RecoveryBehaviors_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dddmr_sys_core


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dddmr_sys_core::action::RecoveryBehaviors_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::dddmr_sys_core::action::rosidl_typesupport_introspection_cpp::RecoveryBehaviors_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dddmr_sys_core, action, RecoveryBehaviors_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<dddmr_sys_core::action::RecoveryBehaviors_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dddmr_sys_core/action/detail/recovery_behaviors__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dddmr_sys_core
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RecoveryBehaviors_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request(_init);
}

void RecoveryBehaviors_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request *>(message_memory);
  typed_message->~RecoveryBehaviors_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RecoveryBehaviors_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RecoveryBehaviors_GetResult_Request_message_members = {
  "dddmr_sys_core::action",  // message namespace
  "RecoveryBehaviors_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request),
  RecoveryBehaviors_GetResult_Request_message_member_array,  // message members
  RecoveryBehaviors_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RecoveryBehaviors_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RecoveryBehaviors_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RecoveryBehaviors_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dddmr_sys_core


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request>()
{
  return &::dddmr_sys_core::action::rosidl_typesupport_introspection_cpp::RecoveryBehaviors_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dddmr_sys_core, action, RecoveryBehaviors_GetResult_Request)() {
  return &::dddmr_sys_core::action::rosidl_typesupport_introspection_cpp::RecoveryBehaviors_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dddmr_sys_core/action/detail/recovery_behaviors__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dddmr_sys_core
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RecoveryBehaviors_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response(_init);
}

void RecoveryBehaviors_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response *>(message_memory);
  typed_message->~RecoveryBehaviors_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RecoveryBehaviors_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dddmr_sys_core::action::RecoveryBehaviors_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RecoveryBehaviors_GetResult_Response_message_members = {
  "dddmr_sys_core::action",  // message namespace
  "RecoveryBehaviors_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response),
  RecoveryBehaviors_GetResult_Response_message_member_array,  // message members
  RecoveryBehaviors_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RecoveryBehaviors_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RecoveryBehaviors_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RecoveryBehaviors_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dddmr_sys_core


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response>()
{
  return &::dddmr_sys_core::action::rosidl_typesupport_introspection_cpp::RecoveryBehaviors_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dddmr_sys_core, action, RecoveryBehaviors_GetResult_Response)() {
  return &::dddmr_sys_core::action::rosidl_typesupport_introspection_cpp::RecoveryBehaviors_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "dddmr_sys_core/action/detail/recovery_behaviors__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace dddmr_sys_core
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers RecoveryBehaviors_GetResult_service_members = {
  "dddmr_sys_core::action",  // service namespace
  "RecoveryBehaviors_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<dddmr_sys_core::action::RecoveryBehaviors_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t RecoveryBehaviors_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RecoveryBehaviors_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dddmr_sys_core


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dddmr_sys_core::action::RecoveryBehaviors_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::dddmr_sys_core::action::rosidl_typesupport_introspection_cpp::RecoveryBehaviors_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dddmr_sys_core, action, RecoveryBehaviors_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<dddmr_sys_core::action::RecoveryBehaviors_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dddmr_sys_core/action/detail/recovery_behaviors__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dddmr_sys_core
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RecoveryBehaviors_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage(_init);
}

void RecoveryBehaviors_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage *>(message_memory);
  typed_message->~RecoveryBehaviors_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RecoveryBehaviors_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dddmr_sys_core::action::RecoveryBehaviors_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RecoveryBehaviors_FeedbackMessage_message_members = {
  "dddmr_sys_core::action",  // message namespace
  "RecoveryBehaviors_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage),
  RecoveryBehaviors_FeedbackMessage_message_member_array,  // message members
  RecoveryBehaviors_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  RecoveryBehaviors_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RecoveryBehaviors_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RecoveryBehaviors_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dddmr_sys_core


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage>()
{
  return &::dddmr_sys_core::action::rosidl_typesupport_introspection_cpp::RecoveryBehaviors_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dddmr_sys_core, action, RecoveryBehaviors_FeedbackMessage)() {
  return &::dddmr_sys_core::action::rosidl_typesupport_introspection_cpp::RecoveryBehaviors_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
