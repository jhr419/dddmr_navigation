#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "cloud_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__cloud_msgs__msg__CloudInfo() -> *const std::ffi::c_void;
}

#[link(name = "cloud_msgs__rosidl_generator_c")]
extern "C" {
    fn cloud_msgs__msg__CloudInfo__init(msg: *mut CloudInfo) -> bool;
    fn cloud_msgs__msg__CloudInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CloudInfo>, size: usize) -> bool;
    fn cloud_msgs__msg__CloudInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CloudInfo>);
    fn cloud_msgs__msg__CloudInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CloudInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<CloudInfo>) -> bool;
}

// Corresponds to cloud_msgs__msg__CloudInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CloudInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_ring_index: rosidl_runtime_rs::Sequence<i32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub end_ring_index: rosidl_runtime_rs::Sequence<i32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_orientation: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub end_orientation: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orientation_diff: f32,

    /// true - ground point, false - other points
    pub segmented_cloud_ground_flag: rosidl_runtime_rs::Sequence<bool>,

    /// point column index in range image
    pub segmented_cloud_col_ind: rosidl_runtime_rs::Sequence<u32>,

    /// point range
    pub segmented_cloud_range: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for CloudInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !cloud_msgs__msg__CloudInfo__init(&mut msg as *mut _) {
        panic!("Call to cloud_msgs__msg__CloudInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CloudInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cloud_msgs__msg__CloudInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cloud_msgs__msg__CloudInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cloud_msgs__msg__CloudInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CloudInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CloudInfo where Self: Sized {
  const TYPE_NAME: &'static str = "cloud_msgs/msg/CloudInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__cloud_msgs__msg__CloudInfo() }
  }
}


