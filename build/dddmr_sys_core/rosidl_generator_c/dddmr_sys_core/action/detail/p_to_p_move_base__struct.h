// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dddmr_sys_core:action/PToPMoveBase.idl
// generated code does not contain a copyright notice

#ifndef DDDMR_SYS_CORE__ACTION__DETAIL__P_TO_P_MOVE_BASE__STRUCT_H_
#define DDDMR_SYS_CORE__ACTION__DETAIL__P_TO_P_MOVE_BASE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/PToPMoveBase in the package dddmr_sys_core.
typedef struct dddmr_sys_core__action__PToPMoveBase_Goal
{
  geometry_msgs__msg__PoseStamped target_pose;
  float target_value;
} dddmr_sys_core__action__PToPMoveBase_Goal;

// Struct for a sequence of dddmr_sys_core__action__PToPMoveBase_Goal.
typedef struct dddmr_sys_core__action__PToPMoveBase_Goal__Sequence
{
  dddmr_sys_core__action__PToPMoveBase_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dddmr_sys_core__action__PToPMoveBase_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/PToPMoveBase in the package dddmr_sys_core.
typedef struct dddmr_sys_core__action__PToPMoveBase_Result
{
  int32_t status;
  rosidl_runtime_c__String result;
} dddmr_sys_core__action__PToPMoveBase_Result;

// Struct for a sequence of dddmr_sys_core__action__PToPMoveBase_Result.
typedef struct dddmr_sys_core__action__PToPMoveBase_Result__Sequence
{
  dddmr_sys_core__action__PToPMoveBase_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dddmr_sys_core__action__PToPMoveBase_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'base_position'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"
// Member 'last_decision'
// Member 'current_decision'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/PToPMoveBase in the package dddmr_sys_core.
typedef struct dddmr_sys_core__action__PToPMoveBase_Feedback
{
  geometry_msgs__msg__TransformStamped base_position;
  rosidl_runtime_c__String last_decision;
  rosidl_runtime_c__String current_decision;
} dddmr_sys_core__action__PToPMoveBase_Feedback;

// Struct for a sequence of dddmr_sys_core__action__PToPMoveBase_Feedback.
typedef struct dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence
{
  dddmr_sys_core__action__PToPMoveBase_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "dddmr_sys_core/action/detail/p_to_p_move_base__struct.h"

/// Struct defined in action/PToPMoveBase in the package dddmr_sys_core.
typedef struct dddmr_sys_core__action__PToPMoveBase_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  dddmr_sys_core__action__PToPMoveBase_Goal goal;
} dddmr_sys_core__action__PToPMoveBase_SendGoal_Request;

// Struct for a sequence of dddmr_sys_core__action__PToPMoveBase_SendGoal_Request.
typedef struct dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence
{
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PToPMoveBase in the package dddmr_sys_core.
typedef struct dddmr_sys_core__action__PToPMoveBase_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} dddmr_sys_core__action__PToPMoveBase_SendGoal_Response;

// Struct for a sequence of dddmr_sys_core__action__PToPMoveBase_SendGoal_Response.
typedef struct dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence
{
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PToPMoveBase in the package dddmr_sys_core.
typedef struct dddmr_sys_core__action__PToPMoveBase_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} dddmr_sys_core__action__PToPMoveBase_GetResult_Request;

// Struct for a sequence of dddmr_sys_core__action__PToPMoveBase_GetResult_Request.
typedef struct dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence
{
  dddmr_sys_core__action__PToPMoveBase_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__struct.h"

/// Struct defined in action/PToPMoveBase in the package dddmr_sys_core.
typedef struct dddmr_sys_core__action__PToPMoveBase_GetResult_Response
{
  int8_t status;
  dddmr_sys_core__action__PToPMoveBase_Result result;
} dddmr_sys_core__action__PToPMoveBase_GetResult_Response;

// Struct for a sequence of dddmr_sys_core__action__PToPMoveBase_GetResult_Response.
typedef struct dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence
{
  dddmr_sys_core__action__PToPMoveBase_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__struct.h"

/// Struct defined in action/PToPMoveBase in the package dddmr_sys_core.
typedef struct dddmr_sys_core__action__PToPMoveBase_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  dddmr_sys_core__action__PToPMoveBase_Feedback feedback;
} dddmr_sys_core__action__PToPMoveBase_FeedbackMessage;

// Struct for a sequence of dddmr_sys_core__action__PToPMoveBase_FeedbackMessage.
typedef struct dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence
{
  dddmr_sys_core__action__PToPMoveBase_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DDDMR_SYS_CORE__ACTION__DETAIL__P_TO_P_MOVE_BASE__STRUCT_H_
