#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to cloud_msgs__msg__CloudInfo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CloudInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_ring_index: Vec<i32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub end_ring_index: Vec<i32>,


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
    pub segmented_cloud_ground_flag: Vec<bool>,

    /// point column index in range image
    pub segmented_cloud_col_ind: Vec<u32>,

    /// point range
    pub segmented_cloud_range: Vec<f32>,

}



impl Default for CloudInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CloudInfo::default())
  }
}

impl rosidl_runtime_rs::Message for CloudInfo {
  type RmwMsg = super::msg::rmw::CloudInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        start_ring_index: msg.start_ring_index.into(),
        end_ring_index: msg.end_ring_index.into(),
        start_orientation: msg.start_orientation,
        end_orientation: msg.end_orientation,
        orientation_diff: msg.orientation_diff,
        segmented_cloud_ground_flag: msg.segmented_cloud_ground_flag.into(),
        segmented_cloud_col_ind: msg.segmented_cloud_col_ind.into(),
        segmented_cloud_range: msg.segmented_cloud_range.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        start_ring_index: msg.start_ring_index.as_slice().into(),
        end_ring_index: msg.end_ring_index.as_slice().into(),
      start_orientation: msg.start_orientation,
      end_orientation: msg.end_orientation,
      orientation_diff: msg.orientation_diff,
        segmented_cloud_ground_flag: msg.segmented_cloud_ground_flag.as_slice().into(),
        segmented_cloud_col_ind: msg.segmented_cloud_col_ind.as_slice().into(),
        segmented_cloud_range: msg.segmented_cloud_range.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      start_ring_index: msg.start_ring_index
          .into_iter()
          .collect(),
      end_ring_index: msg.end_ring_index
          .into_iter()
          .collect(),
      start_orientation: msg.start_orientation,
      end_orientation: msg.end_orientation,
      orientation_diff: msg.orientation_diff,
      segmented_cloud_ground_flag: msg.segmented_cloud_ground_flag
          .into_iter()
          .collect(),
      segmented_cloud_col_ind: msg.segmented_cloud_col_ind
          .into_iter()
          .collect(),
      segmented_cloud_range: msg.segmented_cloud_range
          .into_iter()
          .collect(),
    }
  }
}


