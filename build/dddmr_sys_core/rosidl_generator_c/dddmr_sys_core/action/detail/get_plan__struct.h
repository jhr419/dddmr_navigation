// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dddmr_sys_core:action/GetPlan.idl
// generated code does not contain a copyright notice

#ifndef DDDMR_SYS_CORE__ACTION__DETAIL__GET_PLAN__STRUCT_H_
#define DDDMR_SYS_CORE__ACTION__DETAIL__GET_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal'
// Member 'start'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/GetPlan in the package dddmr_sys_core.
typedef struct dddmr_sys_core__action__GetPlan_Goal
{
  geometry_msgs__msg__PoseStamped goal;
  geometry_msgs__msg__PoseStamped start;
  /// below for dwa global plnner
  bool activate_threading;
} dddmr_sys_core__action__GetPlan_Goal;

// Struct for a sequence of dddmr_sys_core__action__GetPlan_Goal.
typedef struct dddmr_sys_core__action__GetPlan_Goal__Sequence
{
  dddmr_sys_core__action__GetPlan_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dddmr_sys_core__action__GetPlan_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.h"
// Member 'planning_time'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/GetPlan in the package dddmr_sys_core.
typedef struct dddmr_sys_core__action__GetPlan_Result
{
  nav_msgs__msg__Path path;
  builtin_interfaces__msg__Duration planning_time;
} dddmr_sys_core__action__GetPlan_Result;

// Struct for a sequence of dddmr_sys_core__action__GetPlan_Result.
typedef struct dddmr_sys_core__action__GetPlan_Result__Sequence
{
  dddmr_sys_core__action__GetPlan_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dddmr_sys_core__action__GetPlan_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/GetPlan in the package dddmr_sys_core.
typedef struct dddmr_sys_core__action__GetPlan_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} dddmr_sys_core__action__GetPlan_Feedback;

// Struct for a sequence of dddmr_sys_core__action__GetPlan_Feedback.
typedef struct dddmr_sys_core__action__GetPlan_Feedback__Sequence
{
  dddmr_sys_core__action__GetPlan_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dddmr_sys_core__action__GetPlan_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "dddmr_sys_core/action/detail/get_plan__struct.h"

/// Struct defined in action/GetPlan in the package dddmr_sys_core.
typedef struct dddmr_sys_core__action__GetPlan_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  dddmr_sys_core__action__GetPlan_Goal goal;
} dddmr_sys_core__action__GetPlan_SendGoal_Request;

// Struct for a sequence of dddmr_sys_core__action__GetPlan_SendGoal_Request.
typedef struct dddmr_sys_core__action__GetPlan_SendGoal_Request__Sequence
{
  dddmr_sys_core__action__GetPlan_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dddmr_sys_core__action__GetPlan_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GetPlan in the package dddmr_sys_core.
typedef struct dddmr_sys_core__action__GetPlan_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} dddmr_sys_core__action__GetPlan_SendGoal_Response;

// Struct for a sequence of dddmr_sys_core__action__GetPlan_SendGoal_Response.
typedef struct dddmr_sys_core__action__GetPlan_SendGoal_Response__Sequence
{
  dddmr_sys_core__action__GetPlan_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dddmr_sys_core__action__GetPlan_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GetPlan in the package dddmr_sys_core.
typedef struct dddmr_sys_core__action__GetPlan_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} dddmr_sys_core__action__GetPlan_GetResult_Request;

// Struct for a sequence of dddmr_sys_core__action__GetPlan_GetResult_Request.
typedef struct dddmr_sys_core__action__GetPlan_GetResult_Request__Sequence
{
  dddmr_sys_core__action__GetPlan_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dddmr_sys_core__action__GetPlan_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "dddmr_sys_core/action/detail/get_plan__struct.h"

/// Struct defined in action/GetPlan in the package dddmr_sys_core.
typedef struct dddmr_sys_core__action__GetPlan_GetResult_Response
{
  int8_t status;
  dddmr_sys_core__action__GetPlan_Result result;
} dddmr_sys_core__action__GetPlan_GetResult_Response;

// Struct for a sequence of dddmr_sys_core__action__GetPlan_GetResult_Response.
typedef struct dddmr_sys_core__action__GetPlan_GetResult_Response__Sequence
{
  dddmr_sys_core__action__GetPlan_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dddmr_sys_core__action__GetPlan_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "dddmr_sys_core/action/detail/get_plan__struct.h"

/// Struct defined in action/GetPlan in the package dddmr_sys_core.
typedef struct dddmr_sys_core__action__GetPlan_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  dddmr_sys_core__action__GetPlan_Feedback feedback;
} dddmr_sys_core__action__GetPlan_FeedbackMessage;

// Struct for a sequence of dddmr_sys_core__action__GetPlan_FeedbackMessage.
typedef struct dddmr_sys_core__action__GetPlan_FeedbackMessage__Sequence
{
  dddmr_sys_core__action__GetPlan_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dddmr_sys_core__action__GetPlan_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DDDMR_SYS_CORE__ACTION__DETAIL__GET_PLAN__STRUCT_H_
