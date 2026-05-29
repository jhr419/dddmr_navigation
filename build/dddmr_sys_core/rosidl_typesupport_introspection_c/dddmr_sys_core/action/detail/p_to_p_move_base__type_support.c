// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dddmr_sys_core:action/PToPMoveBase.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dddmr_sys_core/action/detail/p_to_p_move_base__rosidl_typesupport_introspection_c.h"
#include "dddmr_sys_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dddmr_sys_core/action/detail/p_to_p_move_base__functions.h"
#include "dddmr_sys_core/action/detail/p_to_p_move_base__struct.h"


// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dddmr_sys_core__action__PToPMoveBase_Goal__rosidl_typesupport_introspection_c__PToPMoveBase_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dddmr_sys_core__action__PToPMoveBase_Goal__init(message_memory);
}

void dddmr_sys_core__action__PToPMoveBase_Goal__rosidl_typesupport_introspection_c__PToPMoveBase_Goal_fini_function(void * message_memory)
{
  dddmr_sys_core__action__PToPMoveBase_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dddmr_sys_core__action__PToPMoveBase_Goal__rosidl_typesupport_introspection_c__PToPMoveBase_Goal_message_member_array[2] = {
  {
    "target_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__action__PToPMoveBase_Goal, target_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__action__PToPMoveBase_Goal, target_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dddmr_sys_core__action__PToPMoveBase_Goal__rosidl_typesupport_introspection_c__PToPMoveBase_Goal_message_members = {
  "dddmr_sys_core__action",  // message namespace
  "PToPMoveBase_Goal",  // message name
  2,  // number of fields
  sizeof(dddmr_sys_core__action__PToPMoveBase_Goal),
  dddmr_sys_core__action__PToPMoveBase_Goal__rosidl_typesupport_introspection_c__PToPMoveBase_Goal_message_member_array,  // message members
  dddmr_sys_core__action__PToPMoveBase_Goal__rosidl_typesupport_introspection_c__PToPMoveBase_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  dddmr_sys_core__action__PToPMoveBase_Goal__rosidl_typesupport_introspection_c__PToPMoveBase_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dddmr_sys_core__action__PToPMoveBase_Goal__rosidl_typesupport_introspection_c__PToPMoveBase_Goal_message_type_support_handle = {
  0,
  &dddmr_sys_core__action__PToPMoveBase_Goal__rosidl_typesupport_introspection_c__PToPMoveBase_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dddmr_sys_core
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_Goal)() {
  dddmr_sys_core__action__PToPMoveBase_Goal__rosidl_typesupport_introspection_c__PToPMoveBase_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!dddmr_sys_core__action__PToPMoveBase_Goal__rosidl_typesupport_introspection_c__PToPMoveBase_Goal_message_type_support_handle.typesupport_identifier) {
    dddmr_sys_core__action__PToPMoveBase_Goal__rosidl_typesupport_introspection_c__PToPMoveBase_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dddmr_sys_core__action__PToPMoveBase_Goal__rosidl_typesupport_introspection_c__PToPMoveBase_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dddmr_sys_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__functions.h"
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__struct.h"


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dddmr_sys_core__action__PToPMoveBase_Result__rosidl_typesupport_introspection_c__PToPMoveBase_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dddmr_sys_core__action__PToPMoveBase_Result__init(message_memory);
}

void dddmr_sys_core__action__PToPMoveBase_Result__rosidl_typesupport_introspection_c__PToPMoveBase_Result_fini_function(void * message_memory)
{
  dddmr_sys_core__action__PToPMoveBase_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dddmr_sys_core__action__PToPMoveBase_Result__rosidl_typesupport_introspection_c__PToPMoveBase_Result_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__action__PToPMoveBase_Result, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__action__PToPMoveBase_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dddmr_sys_core__action__PToPMoveBase_Result__rosidl_typesupport_introspection_c__PToPMoveBase_Result_message_members = {
  "dddmr_sys_core__action",  // message namespace
  "PToPMoveBase_Result",  // message name
  2,  // number of fields
  sizeof(dddmr_sys_core__action__PToPMoveBase_Result),
  dddmr_sys_core__action__PToPMoveBase_Result__rosidl_typesupport_introspection_c__PToPMoveBase_Result_message_member_array,  // message members
  dddmr_sys_core__action__PToPMoveBase_Result__rosidl_typesupport_introspection_c__PToPMoveBase_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  dddmr_sys_core__action__PToPMoveBase_Result__rosidl_typesupport_introspection_c__PToPMoveBase_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dddmr_sys_core__action__PToPMoveBase_Result__rosidl_typesupport_introspection_c__PToPMoveBase_Result_message_type_support_handle = {
  0,
  &dddmr_sys_core__action__PToPMoveBase_Result__rosidl_typesupport_introspection_c__PToPMoveBase_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dddmr_sys_core
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_Result)() {
  if (!dddmr_sys_core__action__PToPMoveBase_Result__rosidl_typesupport_introspection_c__PToPMoveBase_Result_message_type_support_handle.typesupport_identifier) {
    dddmr_sys_core__action__PToPMoveBase_Result__rosidl_typesupport_introspection_c__PToPMoveBase_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dddmr_sys_core__action__PToPMoveBase_Result__rosidl_typesupport_introspection_c__PToPMoveBase_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dddmr_sys_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__functions.h"
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__struct.h"


// Include directives for member types
// Member `base_position`
#include "geometry_msgs/msg/transform_stamped.h"
// Member `base_position`
#include "geometry_msgs/msg/detail/transform_stamped__rosidl_typesupport_introspection_c.h"
// Member `last_decision`
// Member `current_decision`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dddmr_sys_core__action__PToPMoveBase_Feedback__rosidl_typesupport_introspection_c__PToPMoveBase_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dddmr_sys_core__action__PToPMoveBase_Feedback__init(message_memory);
}

void dddmr_sys_core__action__PToPMoveBase_Feedback__rosidl_typesupport_introspection_c__PToPMoveBase_Feedback_fini_function(void * message_memory)
{
  dddmr_sys_core__action__PToPMoveBase_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dddmr_sys_core__action__PToPMoveBase_Feedback__rosidl_typesupport_introspection_c__PToPMoveBase_Feedback_message_member_array[3] = {
  {
    "base_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__action__PToPMoveBase_Feedback, base_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_decision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__action__PToPMoveBase_Feedback, last_decision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_decision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__action__PToPMoveBase_Feedback, current_decision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dddmr_sys_core__action__PToPMoveBase_Feedback__rosidl_typesupport_introspection_c__PToPMoveBase_Feedback_message_members = {
  "dddmr_sys_core__action",  // message namespace
  "PToPMoveBase_Feedback",  // message name
  3,  // number of fields
  sizeof(dddmr_sys_core__action__PToPMoveBase_Feedback),
  dddmr_sys_core__action__PToPMoveBase_Feedback__rosidl_typesupport_introspection_c__PToPMoveBase_Feedback_message_member_array,  // message members
  dddmr_sys_core__action__PToPMoveBase_Feedback__rosidl_typesupport_introspection_c__PToPMoveBase_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  dddmr_sys_core__action__PToPMoveBase_Feedback__rosidl_typesupport_introspection_c__PToPMoveBase_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dddmr_sys_core__action__PToPMoveBase_Feedback__rosidl_typesupport_introspection_c__PToPMoveBase_Feedback_message_type_support_handle = {
  0,
  &dddmr_sys_core__action__PToPMoveBase_Feedback__rosidl_typesupport_introspection_c__PToPMoveBase_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dddmr_sys_core
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_Feedback)() {
  dddmr_sys_core__action__PToPMoveBase_Feedback__rosidl_typesupport_introspection_c__PToPMoveBase_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  if (!dddmr_sys_core__action__PToPMoveBase_Feedback__rosidl_typesupport_introspection_c__PToPMoveBase_Feedback_message_type_support_handle.typesupport_identifier) {
    dddmr_sys_core__action__PToPMoveBase_Feedback__rosidl_typesupport_introspection_c__PToPMoveBase_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dddmr_sys_core__action__PToPMoveBase_Feedback__rosidl_typesupport_introspection_c__PToPMoveBase_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dddmr_sys_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__functions.h"
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "dddmr_sys_core/action/p_to_p_move_base.h"
// Member `goal`
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__init(message_memory);
}

void dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Request_fini_function(void * message_memory)
{
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__action__PToPMoveBase_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__action__PToPMoveBase_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Request_message_members = {
  "dddmr_sys_core__action",  // message namespace
  "PToPMoveBase_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(dddmr_sys_core__action__PToPMoveBase_SendGoal_Request),
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Request_message_member_array,  // message members
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Request_message_type_support_handle = {
  0,
  &dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dddmr_sys_core
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_SendGoal_Request)() {
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_Goal)();
  if (!dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dddmr_sys_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__functions.h"
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__init(message_memory);
}

void dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Response_fini_function(void * message_memory)
{
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__action__PToPMoveBase_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__action__PToPMoveBase_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Response_message_members = {
  "dddmr_sys_core__action",  // message namespace
  "PToPMoveBase_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(dddmr_sys_core__action__PToPMoveBase_SendGoal_Response),
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Response_message_member_array,  // message members
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Response_message_type_support_handle = {
  0,
  &dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dddmr_sys_core
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_SendGoal_Response)() {
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dddmr_sys_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers dddmr_sys_core__action__detail__p_to_p_move_base__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_service_members = {
  "dddmr_sys_core__action",  // service namespace
  "PToPMoveBase_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // dddmr_sys_core__action__detail__p_to_p_move_base__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // dddmr_sys_core__action__detail__p_to_p_move_base__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t dddmr_sys_core__action__detail__p_to_p_move_base__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_service_type_support_handle = {
  0,
  &dddmr_sys_core__action__detail__p_to_p_move_base__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dddmr_sys_core
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_SendGoal)() {
  if (!dddmr_sys_core__action__detail__p_to_p_move_base__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_service_type_support_handle.typesupport_identifier) {
    dddmr_sys_core__action__detail__p_to_p_move_base__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)dddmr_sys_core__action__detail__p_to_p_move_base__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_SendGoal_Response)()->data;
  }

  return &dddmr_sys_core__action__detail__p_to_p_move_base__rosidl_typesupport_introspection_c__PToPMoveBase_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dddmr_sys_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__functions.h"
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dddmr_sys_core__action__PToPMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dddmr_sys_core__action__PToPMoveBase_GetResult_Request__init(message_memory);
}

void dddmr_sys_core__action__PToPMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Request_fini_function(void * message_memory)
{
  dddmr_sys_core__action__PToPMoveBase_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dddmr_sys_core__action__PToPMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__action__PToPMoveBase_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dddmr_sys_core__action__PToPMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Request_message_members = {
  "dddmr_sys_core__action",  // message namespace
  "PToPMoveBase_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(dddmr_sys_core__action__PToPMoveBase_GetResult_Request),
  dddmr_sys_core__action__PToPMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Request_message_member_array,  // message members
  dddmr_sys_core__action__PToPMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  dddmr_sys_core__action__PToPMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dddmr_sys_core__action__PToPMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Request_message_type_support_handle = {
  0,
  &dddmr_sys_core__action__PToPMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dddmr_sys_core
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_GetResult_Request)() {
  dddmr_sys_core__action__PToPMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!dddmr_sys_core__action__PToPMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    dddmr_sys_core__action__PToPMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dddmr_sys_core__action__PToPMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dddmr_sys_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__functions.h"
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "dddmr_sys_core/action/p_to_p_move_base.h"
// Member `result`
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dddmr_sys_core__action__PToPMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dddmr_sys_core__action__PToPMoveBase_GetResult_Response__init(message_memory);
}

void dddmr_sys_core__action__PToPMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Response_fini_function(void * message_memory)
{
  dddmr_sys_core__action__PToPMoveBase_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dddmr_sys_core__action__PToPMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__action__PToPMoveBase_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__action__PToPMoveBase_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dddmr_sys_core__action__PToPMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Response_message_members = {
  "dddmr_sys_core__action",  // message namespace
  "PToPMoveBase_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(dddmr_sys_core__action__PToPMoveBase_GetResult_Response),
  dddmr_sys_core__action__PToPMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Response_message_member_array,  // message members
  dddmr_sys_core__action__PToPMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  dddmr_sys_core__action__PToPMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dddmr_sys_core__action__PToPMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Response_message_type_support_handle = {
  0,
  &dddmr_sys_core__action__PToPMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dddmr_sys_core
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_GetResult_Response)() {
  dddmr_sys_core__action__PToPMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_Result)();
  if (!dddmr_sys_core__action__PToPMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    dddmr_sys_core__action__PToPMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dddmr_sys_core__action__PToPMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dddmr_sys_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers dddmr_sys_core__action__detail__p_to_p_move_base__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_service_members = {
  "dddmr_sys_core__action",  // service namespace
  "PToPMoveBase_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // dddmr_sys_core__action__detail__p_to_p_move_base__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // dddmr_sys_core__action__detail__p_to_p_move_base__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t dddmr_sys_core__action__detail__p_to_p_move_base__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_service_type_support_handle = {
  0,
  &dddmr_sys_core__action__detail__p_to_p_move_base__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dddmr_sys_core
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_GetResult)() {
  if (!dddmr_sys_core__action__detail__p_to_p_move_base__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_service_type_support_handle.typesupport_identifier) {
    dddmr_sys_core__action__detail__p_to_p_move_base__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)dddmr_sys_core__action__detail__p_to_p_move_base__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_GetResult_Response)()->data;
  }

  return &dddmr_sys_core__action__detail__p_to_p_move_base__rosidl_typesupport_introspection_c__PToPMoveBase_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dddmr_sys_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__functions.h"
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "dddmr_sys_core/action/p_to_p_move_base.h"
// Member `feedback`
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__PToPMoveBase_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__init(message_memory);
}

void dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__PToPMoveBase_FeedbackMessage_fini_function(void * message_memory)
{
  dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__PToPMoveBase_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__action__PToPMoveBase_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__action__PToPMoveBase_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__PToPMoveBase_FeedbackMessage_message_members = {
  "dddmr_sys_core__action",  // message namespace
  "PToPMoveBase_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(dddmr_sys_core__action__PToPMoveBase_FeedbackMessage),
  dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__PToPMoveBase_FeedbackMessage_message_member_array,  // message members
  dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__PToPMoveBase_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__PToPMoveBase_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__PToPMoveBase_FeedbackMessage_message_type_support_handle = {
  0,
  &dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__PToPMoveBase_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dddmr_sys_core
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_FeedbackMessage)() {
  dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__PToPMoveBase_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__PToPMoveBase_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, action, PToPMoveBase_Feedback)();
  if (!dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__PToPMoveBase_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__PToPMoveBase_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__PToPMoveBase_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
