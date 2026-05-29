// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dddmr_sys_core:action/PToPMoveBase.idl
// generated code does not contain a copyright notice
#include "dddmr_sys_core/action/detail/p_to_p_move_base__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
dddmr_sys_core__action__PToPMoveBase_Goal__init(dddmr_sys_core__action__PToPMoveBase_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->target_pose)) {
    dddmr_sys_core__action__PToPMoveBase_Goal__fini(msg);
    return false;
  }
  // target_value
  return true;
}

void
dddmr_sys_core__action__PToPMoveBase_Goal__fini(dddmr_sys_core__action__PToPMoveBase_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->target_pose);
  // target_value
}

bool
dddmr_sys_core__action__PToPMoveBase_Goal__are_equal(const dddmr_sys_core__action__PToPMoveBase_Goal * lhs, const dddmr_sys_core__action__PToPMoveBase_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->target_pose), &(rhs->target_pose)))
  {
    return false;
  }
  // target_value
  if (lhs->target_value != rhs->target_value) {
    return false;
  }
  return true;
}

bool
dddmr_sys_core__action__PToPMoveBase_Goal__copy(
  const dddmr_sys_core__action__PToPMoveBase_Goal * input,
  dddmr_sys_core__action__PToPMoveBase_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->target_pose), &(output->target_pose)))
  {
    return false;
  }
  // target_value
  output->target_value = input->target_value;
  return true;
}

dddmr_sys_core__action__PToPMoveBase_Goal *
dddmr_sys_core__action__PToPMoveBase_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_Goal * msg = (dddmr_sys_core__action__PToPMoveBase_Goal *)allocator.allocate(sizeof(dddmr_sys_core__action__PToPMoveBase_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dddmr_sys_core__action__PToPMoveBase_Goal));
  bool success = dddmr_sys_core__action__PToPMoveBase_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dddmr_sys_core__action__PToPMoveBase_Goal__destroy(dddmr_sys_core__action__PToPMoveBase_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dddmr_sys_core__action__PToPMoveBase_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dddmr_sys_core__action__PToPMoveBase_Goal__Sequence__init(dddmr_sys_core__action__PToPMoveBase_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_Goal * data = NULL;

  if (size) {
    data = (dddmr_sys_core__action__PToPMoveBase_Goal *)allocator.zero_allocate(size, sizeof(dddmr_sys_core__action__PToPMoveBase_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dddmr_sys_core__action__PToPMoveBase_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dddmr_sys_core__action__PToPMoveBase_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dddmr_sys_core__action__PToPMoveBase_Goal__Sequence__fini(dddmr_sys_core__action__PToPMoveBase_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dddmr_sys_core__action__PToPMoveBase_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dddmr_sys_core__action__PToPMoveBase_Goal__Sequence *
dddmr_sys_core__action__PToPMoveBase_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_Goal__Sequence * array = (dddmr_sys_core__action__PToPMoveBase_Goal__Sequence *)allocator.allocate(sizeof(dddmr_sys_core__action__PToPMoveBase_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dddmr_sys_core__action__PToPMoveBase_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dddmr_sys_core__action__PToPMoveBase_Goal__Sequence__destroy(dddmr_sys_core__action__PToPMoveBase_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dddmr_sys_core__action__PToPMoveBase_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dddmr_sys_core__action__PToPMoveBase_Goal__Sequence__are_equal(const dddmr_sys_core__action__PToPMoveBase_Goal__Sequence * lhs, const dddmr_sys_core__action__PToPMoveBase_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dddmr_sys_core__action__PToPMoveBase_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dddmr_sys_core__action__PToPMoveBase_Goal__Sequence__copy(
  const dddmr_sys_core__action__PToPMoveBase_Goal__Sequence * input,
  dddmr_sys_core__action__PToPMoveBase_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dddmr_sys_core__action__PToPMoveBase_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dddmr_sys_core__action__PToPMoveBase_Goal * data =
      (dddmr_sys_core__action__PToPMoveBase_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dddmr_sys_core__action__PToPMoveBase_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dddmr_sys_core__action__PToPMoveBase_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dddmr_sys_core__action__PToPMoveBase_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/string_functions.h"

bool
dddmr_sys_core__action__PToPMoveBase_Result__init(dddmr_sys_core__action__PToPMoveBase_Result * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    dddmr_sys_core__action__PToPMoveBase_Result__fini(msg);
    return false;
  }
  return true;
}

void
dddmr_sys_core__action__PToPMoveBase_Result__fini(dddmr_sys_core__action__PToPMoveBase_Result * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  rosidl_runtime_c__String__fini(&msg->result);
}

bool
dddmr_sys_core__action__PToPMoveBase_Result__are_equal(const dddmr_sys_core__action__PToPMoveBase_Result * lhs, const dddmr_sys_core__action__PToPMoveBase_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
dddmr_sys_core__action__PToPMoveBase_Result__copy(
  const dddmr_sys_core__action__PToPMoveBase_Result * input,
  dddmr_sys_core__action__PToPMoveBase_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!rosidl_runtime_c__String__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

dddmr_sys_core__action__PToPMoveBase_Result *
dddmr_sys_core__action__PToPMoveBase_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_Result * msg = (dddmr_sys_core__action__PToPMoveBase_Result *)allocator.allocate(sizeof(dddmr_sys_core__action__PToPMoveBase_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dddmr_sys_core__action__PToPMoveBase_Result));
  bool success = dddmr_sys_core__action__PToPMoveBase_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dddmr_sys_core__action__PToPMoveBase_Result__destroy(dddmr_sys_core__action__PToPMoveBase_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dddmr_sys_core__action__PToPMoveBase_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dddmr_sys_core__action__PToPMoveBase_Result__Sequence__init(dddmr_sys_core__action__PToPMoveBase_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_Result * data = NULL;

  if (size) {
    data = (dddmr_sys_core__action__PToPMoveBase_Result *)allocator.zero_allocate(size, sizeof(dddmr_sys_core__action__PToPMoveBase_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dddmr_sys_core__action__PToPMoveBase_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dddmr_sys_core__action__PToPMoveBase_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dddmr_sys_core__action__PToPMoveBase_Result__Sequence__fini(dddmr_sys_core__action__PToPMoveBase_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dddmr_sys_core__action__PToPMoveBase_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dddmr_sys_core__action__PToPMoveBase_Result__Sequence *
dddmr_sys_core__action__PToPMoveBase_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_Result__Sequence * array = (dddmr_sys_core__action__PToPMoveBase_Result__Sequence *)allocator.allocate(sizeof(dddmr_sys_core__action__PToPMoveBase_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dddmr_sys_core__action__PToPMoveBase_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dddmr_sys_core__action__PToPMoveBase_Result__Sequence__destroy(dddmr_sys_core__action__PToPMoveBase_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dddmr_sys_core__action__PToPMoveBase_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dddmr_sys_core__action__PToPMoveBase_Result__Sequence__are_equal(const dddmr_sys_core__action__PToPMoveBase_Result__Sequence * lhs, const dddmr_sys_core__action__PToPMoveBase_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dddmr_sys_core__action__PToPMoveBase_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dddmr_sys_core__action__PToPMoveBase_Result__Sequence__copy(
  const dddmr_sys_core__action__PToPMoveBase_Result__Sequence * input,
  dddmr_sys_core__action__PToPMoveBase_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dddmr_sys_core__action__PToPMoveBase_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dddmr_sys_core__action__PToPMoveBase_Result * data =
      (dddmr_sys_core__action__PToPMoveBase_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dddmr_sys_core__action__PToPMoveBase_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dddmr_sys_core__action__PToPMoveBase_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dddmr_sys_core__action__PToPMoveBase_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `base_position`
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"
// Member `last_decision`
// Member `current_decision`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
dddmr_sys_core__action__PToPMoveBase_Feedback__init(dddmr_sys_core__action__PToPMoveBase_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // base_position
  if (!geometry_msgs__msg__TransformStamped__init(&msg->base_position)) {
    dddmr_sys_core__action__PToPMoveBase_Feedback__fini(msg);
    return false;
  }
  // last_decision
  if (!rosidl_runtime_c__String__init(&msg->last_decision)) {
    dddmr_sys_core__action__PToPMoveBase_Feedback__fini(msg);
    return false;
  }
  // current_decision
  if (!rosidl_runtime_c__String__init(&msg->current_decision)) {
    dddmr_sys_core__action__PToPMoveBase_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
dddmr_sys_core__action__PToPMoveBase_Feedback__fini(dddmr_sys_core__action__PToPMoveBase_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // base_position
  geometry_msgs__msg__TransformStamped__fini(&msg->base_position);
  // last_decision
  rosidl_runtime_c__String__fini(&msg->last_decision);
  // current_decision
  rosidl_runtime_c__String__fini(&msg->current_decision);
}

bool
dddmr_sys_core__action__PToPMoveBase_Feedback__are_equal(const dddmr_sys_core__action__PToPMoveBase_Feedback * lhs, const dddmr_sys_core__action__PToPMoveBase_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // base_position
  if (!geometry_msgs__msg__TransformStamped__are_equal(
      &(lhs->base_position), &(rhs->base_position)))
  {
    return false;
  }
  // last_decision
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->last_decision), &(rhs->last_decision)))
  {
    return false;
  }
  // current_decision
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_decision), &(rhs->current_decision)))
  {
    return false;
  }
  return true;
}

bool
dddmr_sys_core__action__PToPMoveBase_Feedback__copy(
  const dddmr_sys_core__action__PToPMoveBase_Feedback * input,
  dddmr_sys_core__action__PToPMoveBase_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // base_position
  if (!geometry_msgs__msg__TransformStamped__copy(
      &(input->base_position), &(output->base_position)))
  {
    return false;
  }
  // last_decision
  if (!rosidl_runtime_c__String__copy(
      &(input->last_decision), &(output->last_decision)))
  {
    return false;
  }
  // current_decision
  if (!rosidl_runtime_c__String__copy(
      &(input->current_decision), &(output->current_decision)))
  {
    return false;
  }
  return true;
}

dddmr_sys_core__action__PToPMoveBase_Feedback *
dddmr_sys_core__action__PToPMoveBase_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_Feedback * msg = (dddmr_sys_core__action__PToPMoveBase_Feedback *)allocator.allocate(sizeof(dddmr_sys_core__action__PToPMoveBase_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dddmr_sys_core__action__PToPMoveBase_Feedback));
  bool success = dddmr_sys_core__action__PToPMoveBase_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dddmr_sys_core__action__PToPMoveBase_Feedback__destroy(dddmr_sys_core__action__PToPMoveBase_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dddmr_sys_core__action__PToPMoveBase_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence__init(dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_Feedback * data = NULL;

  if (size) {
    data = (dddmr_sys_core__action__PToPMoveBase_Feedback *)allocator.zero_allocate(size, sizeof(dddmr_sys_core__action__PToPMoveBase_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dddmr_sys_core__action__PToPMoveBase_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dddmr_sys_core__action__PToPMoveBase_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence__fini(dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dddmr_sys_core__action__PToPMoveBase_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence *
dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence * array = (dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence *)allocator.allocate(sizeof(dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence__destroy(dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence__are_equal(const dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence * lhs, const dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dddmr_sys_core__action__PToPMoveBase_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence__copy(
  const dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence * input,
  dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dddmr_sys_core__action__PToPMoveBase_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dddmr_sys_core__action__PToPMoveBase_Feedback * data =
      (dddmr_sys_core__action__PToPMoveBase_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dddmr_sys_core__action__PToPMoveBase_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dddmr_sys_core__action__PToPMoveBase_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dddmr_sys_core__action__PToPMoveBase_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__functions.h"

bool
dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__init(dddmr_sys_core__action__PToPMoveBase_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!dddmr_sys_core__action__PToPMoveBase_Goal__init(&msg->goal)) {
    dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__fini(dddmr_sys_core__action__PToPMoveBase_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  dddmr_sys_core__action__PToPMoveBase_Goal__fini(&msg->goal);
}

bool
dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__are_equal(const dddmr_sys_core__action__PToPMoveBase_SendGoal_Request * lhs, const dddmr_sys_core__action__PToPMoveBase_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!dddmr_sys_core__action__PToPMoveBase_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__copy(
  const dddmr_sys_core__action__PToPMoveBase_SendGoal_Request * input,
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!dddmr_sys_core__action__PToPMoveBase_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

dddmr_sys_core__action__PToPMoveBase_SendGoal_Request *
dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Request * msg = (dddmr_sys_core__action__PToPMoveBase_SendGoal_Request *)allocator.allocate(sizeof(dddmr_sys_core__action__PToPMoveBase_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dddmr_sys_core__action__PToPMoveBase_SendGoal_Request));
  bool success = dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__destroy(dddmr_sys_core__action__PToPMoveBase_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence__init(dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Request * data = NULL;

  if (size) {
    data = (dddmr_sys_core__action__PToPMoveBase_SendGoal_Request *)allocator.zero_allocate(size, sizeof(dddmr_sys_core__action__PToPMoveBase_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence__fini(dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence *
dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence * array = (dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence *)allocator.allocate(sizeof(dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence__destroy(dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence__are_equal(const dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence * lhs, const dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence__copy(
  const dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence * input,
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dddmr_sys_core__action__PToPMoveBase_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dddmr_sys_core__action__PToPMoveBase_SendGoal_Request * data =
      (dddmr_sys_core__action__PToPMoveBase_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__init(dddmr_sys_core__action__PToPMoveBase_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__fini(dddmr_sys_core__action__PToPMoveBase_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__are_equal(const dddmr_sys_core__action__PToPMoveBase_SendGoal_Response * lhs, const dddmr_sys_core__action__PToPMoveBase_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__copy(
  const dddmr_sys_core__action__PToPMoveBase_SendGoal_Response * input,
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

dddmr_sys_core__action__PToPMoveBase_SendGoal_Response *
dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Response * msg = (dddmr_sys_core__action__PToPMoveBase_SendGoal_Response *)allocator.allocate(sizeof(dddmr_sys_core__action__PToPMoveBase_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dddmr_sys_core__action__PToPMoveBase_SendGoal_Response));
  bool success = dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__destroy(dddmr_sys_core__action__PToPMoveBase_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence__init(dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Response * data = NULL;

  if (size) {
    data = (dddmr_sys_core__action__PToPMoveBase_SendGoal_Response *)allocator.zero_allocate(size, sizeof(dddmr_sys_core__action__PToPMoveBase_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence__fini(dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence *
dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence * array = (dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence *)allocator.allocate(sizeof(dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence__destroy(dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence__are_equal(const dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence * lhs, const dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence__copy(
  const dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence * input,
  dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dddmr_sys_core__action__PToPMoveBase_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dddmr_sys_core__action__PToPMoveBase_SendGoal_Response * data =
      (dddmr_sys_core__action__PToPMoveBase_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
dddmr_sys_core__action__PToPMoveBase_GetResult_Request__init(dddmr_sys_core__action__PToPMoveBase_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    dddmr_sys_core__action__PToPMoveBase_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
dddmr_sys_core__action__PToPMoveBase_GetResult_Request__fini(dddmr_sys_core__action__PToPMoveBase_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
dddmr_sys_core__action__PToPMoveBase_GetResult_Request__are_equal(const dddmr_sys_core__action__PToPMoveBase_GetResult_Request * lhs, const dddmr_sys_core__action__PToPMoveBase_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
dddmr_sys_core__action__PToPMoveBase_GetResult_Request__copy(
  const dddmr_sys_core__action__PToPMoveBase_GetResult_Request * input,
  dddmr_sys_core__action__PToPMoveBase_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

dddmr_sys_core__action__PToPMoveBase_GetResult_Request *
dddmr_sys_core__action__PToPMoveBase_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_GetResult_Request * msg = (dddmr_sys_core__action__PToPMoveBase_GetResult_Request *)allocator.allocate(sizeof(dddmr_sys_core__action__PToPMoveBase_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dddmr_sys_core__action__PToPMoveBase_GetResult_Request));
  bool success = dddmr_sys_core__action__PToPMoveBase_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dddmr_sys_core__action__PToPMoveBase_GetResult_Request__destroy(dddmr_sys_core__action__PToPMoveBase_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dddmr_sys_core__action__PToPMoveBase_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence__init(dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_GetResult_Request * data = NULL;

  if (size) {
    data = (dddmr_sys_core__action__PToPMoveBase_GetResult_Request *)allocator.zero_allocate(size, sizeof(dddmr_sys_core__action__PToPMoveBase_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dddmr_sys_core__action__PToPMoveBase_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dddmr_sys_core__action__PToPMoveBase_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence__fini(dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dddmr_sys_core__action__PToPMoveBase_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence *
dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence * array = (dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence *)allocator.allocate(sizeof(dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence__destroy(dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence__are_equal(const dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence * lhs, const dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dddmr_sys_core__action__PToPMoveBase_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence__copy(
  const dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence * input,
  dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dddmr_sys_core__action__PToPMoveBase_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dddmr_sys_core__action__PToPMoveBase_GetResult_Request * data =
      (dddmr_sys_core__action__PToPMoveBase_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dddmr_sys_core__action__PToPMoveBase_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dddmr_sys_core__action__PToPMoveBase_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dddmr_sys_core__action__PToPMoveBase_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__functions.h"

bool
dddmr_sys_core__action__PToPMoveBase_GetResult_Response__init(dddmr_sys_core__action__PToPMoveBase_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!dddmr_sys_core__action__PToPMoveBase_Result__init(&msg->result)) {
    dddmr_sys_core__action__PToPMoveBase_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
dddmr_sys_core__action__PToPMoveBase_GetResult_Response__fini(dddmr_sys_core__action__PToPMoveBase_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  dddmr_sys_core__action__PToPMoveBase_Result__fini(&msg->result);
}

bool
dddmr_sys_core__action__PToPMoveBase_GetResult_Response__are_equal(const dddmr_sys_core__action__PToPMoveBase_GetResult_Response * lhs, const dddmr_sys_core__action__PToPMoveBase_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!dddmr_sys_core__action__PToPMoveBase_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
dddmr_sys_core__action__PToPMoveBase_GetResult_Response__copy(
  const dddmr_sys_core__action__PToPMoveBase_GetResult_Response * input,
  dddmr_sys_core__action__PToPMoveBase_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!dddmr_sys_core__action__PToPMoveBase_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

dddmr_sys_core__action__PToPMoveBase_GetResult_Response *
dddmr_sys_core__action__PToPMoveBase_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_GetResult_Response * msg = (dddmr_sys_core__action__PToPMoveBase_GetResult_Response *)allocator.allocate(sizeof(dddmr_sys_core__action__PToPMoveBase_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dddmr_sys_core__action__PToPMoveBase_GetResult_Response));
  bool success = dddmr_sys_core__action__PToPMoveBase_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dddmr_sys_core__action__PToPMoveBase_GetResult_Response__destroy(dddmr_sys_core__action__PToPMoveBase_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dddmr_sys_core__action__PToPMoveBase_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence__init(dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_GetResult_Response * data = NULL;

  if (size) {
    data = (dddmr_sys_core__action__PToPMoveBase_GetResult_Response *)allocator.zero_allocate(size, sizeof(dddmr_sys_core__action__PToPMoveBase_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dddmr_sys_core__action__PToPMoveBase_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dddmr_sys_core__action__PToPMoveBase_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence__fini(dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dddmr_sys_core__action__PToPMoveBase_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence *
dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence * array = (dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence *)allocator.allocate(sizeof(dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence__destroy(dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence__are_equal(const dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence * lhs, const dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dddmr_sys_core__action__PToPMoveBase_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence__copy(
  const dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence * input,
  dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dddmr_sys_core__action__PToPMoveBase_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dddmr_sys_core__action__PToPMoveBase_GetResult_Response * data =
      (dddmr_sys_core__action__PToPMoveBase_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dddmr_sys_core__action__PToPMoveBase_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dddmr_sys_core__action__PToPMoveBase_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dddmr_sys_core__action__PToPMoveBase_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__functions.h"

bool
dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__init(dddmr_sys_core__action__PToPMoveBase_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!dddmr_sys_core__action__PToPMoveBase_Feedback__init(&msg->feedback)) {
    dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__fini(dddmr_sys_core__action__PToPMoveBase_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  dddmr_sys_core__action__PToPMoveBase_Feedback__fini(&msg->feedback);
}

bool
dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__are_equal(const dddmr_sys_core__action__PToPMoveBase_FeedbackMessage * lhs, const dddmr_sys_core__action__PToPMoveBase_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!dddmr_sys_core__action__PToPMoveBase_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__copy(
  const dddmr_sys_core__action__PToPMoveBase_FeedbackMessage * input,
  dddmr_sys_core__action__PToPMoveBase_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!dddmr_sys_core__action__PToPMoveBase_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

dddmr_sys_core__action__PToPMoveBase_FeedbackMessage *
dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_FeedbackMessage * msg = (dddmr_sys_core__action__PToPMoveBase_FeedbackMessage *)allocator.allocate(sizeof(dddmr_sys_core__action__PToPMoveBase_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dddmr_sys_core__action__PToPMoveBase_FeedbackMessage));
  bool success = dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__destroy(dddmr_sys_core__action__PToPMoveBase_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence__init(dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_FeedbackMessage * data = NULL;

  if (size) {
    data = (dddmr_sys_core__action__PToPMoveBase_FeedbackMessage *)allocator.zero_allocate(size, sizeof(dddmr_sys_core__action__PToPMoveBase_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence__fini(dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence *
dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence * array = (dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence *)allocator.allocate(sizeof(dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence__destroy(dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence__are_equal(const dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence * lhs, const dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence__copy(
  const dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence * input,
  dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dddmr_sys_core__action__PToPMoveBase_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dddmr_sys_core__action__PToPMoveBase_FeedbackMessage * data =
      (dddmr_sys_core__action__PToPMoveBase_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
