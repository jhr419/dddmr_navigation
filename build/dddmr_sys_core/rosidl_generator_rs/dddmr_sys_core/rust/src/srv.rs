#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to dddmr_sys_core__srv__GetKeyFrameCloud_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetKeyFrameCloud_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub key_frame_number: i32,

}



impl Default for GetKeyFrameCloud_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetKeyFrameCloud_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetKeyFrameCloud_Request {
  type RmwMsg = super::srv::rmw::GetKeyFrameCloud_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        key_frame_number: msg.key_frame_number,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      key_frame_number: msg.key_frame_number,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      key_frame_number: msg.key_frame_number,
    }
  }
}


// Corresponds to dddmr_sys_core__srv__GetKeyFrameCloud_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetKeyFrameCloud_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub key_frame_cloud: sensor_msgs::msg::PointCloud2,


    // This member is not documented.
    #[allow(missing_docs)]
    pub key_frame_ground: sensor_msgs::msg::PointCloud2,


    // This member is not documented.
    #[allow(missing_docs)]
    pub key_frame_ground_edge: sensor_msgs::msg::PointCloud2,

}



impl Default for GetKeyFrameCloud_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetKeyFrameCloud_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetKeyFrameCloud_Response {
  type RmwMsg = super::srv::rmw::GetKeyFrameCloud_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        key_frame_cloud: sensor_msgs::msg::PointCloud2::into_rmw_message(std::borrow::Cow::Owned(msg.key_frame_cloud)).into_owned(),
        key_frame_ground: sensor_msgs::msg::PointCloud2::into_rmw_message(std::borrow::Cow::Owned(msg.key_frame_ground)).into_owned(),
        key_frame_ground_edge: sensor_msgs::msg::PointCloud2::into_rmw_message(std::borrow::Cow::Owned(msg.key_frame_ground_edge)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        key_frame_cloud: sensor_msgs::msg::PointCloud2::into_rmw_message(std::borrow::Cow::Borrowed(&msg.key_frame_cloud)).into_owned(),
        key_frame_ground: sensor_msgs::msg::PointCloud2::into_rmw_message(std::borrow::Cow::Borrowed(&msg.key_frame_ground)).into_owned(),
        key_frame_ground_edge: sensor_msgs::msg::PointCloud2::into_rmw_message(std::borrow::Cow::Borrowed(&msg.key_frame_ground_edge)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      key_frame_cloud: sensor_msgs::msg::PointCloud2::from_rmw_message(msg.key_frame_cloud),
      key_frame_ground: sensor_msgs::msg::PointCloud2::from_rmw_message(msg.key_frame_ground),
      key_frame_ground_edge: sensor_msgs::msg::PointCloud2::from_rmw_message(msg.key_frame_ground_edge),
    }
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


