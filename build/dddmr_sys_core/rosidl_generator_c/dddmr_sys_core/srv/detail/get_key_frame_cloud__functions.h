// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dddmr_sys_core:srv/GetKeyFrameCloud.idl
// generated code does not contain a copyright notice

#ifndef DDDMR_SYS_CORE__SRV__DETAIL__GET_KEY_FRAME_CLOUD__FUNCTIONS_H_
#define DDDMR_SYS_CORE__SRV__DETAIL__GET_KEY_FRAME_CLOUD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dddmr_sys_core/msg/rosidl_generator_c__visibility_control.h"

#include "dddmr_sys_core/srv/detail/get_key_frame_cloud__struct.h"

/// Initialize srv/GetKeyFrameCloud message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dddmr_sys_core__srv__GetKeyFrameCloud_Request
 * )) before or use
 * dddmr_sys_core__srv__GetKeyFrameCloud_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
bool
dddmr_sys_core__srv__GetKeyFrameCloud_Request__init(dddmr_sys_core__srv__GetKeyFrameCloud_Request * msg);

/// Finalize srv/GetKeyFrameCloud message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
void
dddmr_sys_core__srv__GetKeyFrameCloud_Request__fini(dddmr_sys_core__srv__GetKeyFrameCloud_Request * msg);

/// Create srv/GetKeyFrameCloud message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dddmr_sys_core__srv__GetKeyFrameCloud_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
dddmr_sys_core__srv__GetKeyFrameCloud_Request *
dddmr_sys_core__srv__GetKeyFrameCloud_Request__create();

/// Destroy srv/GetKeyFrameCloud message.
/**
 * It calls
 * dddmr_sys_core__srv__GetKeyFrameCloud_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
void
dddmr_sys_core__srv__GetKeyFrameCloud_Request__destroy(dddmr_sys_core__srv__GetKeyFrameCloud_Request * msg);

/// Check for srv/GetKeyFrameCloud message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
bool
dddmr_sys_core__srv__GetKeyFrameCloud_Request__are_equal(const dddmr_sys_core__srv__GetKeyFrameCloud_Request * lhs, const dddmr_sys_core__srv__GetKeyFrameCloud_Request * rhs);

/// Copy a srv/GetKeyFrameCloud message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
bool
dddmr_sys_core__srv__GetKeyFrameCloud_Request__copy(
  const dddmr_sys_core__srv__GetKeyFrameCloud_Request * input,
  dddmr_sys_core__srv__GetKeyFrameCloud_Request * output);

/// Initialize array of srv/GetKeyFrameCloud messages.
/**
 * It allocates the memory for the number of elements and calls
 * dddmr_sys_core__srv__GetKeyFrameCloud_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
bool
dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__init(dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetKeyFrameCloud messages.
/**
 * It calls
 * dddmr_sys_core__srv__GetKeyFrameCloud_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
void
dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__fini(dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence * array);

/// Create array of srv/GetKeyFrameCloud messages.
/**
 * It allocates the memory for the array and calls
 * dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence *
dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetKeyFrameCloud messages.
/**
 * It calls
 * dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
void
dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__destroy(dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence * array);

/// Check for srv/GetKeyFrameCloud message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
bool
dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__are_equal(const dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence * lhs, const dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence * rhs);

/// Copy an array of srv/GetKeyFrameCloud messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
bool
dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__copy(
  const dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence * input,
  dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence * output);

/// Initialize srv/GetKeyFrameCloud message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dddmr_sys_core__srv__GetKeyFrameCloud_Response
 * )) before or use
 * dddmr_sys_core__srv__GetKeyFrameCloud_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
bool
dddmr_sys_core__srv__GetKeyFrameCloud_Response__init(dddmr_sys_core__srv__GetKeyFrameCloud_Response * msg);

/// Finalize srv/GetKeyFrameCloud message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
void
dddmr_sys_core__srv__GetKeyFrameCloud_Response__fini(dddmr_sys_core__srv__GetKeyFrameCloud_Response * msg);

/// Create srv/GetKeyFrameCloud message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dddmr_sys_core__srv__GetKeyFrameCloud_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
dddmr_sys_core__srv__GetKeyFrameCloud_Response *
dddmr_sys_core__srv__GetKeyFrameCloud_Response__create();

/// Destroy srv/GetKeyFrameCloud message.
/**
 * It calls
 * dddmr_sys_core__srv__GetKeyFrameCloud_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
void
dddmr_sys_core__srv__GetKeyFrameCloud_Response__destroy(dddmr_sys_core__srv__GetKeyFrameCloud_Response * msg);

/// Check for srv/GetKeyFrameCloud message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
bool
dddmr_sys_core__srv__GetKeyFrameCloud_Response__are_equal(const dddmr_sys_core__srv__GetKeyFrameCloud_Response * lhs, const dddmr_sys_core__srv__GetKeyFrameCloud_Response * rhs);

/// Copy a srv/GetKeyFrameCloud message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
bool
dddmr_sys_core__srv__GetKeyFrameCloud_Response__copy(
  const dddmr_sys_core__srv__GetKeyFrameCloud_Response * input,
  dddmr_sys_core__srv__GetKeyFrameCloud_Response * output);

/// Initialize array of srv/GetKeyFrameCloud messages.
/**
 * It allocates the memory for the number of elements and calls
 * dddmr_sys_core__srv__GetKeyFrameCloud_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
bool
dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__init(dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetKeyFrameCloud messages.
/**
 * It calls
 * dddmr_sys_core__srv__GetKeyFrameCloud_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
void
dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__fini(dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence * array);

/// Create array of srv/GetKeyFrameCloud messages.
/**
 * It allocates the memory for the array and calls
 * dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence *
dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetKeyFrameCloud messages.
/**
 * It calls
 * dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
void
dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__destroy(dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence * array);

/// Check for srv/GetKeyFrameCloud message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
bool
dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__are_equal(const dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence * lhs, const dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence * rhs);

/// Copy an array of srv/GetKeyFrameCloud messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dddmr_sys_core
bool
dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__copy(
  const dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence * input,
  dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DDDMR_SYS_CORE__SRV__DETAIL__GET_KEY_FRAME_CLOUD__FUNCTIONS_H_
