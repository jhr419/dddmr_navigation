
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__PToPMoveBase_Goal() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__PToPMoveBase_Goal__init(msg: *mut PToPMoveBase_Goal) -> bool;
    fn dddmr_sys_core__action__PToPMoveBase_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_Goal>, size: usize) -> bool;
    fn dddmr_sys_core__action__PToPMoveBase_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_Goal>);
    fn dddmr_sys_core__action__PToPMoveBase_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PToPMoveBase_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_Goal>) -> bool;
}

// Corresponds to dddmr_sys_core__action__PToPMoveBase_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PToPMoveBase_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_pose: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_value: f32,

}



impl Default for PToPMoveBase_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__PToPMoveBase_Goal__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__PToPMoveBase_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PToPMoveBase_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PToPMoveBase_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PToPMoveBase_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/PToPMoveBase_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__PToPMoveBase_Goal() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__PToPMoveBase_Result() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__PToPMoveBase_Result__init(msg: *mut PToPMoveBase_Result) -> bool;
    fn dddmr_sys_core__action__PToPMoveBase_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_Result>, size: usize) -> bool;
    fn dddmr_sys_core__action__PToPMoveBase_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_Result>);
    fn dddmr_sys_core__action__PToPMoveBase_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PToPMoveBase_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_Result>) -> bool;
}

// Corresponds to dddmr_sys_core__action__PToPMoveBase_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PToPMoveBase_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: rosidl_runtime_rs::String,

}



impl Default for PToPMoveBase_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__PToPMoveBase_Result__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__PToPMoveBase_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PToPMoveBase_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PToPMoveBase_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PToPMoveBase_Result where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/PToPMoveBase_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__PToPMoveBase_Result() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__PToPMoveBase_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__PToPMoveBase_Feedback__init(msg: *mut PToPMoveBase_Feedback) -> bool;
    fn dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_Feedback>, size: usize) -> bool;
    fn dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_Feedback>);
    fn dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PToPMoveBase_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_Feedback>) -> bool;
}

// Corresponds to dddmr_sys_core__action__PToPMoveBase_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PToPMoveBase_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub base_position: geometry_msgs::msg::rmw::TransformStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_decision: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_decision: rosidl_runtime_rs::String,

}



impl Default for PToPMoveBase_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__PToPMoveBase_Feedback__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__PToPMoveBase_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PToPMoveBase_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PToPMoveBase_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PToPMoveBase_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/PToPMoveBase_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__PToPMoveBase_Feedback() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__PToPMoveBase_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__init(msg: *mut PToPMoveBase_FeedbackMessage) -> bool;
    fn dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_FeedbackMessage>, size: usize) -> bool;
    fn dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_FeedbackMessage>);
    fn dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PToPMoveBase_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_FeedbackMessage>) -> bool;
}

// Corresponds to dddmr_sys_core__action__PToPMoveBase_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PToPMoveBase_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::PToPMoveBase_Feedback,

}



impl Default for PToPMoveBase_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PToPMoveBase_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PToPMoveBase_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PToPMoveBase_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/PToPMoveBase_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__PToPMoveBase_FeedbackMessage() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__GetPlan_Goal() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__GetPlan_Goal__init(msg: *mut GetPlan_Goal) -> bool;
    fn dddmr_sys_core__action__GetPlan_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetPlan_Goal>, size: usize) -> bool;
    fn dddmr_sys_core__action__GetPlan_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetPlan_Goal>);
    fn dddmr_sys_core__action__GetPlan_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetPlan_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<GetPlan_Goal>) -> bool;
}

// Corresponds to dddmr_sys_core__action__GetPlan_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPlan_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start: geometry_msgs::msg::rmw::PoseStamped,

    /// below for dwa global plnner
    pub activate_threading: bool,

}



impl Default for GetPlan_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__GetPlan_Goal__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__GetPlan_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetPlan_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetPlan_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetPlan_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/GetPlan_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__GetPlan_Goal() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__GetPlan_Result() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__GetPlan_Result__init(msg: *mut GetPlan_Result) -> bool;
    fn dddmr_sys_core__action__GetPlan_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetPlan_Result>, size: usize) -> bool;
    fn dddmr_sys_core__action__GetPlan_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetPlan_Result>);
    fn dddmr_sys_core__action__GetPlan_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetPlan_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<GetPlan_Result>) -> bool;
}

// Corresponds to dddmr_sys_core__action__GetPlan_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPlan_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub path: nav_msgs::msg::rmw::Path,


    // This member is not documented.
    #[allow(missing_docs)]
    pub planning_time: builtin_interfaces::msg::rmw::Duration,

}



impl Default for GetPlan_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__GetPlan_Result__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__GetPlan_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetPlan_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetPlan_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetPlan_Result where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/GetPlan_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__GetPlan_Result() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__GetPlan_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__GetPlan_Feedback__init(msg: *mut GetPlan_Feedback) -> bool;
    fn dddmr_sys_core__action__GetPlan_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetPlan_Feedback>, size: usize) -> bool;
    fn dddmr_sys_core__action__GetPlan_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetPlan_Feedback>);
    fn dddmr_sys_core__action__GetPlan_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetPlan_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<GetPlan_Feedback>) -> bool;
}

// Corresponds to dddmr_sys_core__action__GetPlan_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPlan_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetPlan_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__GetPlan_Feedback__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__GetPlan_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetPlan_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetPlan_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetPlan_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/GetPlan_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__GetPlan_Feedback() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__GetPlan_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__GetPlan_FeedbackMessage__init(msg: *mut GetPlan_FeedbackMessage) -> bool;
    fn dddmr_sys_core__action__GetPlan_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetPlan_FeedbackMessage>, size: usize) -> bool;
    fn dddmr_sys_core__action__GetPlan_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetPlan_FeedbackMessage>);
    fn dddmr_sys_core__action__GetPlan_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetPlan_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<GetPlan_FeedbackMessage>) -> bool;
}

// Corresponds to dddmr_sys_core__action__GetPlan_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPlan_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::GetPlan_Feedback,

}



impl Default for GetPlan_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__GetPlan_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__GetPlan_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetPlan_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetPlan_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetPlan_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/GetPlan_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__GetPlan_FeedbackMessage() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_Goal() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__RecoveryBehaviors_Goal__init(msg: *mut RecoveryBehaviors_Goal) -> bool;
    fn dddmr_sys_core__action__RecoveryBehaviors_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_Goal>, size: usize) -> bool;
    fn dddmr_sys_core__action__RecoveryBehaviors_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_Goal>);
    fn dddmr_sys_core__action__RecoveryBehaviors_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RecoveryBehaviors_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_Goal>) -> bool;
}

// Corresponds to dddmr_sys_core__action__RecoveryBehaviors_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecoveryBehaviors_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub behavior_name: rosidl_runtime_rs::String,

}



impl Default for RecoveryBehaviors_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__RecoveryBehaviors_Goal__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__RecoveryBehaviors_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RecoveryBehaviors_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RecoveryBehaviors_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RecoveryBehaviors_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/RecoveryBehaviors_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_Goal() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_Result() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__RecoveryBehaviors_Result__init(msg: *mut RecoveryBehaviors_Result) -> bool;
    fn dddmr_sys_core__action__RecoveryBehaviors_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_Result>, size: usize) -> bool;
    fn dddmr_sys_core__action__RecoveryBehaviors_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_Result>);
    fn dddmr_sys_core__action__RecoveryBehaviors_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RecoveryBehaviors_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_Result>) -> bool;
}

// Corresponds to dddmr_sys_core__action__RecoveryBehaviors_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecoveryBehaviors_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub succeed: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub info: rosidl_runtime_rs::String,

}



impl Default for RecoveryBehaviors_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__RecoveryBehaviors_Result__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__RecoveryBehaviors_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RecoveryBehaviors_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RecoveryBehaviors_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RecoveryBehaviors_Result where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/RecoveryBehaviors_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_Result() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__RecoveryBehaviors_Feedback__init(msg: *mut RecoveryBehaviors_Feedback) -> bool;
    fn dddmr_sys_core__action__RecoveryBehaviors_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_Feedback>, size: usize) -> bool;
    fn dddmr_sys_core__action__RecoveryBehaviors_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_Feedback>);
    fn dddmr_sys_core__action__RecoveryBehaviors_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RecoveryBehaviors_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_Feedback>) -> bool;
}

// Corresponds to dddmr_sys_core__action__RecoveryBehaviors_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecoveryBehaviors_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub undergoing: bool,

}



impl Default for RecoveryBehaviors_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__RecoveryBehaviors_Feedback__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__RecoveryBehaviors_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RecoveryBehaviors_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RecoveryBehaviors_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RecoveryBehaviors_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/RecoveryBehaviors_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_Feedback() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__RecoveryBehaviors_FeedbackMessage__init(msg: *mut RecoveryBehaviors_FeedbackMessage) -> bool;
    fn dddmr_sys_core__action__RecoveryBehaviors_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_FeedbackMessage>, size: usize) -> bool;
    fn dddmr_sys_core__action__RecoveryBehaviors_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_FeedbackMessage>);
    fn dddmr_sys_core__action__RecoveryBehaviors_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RecoveryBehaviors_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_FeedbackMessage>) -> bool;
}

// Corresponds to dddmr_sys_core__action__RecoveryBehaviors_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecoveryBehaviors_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::RecoveryBehaviors_Feedback,

}



impl Default for RecoveryBehaviors_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__RecoveryBehaviors_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__RecoveryBehaviors_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RecoveryBehaviors_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RecoveryBehaviors_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RecoveryBehaviors_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/RecoveryBehaviors_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_FeedbackMessage() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__TagDocking_Goal() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__TagDocking_Goal__init(msg: *mut TagDocking_Goal) -> bool;
    fn dddmr_sys_core__action__TagDocking_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TagDocking_Goal>, size: usize) -> bool;
    fn dddmr_sys_core__action__TagDocking_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TagDocking_Goal>);
    fn dddmr_sys_core__action__TagDocking_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TagDocking_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<TagDocking_Goal>) -> bool;
}

// Corresponds to dddmr_sys_core__action__TagDocking_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagDocking_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub start: bool,

}



impl Default for TagDocking_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__TagDocking_Goal__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__TagDocking_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TagDocking_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TagDocking_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TagDocking_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/TagDocking_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__TagDocking_Goal() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__TagDocking_Result() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__TagDocking_Result__init(msg: *mut TagDocking_Result) -> bool;
    fn dddmr_sys_core__action__TagDocking_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TagDocking_Result>, size: usize) -> bool;
    fn dddmr_sys_core__action__TagDocking_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TagDocking_Result>);
    fn dddmr_sys_core__action__TagDocking_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TagDocking_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<TagDocking_Result>) -> bool;
}

// Corresponds to dddmr_sys_core__action__TagDocking_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagDocking_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub succeed: bool,

}



impl Default for TagDocking_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__TagDocking_Result__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__TagDocking_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TagDocking_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TagDocking_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TagDocking_Result where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/TagDocking_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__TagDocking_Result() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__TagDocking_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__TagDocking_Feedback__init(msg: *mut TagDocking_Feedback) -> bool;
    fn dddmr_sys_core__action__TagDocking_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TagDocking_Feedback>, size: usize) -> bool;
    fn dddmr_sys_core__action__TagDocking_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TagDocking_Feedback>);
    fn dddmr_sys_core__action__TagDocking_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TagDocking_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<TagDocking_Feedback>) -> bool;
}

// Corresponds to dddmr_sys_core__action__TagDocking_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagDocking_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for TagDocking_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__TagDocking_Feedback__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__TagDocking_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TagDocking_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TagDocking_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TagDocking_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/TagDocking_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__TagDocking_Feedback() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__TagDocking_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__TagDocking_FeedbackMessage__init(msg: *mut TagDocking_FeedbackMessage) -> bool;
    fn dddmr_sys_core__action__TagDocking_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TagDocking_FeedbackMessage>, size: usize) -> bool;
    fn dddmr_sys_core__action__TagDocking_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TagDocking_FeedbackMessage>);
    fn dddmr_sys_core__action__TagDocking_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TagDocking_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<TagDocking_FeedbackMessage>) -> bool;
}

// Corresponds to dddmr_sys_core__action__TagDocking_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagDocking_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::TagDocking_Feedback,

}



impl Default for TagDocking_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__TagDocking_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__TagDocking_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TagDocking_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TagDocking_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TagDocking_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/TagDocking_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__TagDocking_FeedbackMessage() }
  }
}




#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__PToPMoveBase_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__init(msg: *mut PToPMoveBase_SendGoal_Request) -> bool;
    fn dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_SendGoal_Request>, size: usize) -> bool;
    fn dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_SendGoal_Request>);
    fn dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PToPMoveBase_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_SendGoal_Request>) -> bool;
}

// Corresponds to dddmr_sys_core__action__PToPMoveBase_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PToPMoveBase_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::PToPMoveBase_Goal,

}



impl Default for PToPMoveBase_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PToPMoveBase_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PToPMoveBase_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PToPMoveBase_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/PToPMoveBase_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__PToPMoveBase_SendGoal_Request() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__PToPMoveBase_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__init(msg: *mut PToPMoveBase_SendGoal_Response) -> bool;
    fn dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_SendGoal_Response>, size: usize) -> bool;
    fn dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_SendGoal_Response>);
    fn dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PToPMoveBase_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_SendGoal_Response>) -> bool;
}

// Corresponds to dddmr_sys_core__action__PToPMoveBase_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PToPMoveBase_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for PToPMoveBase_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PToPMoveBase_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PToPMoveBase_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PToPMoveBase_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/PToPMoveBase_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__PToPMoveBase_SendGoal_Response() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__PToPMoveBase_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__PToPMoveBase_GetResult_Request__init(msg: *mut PToPMoveBase_GetResult_Request) -> bool;
    fn dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_GetResult_Request>, size: usize) -> bool;
    fn dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_GetResult_Request>);
    fn dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PToPMoveBase_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_GetResult_Request>) -> bool;
}

// Corresponds to dddmr_sys_core__action__PToPMoveBase_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PToPMoveBase_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for PToPMoveBase_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__PToPMoveBase_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__PToPMoveBase_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PToPMoveBase_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PToPMoveBase_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PToPMoveBase_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/PToPMoveBase_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__PToPMoveBase_GetResult_Request() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__PToPMoveBase_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__PToPMoveBase_GetResult_Response__init(msg: *mut PToPMoveBase_GetResult_Response) -> bool;
    fn dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_GetResult_Response>, size: usize) -> bool;
    fn dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_GetResult_Response>);
    fn dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PToPMoveBase_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PToPMoveBase_GetResult_Response>) -> bool;
}

// Corresponds to dddmr_sys_core__action__PToPMoveBase_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PToPMoveBase_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::PToPMoveBase_Result,

}



impl Default for PToPMoveBase_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__PToPMoveBase_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__PToPMoveBase_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PToPMoveBase_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__PToPMoveBase_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PToPMoveBase_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PToPMoveBase_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/PToPMoveBase_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__PToPMoveBase_GetResult_Response() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__GetPlan_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__GetPlan_SendGoal_Request__init(msg: *mut GetPlan_SendGoal_Request) -> bool;
    fn dddmr_sys_core__action__GetPlan_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetPlan_SendGoal_Request>, size: usize) -> bool;
    fn dddmr_sys_core__action__GetPlan_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetPlan_SendGoal_Request>);
    fn dddmr_sys_core__action__GetPlan_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetPlan_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetPlan_SendGoal_Request>) -> bool;
}

// Corresponds to dddmr_sys_core__action__GetPlan_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPlan_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::GetPlan_Goal,

}



impl Default for GetPlan_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__GetPlan_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__GetPlan_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetPlan_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetPlan_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetPlan_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/GetPlan_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__GetPlan_SendGoal_Request() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__GetPlan_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__GetPlan_SendGoal_Response__init(msg: *mut GetPlan_SendGoal_Response) -> bool;
    fn dddmr_sys_core__action__GetPlan_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetPlan_SendGoal_Response>, size: usize) -> bool;
    fn dddmr_sys_core__action__GetPlan_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetPlan_SendGoal_Response>);
    fn dddmr_sys_core__action__GetPlan_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetPlan_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetPlan_SendGoal_Response>) -> bool;
}

// Corresponds to dddmr_sys_core__action__GetPlan_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPlan_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for GetPlan_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__GetPlan_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__GetPlan_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetPlan_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetPlan_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetPlan_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/GetPlan_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__GetPlan_SendGoal_Response() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__GetPlan_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__GetPlan_GetResult_Request__init(msg: *mut GetPlan_GetResult_Request) -> bool;
    fn dddmr_sys_core__action__GetPlan_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetPlan_GetResult_Request>, size: usize) -> bool;
    fn dddmr_sys_core__action__GetPlan_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetPlan_GetResult_Request>);
    fn dddmr_sys_core__action__GetPlan_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetPlan_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetPlan_GetResult_Request>) -> bool;
}

// Corresponds to dddmr_sys_core__action__GetPlan_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPlan_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for GetPlan_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__GetPlan_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__GetPlan_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetPlan_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetPlan_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetPlan_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/GetPlan_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__GetPlan_GetResult_Request() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__GetPlan_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__GetPlan_GetResult_Response__init(msg: *mut GetPlan_GetResult_Response) -> bool;
    fn dddmr_sys_core__action__GetPlan_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetPlan_GetResult_Response>, size: usize) -> bool;
    fn dddmr_sys_core__action__GetPlan_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetPlan_GetResult_Response>);
    fn dddmr_sys_core__action__GetPlan_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetPlan_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetPlan_GetResult_Response>) -> bool;
}

// Corresponds to dddmr_sys_core__action__GetPlan_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPlan_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::GetPlan_Result,

}



impl Default for GetPlan_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__GetPlan_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__GetPlan_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetPlan_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__GetPlan_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetPlan_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetPlan_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/GetPlan_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__GetPlan_GetResult_Response() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Request__init(msg: *mut RecoveryBehaviors_SendGoal_Request) -> bool;
    fn dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_SendGoal_Request>, size: usize) -> bool;
    fn dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_SendGoal_Request>);
    fn dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RecoveryBehaviors_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_SendGoal_Request>) -> bool;
}

// Corresponds to dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecoveryBehaviors_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::RecoveryBehaviors_Goal,

}



impl Default for RecoveryBehaviors_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RecoveryBehaviors_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RecoveryBehaviors_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RecoveryBehaviors_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/RecoveryBehaviors_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Request() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Response__init(msg: *mut RecoveryBehaviors_SendGoal_Response) -> bool;
    fn dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_SendGoal_Response>, size: usize) -> bool;
    fn dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_SendGoal_Response>);
    fn dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RecoveryBehaviors_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_SendGoal_Response>) -> bool;
}

// Corresponds to dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecoveryBehaviors_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for RecoveryBehaviors_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RecoveryBehaviors_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RecoveryBehaviors_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RecoveryBehaviors_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/RecoveryBehaviors_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Response() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__RecoveryBehaviors_GetResult_Request__init(msg: *mut RecoveryBehaviors_GetResult_Request) -> bool;
    fn dddmr_sys_core__action__RecoveryBehaviors_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_GetResult_Request>, size: usize) -> bool;
    fn dddmr_sys_core__action__RecoveryBehaviors_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_GetResult_Request>);
    fn dddmr_sys_core__action__RecoveryBehaviors_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RecoveryBehaviors_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_GetResult_Request>) -> bool;
}

// Corresponds to dddmr_sys_core__action__RecoveryBehaviors_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecoveryBehaviors_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for RecoveryBehaviors_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__RecoveryBehaviors_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__RecoveryBehaviors_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RecoveryBehaviors_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RecoveryBehaviors_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RecoveryBehaviors_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/RecoveryBehaviors_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_GetResult_Request() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__RecoveryBehaviors_GetResult_Response__init(msg: *mut RecoveryBehaviors_GetResult_Response) -> bool;
    fn dddmr_sys_core__action__RecoveryBehaviors_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_GetResult_Response>, size: usize) -> bool;
    fn dddmr_sys_core__action__RecoveryBehaviors_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_GetResult_Response>);
    fn dddmr_sys_core__action__RecoveryBehaviors_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RecoveryBehaviors_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RecoveryBehaviors_GetResult_Response>) -> bool;
}

// Corresponds to dddmr_sys_core__action__RecoveryBehaviors_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecoveryBehaviors_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::RecoveryBehaviors_Result,

}



impl Default for RecoveryBehaviors_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__RecoveryBehaviors_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__RecoveryBehaviors_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RecoveryBehaviors_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__RecoveryBehaviors_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RecoveryBehaviors_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RecoveryBehaviors_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/RecoveryBehaviors_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_GetResult_Response() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__TagDocking_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__TagDocking_SendGoal_Request__init(msg: *mut TagDocking_SendGoal_Request) -> bool;
    fn dddmr_sys_core__action__TagDocking_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TagDocking_SendGoal_Request>, size: usize) -> bool;
    fn dddmr_sys_core__action__TagDocking_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TagDocking_SendGoal_Request>);
    fn dddmr_sys_core__action__TagDocking_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TagDocking_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TagDocking_SendGoal_Request>) -> bool;
}

// Corresponds to dddmr_sys_core__action__TagDocking_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagDocking_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::TagDocking_Goal,

}



impl Default for TagDocking_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__TagDocking_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__TagDocking_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TagDocking_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TagDocking_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TagDocking_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/TagDocking_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__TagDocking_SendGoal_Request() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__TagDocking_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__TagDocking_SendGoal_Response__init(msg: *mut TagDocking_SendGoal_Response) -> bool;
    fn dddmr_sys_core__action__TagDocking_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TagDocking_SendGoal_Response>, size: usize) -> bool;
    fn dddmr_sys_core__action__TagDocking_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TagDocking_SendGoal_Response>);
    fn dddmr_sys_core__action__TagDocking_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TagDocking_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TagDocking_SendGoal_Response>) -> bool;
}

// Corresponds to dddmr_sys_core__action__TagDocking_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagDocking_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for TagDocking_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__TagDocking_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__TagDocking_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TagDocking_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TagDocking_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TagDocking_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/TagDocking_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__TagDocking_SendGoal_Response() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__TagDocking_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__TagDocking_GetResult_Request__init(msg: *mut TagDocking_GetResult_Request) -> bool;
    fn dddmr_sys_core__action__TagDocking_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TagDocking_GetResult_Request>, size: usize) -> bool;
    fn dddmr_sys_core__action__TagDocking_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TagDocking_GetResult_Request>);
    fn dddmr_sys_core__action__TagDocking_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TagDocking_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TagDocking_GetResult_Request>) -> bool;
}

// Corresponds to dddmr_sys_core__action__TagDocking_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagDocking_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for TagDocking_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__TagDocking_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__TagDocking_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TagDocking_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TagDocking_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TagDocking_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/TagDocking_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__TagDocking_GetResult_Request() }
  }
}


#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__TagDocking_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "dddmr_sys_core__rosidl_generator_c")]
extern "C" {
    fn dddmr_sys_core__action__TagDocking_GetResult_Response__init(msg: *mut TagDocking_GetResult_Response) -> bool;
    fn dddmr_sys_core__action__TagDocking_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TagDocking_GetResult_Response>, size: usize) -> bool;
    fn dddmr_sys_core__action__TagDocking_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TagDocking_GetResult_Response>);
    fn dddmr_sys_core__action__TagDocking_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TagDocking_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TagDocking_GetResult_Response>) -> bool;
}

// Corresponds to dddmr_sys_core__action__TagDocking_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagDocking_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::TagDocking_Result,

}



impl Default for TagDocking_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dddmr_sys_core__action__TagDocking_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to dddmr_sys_core__action__TagDocking_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TagDocking_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dddmr_sys_core__action__TagDocking_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TagDocking_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TagDocking_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dddmr_sys_core/action/TagDocking_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dddmr_sys_core__action__TagDocking_GetResult_Response() }
  }
}






#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dddmr_sys_core__action__PToPMoveBase_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to dddmr_sys_core__action__PToPMoveBase_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct PToPMoveBase_SendGoal;

impl rosidl_runtime_rs::Service for PToPMoveBase_SendGoal {
    type Request = PToPMoveBase_SendGoal_Request;
    type Response = PToPMoveBase_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dddmr_sys_core__action__PToPMoveBase_SendGoal() }
    }
}




#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dddmr_sys_core__action__PToPMoveBase_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to dddmr_sys_core__action__PToPMoveBase_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct PToPMoveBase_GetResult;

impl rosidl_runtime_rs::Service for PToPMoveBase_GetResult {
    type Request = PToPMoveBase_GetResult_Request;
    type Response = PToPMoveBase_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dddmr_sys_core__action__PToPMoveBase_GetResult() }
    }
}




#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dddmr_sys_core__action__GetPlan_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to dddmr_sys_core__action__GetPlan_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct GetPlan_SendGoal;

impl rosidl_runtime_rs::Service for GetPlan_SendGoal {
    type Request = GetPlan_SendGoal_Request;
    type Response = GetPlan_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dddmr_sys_core__action__GetPlan_SendGoal() }
    }
}




#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dddmr_sys_core__action__GetPlan_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to dddmr_sys_core__action__GetPlan_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct GetPlan_GetResult;

impl rosidl_runtime_rs::Service for GetPlan_GetResult {
    type Request = GetPlan_GetResult_Request;
    type Response = GetPlan_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dddmr_sys_core__action__GetPlan_GetResult() }
    }
}




#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to dddmr_sys_core__action__RecoveryBehaviors_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct RecoveryBehaviors_SendGoal;

impl rosidl_runtime_rs::Service for RecoveryBehaviors_SendGoal {
    type Request = RecoveryBehaviors_SendGoal_Request;
    type Response = RecoveryBehaviors_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_SendGoal() }
    }
}




#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to dddmr_sys_core__action__RecoveryBehaviors_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct RecoveryBehaviors_GetResult;

impl rosidl_runtime_rs::Service for RecoveryBehaviors_GetResult {
    type Request = RecoveryBehaviors_GetResult_Request;
    type Response = RecoveryBehaviors_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors_GetResult() }
    }
}




#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dddmr_sys_core__action__TagDocking_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to dddmr_sys_core__action__TagDocking_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct TagDocking_SendGoal;

impl rosidl_runtime_rs::Service for TagDocking_SendGoal {
    type Request = TagDocking_SendGoal_Request;
    type Response = TagDocking_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dddmr_sys_core__action__TagDocking_SendGoal() }
    }
}




#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dddmr_sys_core__action__TagDocking_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to dddmr_sys_core__action__TagDocking_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct TagDocking_GetResult;

impl rosidl_runtime_rs::Service for TagDocking_GetResult {
    type Request = TagDocking_GetResult_Request;
    type Response = TagDocking_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dddmr_sys_core__action__TagDocking_GetResult() }
    }
}


