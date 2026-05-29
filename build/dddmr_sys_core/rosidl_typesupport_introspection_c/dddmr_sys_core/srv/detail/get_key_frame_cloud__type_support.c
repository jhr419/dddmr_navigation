// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dddmr_sys_core:srv/GetKeyFrameCloud.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dddmr_sys_core/srv/detail/get_key_frame_cloud__rosidl_typesupport_introspection_c.h"
#include "dddmr_sys_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dddmr_sys_core/srv/detail/get_key_frame_cloud__functions.h"
#include "dddmr_sys_core/srv/detail/get_key_frame_cloud__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void dddmr_sys_core__srv__GetKeyFrameCloud_Request__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dddmr_sys_core__srv__GetKeyFrameCloud_Request__init(message_memory);
}

void dddmr_sys_core__srv__GetKeyFrameCloud_Request__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Request_fini_function(void * message_memory)
{
  dddmr_sys_core__srv__GetKeyFrameCloud_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dddmr_sys_core__srv__GetKeyFrameCloud_Request__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Request_message_member_array[1] = {
  {
    "key_frame_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__srv__GetKeyFrameCloud_Request, key_frame_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dddmr_sys_core__srv__GetKeyFrameCloud_Request__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Request_message_members = {
  "dddmr_sys_core__srv",  // message namespace
  "GetKeyFrameCloud_Request",  // message name
  1,  // number of fields
  sizeof(dddmr_sys_core__srv__GetKeyFrameCloud_Request),
  dddmr_sys_core__srv__GetKeyFrameCloud_Request__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Request_message_member_array,  // message members
  dddmr_sys_core__srv__GetKeyFrameCloud_Request__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  dddmr_sys_core__srv__GetKeyFrameCloud_Request__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dddmr_sys_core__srv__GetKeyFrameCloud_Request__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Request_message_type_support_handle = {
  0,
  &dddmr_sys_core__srv__GetKeyFrameCloud_Request__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dddmr_sys_core
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, srv, GetKeyFrameCloud_Request)() {
  if (!dddmr_sys_core__srv__GetKeyFrameCloud_Request__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Request_message_type_support_handle.typesupport_identifier) {
    dddmr_sys_core__srv__GetKeyFrameCloud_Request__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dddmr_sys_core__srv__GetKeyFrameCloud_Request__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dddmr_sys_core/srv/detail/get_key_frame_cloud__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dddmr_sys_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dddmr_sys_core/srv/detail/get_key_frame_cloud__functions.h"
// already included above
// #include "dddmr_sys_core/srv/detail/get_key_frame_cloud__struct.h"


// Include directives for member types
// Member `key_frame_cloud`
// Member `key_frame_ground`
// Member `key_frame_ground_edge`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `key_frame_cloud`
// Member `key_frame_ground`
// Member `key_frame_ground_edge`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dddmr_sys_core__srv__GetKeyFrameCloud_Response__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dddmr_sys_core__srv__GetKeyFrameCloud_Response__init(message_memory);
}

void dddmr_sys_core__srv__GetKeyFrameCloud_Response__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Response_fini_function(void * message_memory)
{
  dddmr_sys_core__srv__GetKeyFrameCloud_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dddmr_sys_core__srv__GetKeyFrameCloud_Response__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Response_message_member_array[3] = {
  {
    "key_frame_cloud",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__srv__GetKeyFrameCloud_Response, key_frame_cloud),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "key_frame_ground",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__srv__GetKeyFrameCloud_Response, key_frame_ground),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "key_frame_ground_edge",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dddmr_sys_core__srv__GetKeyFrameCloud_Response, key_frame_ground_edge),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dddmr_sys_core__srv__GetKeyFrameCloud_Response__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Response_message_members = {
  "dddmr_sys_core__srv",  // message namespace
  "GetKeyFrameCloud_Response",  // message name
  3,  // number of fields
  sizeof(dddmr_sys_core__srv__GetKeyFrameCloud_Response),
  dddmr_sys_core__srv__GetKeyFrameCloud_Response__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Response_message_member_array,  // message members
  dddmr_sys_core__srv__GetKeyFrameCloud_Response__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  dddmr_sys_core__srv__GetKeyFrameCloud_Response__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dddmr_sys_core__srv__GetKeyFrameCloud_Response__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Response_message_type_support_handle = {
  0,
  &dddmr_sys_core__srv__GetKeyFrameCloud_Response__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dddmr_sys_core
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, srv, GetKeyFrameCloud_Response)() {
  dddmr_sys_core__srv__GetKeyFrameCloud_Response__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  dddmr_sys_core__srv__GetKeyFrameCloud_Response__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  dddmr_sys_core__srv__GetKeyFrameCloud_Response__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  if (!dddmr_sys_core__srv__GetKeyFrameCloud_Response__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Response_message_type_support_handle.typesupport_identifier) {
    dddmr_sys_core__srv__GetKeyFrameCloud_Response__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dddmr_sys_core__srv__GetKeyFrameCloud_Response__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dddmr_sys_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "dddmr_sys_core/srv/detail/get_key_frame_cloud__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers dddmr_sys_core__srv__detail__get_key_frame_cloud__rosidl_typesupport_introspection_c__GetKeyFrameCloud_service_members = {
  "dddmr_sys_core__srv",  // service namespace
  "GetKeyFrameCloud",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // dddmr_sys_core__srv__detail__get_key_frame_cloud__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Request_message_type_support_handle,
  NULL  // response message
  // dddmr_sys_core__srv__detail__get_key_frame_cloud__rosidl_typesupport_introspection_c__GetKeyFrameCloud_Response_message_type_support_handle
};

static rosidl_service_type_support_t dddmr_sys_core__srv__detail__get_key_frame_cloud__rosidl_typesupport_introspection_c__GetKeyFrameCloud_service_type_support_handle = {
  0,
  &dddmr_sys_core__srv__detail__get_key_frame_cloud__rosidl_typesupport_introspection_c__GetKeyFrameCloud_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, srv, GetKeyFrameCloud_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, srv, GetKeyFrameCloud_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dddmr_sys_core
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, srv, GetKeyFrameCloud)() {
  if (!dddmr_sys_core__srv__detail__get_key_frame_cloud__rosidl_typesupport_introspection_c__GetKeyFrameCloud_service_type_support_handle.typesupport_identifier) {
    dddmr_sys_core__srv__detail__get_key_frame_cloud__rosidl_typesupport_introspection_c__GetKeyFrameCloud_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)dddmr_sys_core__srv__detail__get_key_frame_cloud__rosidl_typesupport_introspection_c__GetKeyFrameCloud_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, srv, GetKeyFrameCloud_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dddmr_sys_core, srv, GetKeyFrameCloud_Response)()->data;
  }

  return &dddmr_sys_core__srv__detail__get_key_frame_cloud__rosidl_typesupport_introspection_c__GetKeyFrameCloud_service_type_support_handle;
}
