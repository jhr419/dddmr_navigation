// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dddmr_sys_core:srv/GetKeyFrameCloud.idl
// generated code does not contain a copyright notice
#include "dddmr_sys_core/srv/detail/get_key_frame_cloud__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
dddmr_sys_core__srv__GetKeyFrameCloud_Request__init(dddmr_sys_core__srv__GetKeyFrameCloud_Request * msg)
{
  if (!msg) {
    return false;
  }
  // key_frame_number
  return true;
}

void
dddmr_sys_core__srv__GetKeyFrameCloud_Request__fini(dddmr_sys_core__srv__GetKeyFrameCloud_Request * msg)
{
  if (!msg) {
    return;
  }
  // key_frame_number
}

bool
dddmr_sys_core__srv__GetKeyFrameCloud_Request__are_equal(const dddmr_sys_core__srv__GetKeyFrameCloud_Request * lhs, const dddmr_sys_core__srv__GetKeyFrameCloud_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // key_frame_number
  if (lhs->key_frame_number != rhs->key_frame_number) {
    return false;
  }
  return true;
}

bool
dddmr_sys_core__srv__GetKeyFrameCloud_Request__copy(
  const dddmr_sys_core__srv__GetKeyFrameCloud_Request * input,
  dddmr_sys_core__srv__GetKeyFrameCloud_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // key_frame_number
  output->key_frame_number = input->key_frame_number;
  return true;
}

dddmr_sys_core__srv__GetKeyFrameCloud_Request *
dddmr_sys_core__srv__GetKeyFrameCloud_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__srv__GetKeyFrameCloud_Request * msg = (dddmr_sys_core__srv__GetKeyFrameCloud_Request *)allocator.allocate(sizeof(dddmr_sys_core__srv__GetKeyFrameCloud_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dddmr_sys_core__srv__GetKeyFrameCloud_Request));
  bool success = dddmr_sys_core__srv__GetKeyFrameCloud_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dddmr_sys_core__srv__GetKeyFrameCloud_Request__destroy(dddmr_sys_core__srv__GetKeyFrameCloud_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dddmr_sys_core__srv__GetKeyFrameCloud_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__init(dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__srv__GetKeyFrameCloud_Request * data = NULL;

  if (size) {
    data = (dddmr_sys_core__srv__GetKeyFrameCloud_Request *)allocator.zero_allocate(size, sizeof(dddmr_sys_core__srv__GetKeyFrameCloud_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dddmr_sys_core__srv__GetKeyFrameCloud_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dddmr_sys_core__srv__GetKeyFrameCloud_Request__fini(&data[i - 1]);
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
dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__fini(dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence * array)
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
      dddmr_sys_core__srv__GetKeyFrameCloud_Request__fini(&array->data[i]);
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

dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence *
dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence * array = (dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence *)allocator.allocate(sizeof(dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__destroy(dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__are_equal(const dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence * lhs, const dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dddmr_sys_core__srv__GetKeyFrameCloud_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__copy(
  const dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence * input,
  dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dddmr_sys_core__srv__GetKeyFrameCloud_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dddmr_sys_core__srv__GetKeyFrameCloud_Request * data =
      (dddmr_sys_core__srv__GetKeyFrameCloud_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dddmr_sys_core__srv__GetKeyFrameCloud_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dddmr_sys_core__srv__GetKeyFrameCloud_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dddmr_sys_core__srv__GetKeyFrameCloud_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `key_frame_cloud`
// Member `key_frame_ground`
// Member `key_frame_ground_edge`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"

bool
dddmr_sys_core__srv__GetKeyFrameCloud_Response__init(dddmr_sys_core__srv__GetKeyFrameCloud_Response * msg)
{
  if (!msg) {
    return false;
  }
  // key_frame_cloud
  if (!sensor_msgs__msg__PointCloud2__init(&msg->key_frame_cloud)) {
    dddmr_sys_core__srv__GetKeyFrameCloud_Response__fini(msg);
    return false;
  }
  // key_frame_ground
  if (!sensor_msgs__msg__PointCloud2__init(&msg->key_frame_ground)) {
    dddmr_sys_core__srv__GetKeyFrameCloud_Response__fini(msg);
    return false;
  }
  // key_frame_ground_edge
  if (!sensor_msgs__msg__PointCloud2__init(&msg->key_frame_ground_edge)) {
    dddmr_sys_core__srv__GetKeyFrameCloud_Response__fini(msg);
    return false;
  }
  return true;
}

void
dddmr_sys_core__srv__GetKeyFrameCloud_Response__fini(dddmr_sys_core__srv__GetKeyFrameCloud_Response * msg)
{
  if (!msg) {
    return;
  }
  // key_frame_cloud
  sensor_msgs__msg__PointCloud2__fini(&msg->key_frame_cloud);
  // key_frame_ground
  sensor_msgs__msg__PointCloud2__fini(&msg->key_frame_ground);
  // key_frame_ground_edge
  sensor_msgs__msg__PointCloud2__fini(&msg->key_frame_ground_edge);
}

bool
dddmr_sys_core__srv__GetKeyFrameCloud_Response__are_equal(const dddmr_sys_core__srv__GetKeyFrameCloud_Response * lhs, const dddmr_sys_core__srv__GetKeyFrameCloud_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // key_frame_cloud
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->key_frame_cloud), &(rhs->key_frame_cloud)))
  {
    return false;
  }
  // key_frame_ground
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->key_frame_ground), &(rhs->key_frame_ground)))
  {
    return false;
  }
  // key_frame_ground_edge
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->key_frame_ground_edge), &(rhs->key_frame_ground_edge)))
  {
    return false;
  }
  return true;
}

bool
dddmr_sys_core__srv__GetKeyFrameCloud_Response__copy(
  const dddmr_sys_core__srv__GetKeyFrameCloud_Response * input,
  dddmr_sys_core__srv__GetKeyFrameCloud_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // key_frame_cloud
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->key_frame_cloud), &(output->key_frame_cloud)))
  {
    return false;
  }
  // key_frame_ground
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->key_frame_ground), &(output->key_frame_ground)))
  {
    return false;
  }
  // key_frame_ground_edge
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->key_frame_ground_edge), &(output->key_frame_ground_edge)))
  {
    return false;
  }
  return true;
}

dddmr_sys_core__srv__GetKeyFrameCloud_Response *
dddmr_sys_core__srv__GetKeyFrameCloud_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__srv__GetKeyFrameCloud_Response * msg = (dddmr_sys_core__srv__GetKeyFrameCloud_Response *)allocator.allocate(sizeof(dddmr_sys_core__srv__GetKeyFrameCloud_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dddmr_sys_core__srv__GetKeyFrameCloud_Response));
  bool success = dddmr_sys_core__srv__GetKeyFrameCloud_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dddmr_sys_core__srv__GetKeyFrameCloud_Response__destroy(dddmr_sys_core__srv__GetKeyFrameCloud_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dddmr_sys_core__srv__GetKeyFrameCloud_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__init(dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__srv__GetKeyFrameCloud_Response * data = NULL;

  if (size) {
    data = (dddmr_sys_core__srv__GetKeyFrameCloud_Response *)allocator.zero_allocate(size, sizeof(dddmr_sys_core__srv__GetKeyFrameCloud_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dddmr_sys_core__srv__GetKeyFrameCloud_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dddmr_sys_core__srv__GetKeyFrameCloud_Response__fini(&data[i - 1]);
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
dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__fini(dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence * array)
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
      dddmr_sys_core__srv__GetKeyFrameCloud_Response__fini(&array->data[i]);
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

dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence *
dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence * array = (dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence *)allocator.allocate(sizeof(dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__destroy(dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__are_equal(const dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence * lhs, const dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dddmr_sys_core__srv__GetKeyFrameCloud_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__copy(
  const dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence * input,
  dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dddmr_sys_core__srv__GetKeyFrameCloud_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dddmr_sys_core__srv__GetKeyFrameCloud_Response * data =
      (dddmr_sys_core__srv__GetKeyFrameCloud_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dddmr_sys_core__srv__GetKeyFrameCloud_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dddmr_sys_core__srv__GetKeyFrameCloud_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dddmr_sys_core__srv__GetKeyFrameCloud_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
