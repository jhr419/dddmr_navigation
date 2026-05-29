#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__srv__GetKeyFrameCloud_Request() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__srv__GetKeyFrameCloud_Request__init(msg: *mut GetKeyFrameCloud_Request) -> bool;
    fn dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetKeyFrameCloud_Request>, size: usize) -> bool;
    fn dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetKeyFrameCloud_Request>);
    fn dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetKeyFrameCloud_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetKeyFrameCloud_Request>) -> bool;
}

// Corresponds to dddmr_sys_core__srv__GetKeyFrameCloud_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetKeyFrameCloud_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub key_frame_number: i32,

}



impl Default for GetKeyFrameCloud_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__srv__GetKeyFrameCloud_Request__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__srv__GetKeyFrameCloud_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetKeyFrameCloud_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__srv__GetKeyFrameCloud_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetKeyFrameCloud_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetKeyFrameCloud_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/srv/GetKeyFrameCloud_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__srv__GetKeyFrameCloud_Request() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__srv__GetKeyFrameCloud_Response() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__srv__GetKeyFrameCloud_Response__init(msg: *mut GetKeyFrameCloud_Response) -> bool;
    fn dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetKeyFrameCloud_Response>, size: usize) -> bool;
    fn dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetKeyFrameCloud_Response>);
    fn dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetKeyFrameCloud_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetKeyFrameCloud_Response>) -> bool;
}

// Corresponds to dddmr_sys_core__srv__GetKeyFrameCloud_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetKeyFrameCloud_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub key_frame_cloud: sensor_msgs::msg::rmw::PointCloud2,


    // This member is not documented.
    #[allow(missing_docs)]
    pub key_frame_ground: sensor_msgs::msg::rmw::PointCloud2,


    // This member is not documented.
    #[allow(missing_docs)]
    pub key_frame_ground_edge: sensor_msgs::msg::rmw::PointCloud2,

}



impl Default for GetKeyFrameCloud_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__srv__GetKeyFrameCloud_Response__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__srv__GetKeyFrameCloud_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetKeyFrameCloud_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__srv__GetKeyFrameCloud_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetKeyFrameCloud_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetKeyFrameCloud_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/srv/GetKeyFrameCloud_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__srv__GetKeyFrameCloud_Response() }
  }
}






#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dddmr_sys_core__srv__GetKeyFrameCloud() -> *const std::ffi::c_void;
}

// Corresponds to dddmr_sys_core__srv__GetKeyFrameCloud
#[allow(missing_docs, non_camel_case_types)]
pub struct GetKeyFrameCloud;

impl rosidl_runtime_rs::Service for GetKeyFrameCloud {
    type Request = GetKeyFrameCloud_Request;
    type Response = GetKeyFrameCloud_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dddmr_sys_core__srv__GetKeyFrameCloud() }
    }
}


