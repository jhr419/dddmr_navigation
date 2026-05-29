
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to dddmr_sys_core__action__PToPMoveBase_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PToPMoveBase_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_pose: geometry_msgs::msg::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_value: f32,

}



impl Default for PToPMoveBase_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PToPMoveBase_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for PToPMoveBase_Goal {
  type RmwMsg = super::action::rmw::PToPMoveBase_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.target_pose)).into_owned(),
        target_value: msg.target_value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.target_pose)).into_owned(),
      target_value: msg.target_value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.target_pose),
      target_value: msg.target_value,
    }
  }
}


// Corresponds to dddmr_sys_core__action__PToPMoveBase_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PToPMoveBase_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: std::string::String,

}



impl Default for PToPMoveBase_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PToPMoveBase_Result::default())
  }
}

impl rosidl_runtime_rs::Message for PToPMoveBase_Result {
  type RmwMsg = super::action::rmw::PToPMoveBase_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: msg.result.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: msg.result.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: msg.result.to_string(),
    }
  }
}


// Corresponds to dddmr_sys_core__action__PToPMoveBase_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PToPMoveBase_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub base_position: geometry_msgs::msg::TransformStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_decision: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_decision: std::string::String,

}



impl Default for PToPMoveBase_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PToPMoveBase_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for PToPMoveBase_Feedback {
  type RmwMsg = super::action::rmw::PToPMoveBase_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        base_position: geometry_msgs::msg::TransformStamped::into_rmw_message(std::borrow::Cow::Owned(msg.base_position)).into_owned(),
        last_decision: msg.last_decision.as_str().into(),
        current_decision: msg.current_decision.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        base_position: geometry_msgs::msg::TransformStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.base_position)).into_owned(),
        last_decision: msg.last_decision.as_str().into(),
        current_decision: msg.current_decision.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      base_position: geometry_msgs::msg::TransformStamped::from_rmw_message(msg.base_position),
      last_decision: msg.last_decision.to_string(),
      current_decision: msg.current_decision.to_string(),
    }
  }
}


// Corresponds to dddmr_sys_core__action__PToPMoveBase_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PToPMoveBase_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::PToPMoveBase_Feedback,

}



impl Default for PToPMoveBase_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PToPMoveBase_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for PToPMoveBase_FeedbackMessage {
  type RmwMsg = super::action::rmw::PToPMoveBase_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::PToPMoveBase_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::PToPMoveBase_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::PToPMoveBase_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to dddmr_sys_core__action__GetPlan_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPlan_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: geometry_msgs::msg::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start: geometry_msgs::msg::PoseStamped,

    /// below for dwa global plnner
    pub activate_threading: bool,

}



impl Default for GetPlan_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GetPlan_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for GetPlan_Goal {
  type RmwMsg = super::action::rmw::GetPlan_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
        start: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.start)).into_owned(),
        activate_threading: msg.activate_threading,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
        start: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.start)).into_owned(),
      activate_threading: msg.activate_threading,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.goal),
      start: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.start),
      activate_threading: msg.activate_threading,
    }
  }
}


// Corresponds to dddmr_sys_core__action__GetPlan_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPlan_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub path: nav_msgs::msg::Path,


    // This member is not documented.
    #[allow(missing_docs)]
    pub planning_time: builtin_interfaces::msg::Duration,

}



impl Default for GetPlan_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GetPlan_Result::default())
  }
}

impl rosidl_runtime_rs::Message for GetPlan_Result {
  type RmwMsg = super::action::rmw::GetPlan_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        path: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Owned(msg.path)).into_owned(),
        planning_time: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.planning_time)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        path: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Borrowed(&msg.path)).into_owned(),
        planning_time: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.planning_time)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      path: nav_msgs::msg::Path::from_rmw_message(msg.path),
      planning_time: builtin_interfaces::msg::Duration::from_rmw_message(msg.planning_time),
    }
  }
}


// Corresponds to dddmr_sys_core__action__GetPlan_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPlan_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetPlan_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GetPlan_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for GetPlan_Feedback {
  type RmwMsg = super::action::rmw::GetPlan_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to dddmr_sys_core__action__GetPlan_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPlan_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::GetPlan_Feedback,

}



impl Default for GetPlan_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GetPlan_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for GetPlan_FeedbackMessage {
  type RmwMsg = super::action::rmw::GetPlan_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::GetPlan_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::GetPlan_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::GetPlan_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to dddmr_sys_core__action__RecoveryBehaviors_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecoveryBehaviors_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub behavior_name: std::string::String,

}



impl Default for RecoveryBehaviors_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RecoveryBehaviors_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for RecoveryBehaviors_Goal {
  type RmwMsg = super::action::rmw::RecoveryBehaviors_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        behavior_name: msg.behavior_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        behavior_name: msg.behavior_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      behavior_name: msg.behavior_name.to_string(),
    }
  }
}


// Corresponds to dddmr_sys_core__action__RecoveryBehaviors_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecoveryBehaviors_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub succeed: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub info: std::string::String,

}



impl Default for RecoveryBehaviors_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RecoveryBehaviors_Result::default())
  }
}

impl rosidl_runtime_rs::Message for RecoveryBehaviors_Result {
  type RmwMsg = super::action::rmw::RecoveryBehaviors_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        succeed: msg.succeed,
        info: msg.info.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      succeed: msg.succeed,
        info: msg.info.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      succeed: msg.succeed,
      info: msg.info.to_string(),
    }
  }
}


// Corresponds to dddmr_sys_core__action__RecoveryBehaviors_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecoveryBehaviors_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub undergoing: bool,

}



impl Default for RecoveryBehaviors_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RecoveryBehaviors_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for RecoveryBehaviors_Feedback {
  type RmwMsg = super::action::rmw::RecoveryBehaviors_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        undergoing: msg.undergoing,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      undergoing: msg.undergoing,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      undergoing: msg.undergoing,
    }
  }
}


// Corresponds to dddmr_sys_core__action__RecoveryBehaviors_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecoveryBehaviors_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::RecoveryBehaviors_Feedback,

}



impl Default for RecoveryBehaviors_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RecoveryBehaviors_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for RecoveryBehaviors_FeedbackMessage {
  type RmwMsg = super::action::rmw::RecoveryBehaviors_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::RecoveryBehaviors_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::RecoveryBehaviors_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::RecoveryBehaviors_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to dddmr_sys_core__action__TagDocking_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagDocking_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub start: bool,

}



impl Default for TagDocking_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::TagDocking_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for TagDocking_Goal {
  type RmwMsg = super::action::rmw::TagDocking_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        start: msg.start,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      start: msg.start,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      start: msg.start,
    }
  }
}


// Corresponds to dddmr_sys_core__action__TagDocking_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagDocking_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub succeed: bool,

}



impl Default for TagDocking_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::TagDocking_Result::default())
  }
}

impl rosidl_runtime_rs::Message for TagDocking_Result {
  type RmwMsg = super::action::rmw::TagDocking_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        succeed: msg.succeed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      succeed: msg.succeed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      succeed: msg.succeed,
    }
  }
}


// Corresponds to dddmr_sys_core__action__TagDocking_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagDocking_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for TagDocking_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::TagDocking_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for TagDocking_Feedback {
  type RmwMsg = super::action::rmw::TagDocking_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to dddmr_sys_core__action__TagDocking_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagDocking_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::TagDocking_Feedback,

}



impl Default for TagDocking_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::TagDocking_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for TagDocking_FeedbackMessage {
  type RmwMsg = super::action::rmw::TagDocking_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::TagDocking_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::TagDocking_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::TagDocking_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to dddmr_sys_core__action__PToPMoveBase_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PToPMoveBase_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::PToPMoveBase_Goal,

}



impl Default for PToPMoveBase_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PToPMoveBase_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PToPMoveBase_SendGoal_Request {
  type RmwMsg = super::action::rmw::PToPMoveBase_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::PToPMoveBase_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::PToPMoveBase_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::PToPMoveBase_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to dddmr_sys_core__action__PToPMoveBase_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PToPMoveBase_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for PToPMoveBase_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PToPMoveBase_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PToPMoveBase_SendGoal_Response {
  type RmwMsg = super::action::rmw::PToPMoveBase_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to dddmr_sys_core__action__PToPMoveBase_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PToPMoveBase_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for PToPMoveBase_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PToPMoveBase_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PToPMoveBase_GetResult_Request {
  type RmwMsg = super::action::rmw::PToPMoveBase_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to dddmr_sys_core__action__PToPMoveBase_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PToPMoveBase_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::PToPMoveBase_Result,

}



impl Default for PToPMoveBase_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PToPMoveBase_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PToPMoveBase_GetResult_Response {
  type RmwMsg = super::action::rmw::PToPMoveBase_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::PToPMoveBase_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::PToPMoveBase_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::PToPMoveBase_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to dddmr_sys_core__action__GetPlan_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPlan_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::GetPlan_Goal,

}



impl Default for GetPlan_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GetPlan_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetPlan_SendGoal_Request {
  type RmwMsg = super::action::rmw::GetPlan_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::GetPlan_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::GetPlan_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::GetPlan_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to dddmr_sys_core__action__GetPlan_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPlan_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for GetPlan_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GetPlan_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetPlan_SendGoal_Response {
  type RmwMsg = super::action::rmw::GetPlan_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to dddmr_sys_core__action__GetPlan_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPlan_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for GetPlan_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GetPlan_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetPlan_GetResult_Request {
  type RmwMsg = super::action::rmw::GetPlan_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to dddmr_sys_core__action__GetPlan_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPlan_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::GetPlan_Result,

}



impl Default for GetPlan_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GetPlan_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetPlan_GetResult_Response {
  type RmwMsg = super::action::rmw::GetPlan_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::GetPlan_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::GetPlan_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::GetPlan_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecoveryBehaviors_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::RecoveryBehaviors_Goal,

}



impl Default for RecoveryBehaviors_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RecoveryBehaviors_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RecoveryBehaviors_SendGoal_Request {
  type RmwMsg = super::action::rmw::RecoveryBehaviors_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::RecoveryBehaviors_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::RecoveryBehaviors_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::RecoveryBehaviors_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecoveryBehaviors_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for RecoveryBehaviors_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RecoveryBehaviors_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RecoveryBehaviors_SendGoal_Response {
  type RmwMsg = super::action::rmw::RecoveryBehaviors_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to dddmr_sys_core__action__RecoveryBehaviors_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecoveryBehaviors_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for RecoveryBehaviors_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RecoveryBehaviors_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RecoveryBehaviors_GetResult_Request {
  type RmwMsg = super::action::rmw::RecoveryBehaviors_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to dddmr_sys_core__action__RecoveryBehaviors_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecoveryBehaviors_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::RecoveryBehaviors_Result,

}



impl Default for RecoveryBehaviors_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RecoveryBehaviors_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RecoveryBehaviors_GetResult_Response {
  type RmwMsg = super::action::rmw::RecoveryBehaviors_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::RecoveryBehaviors_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::RecoveryBehaviors_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::RecoveryBehaviors_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to dddmr_sys_core__action__TagDocking_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagDocking_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::TagDocking_Goal,

}



impl Default for TagDocking_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::TagDocking_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for TagDocking_SendGoal_Request {
  type RmwMsg = super::action::rmw::TagDocking_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::TagDocking_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::TagDocking_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::TagDocking_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to dddmr_sys_core__action__TagDocking_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagDocking_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for TagDocking_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::TagDocking_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for TagDocking_SendGoal_Response {
  type RmwMsg = super::action::rmw::TagDocking_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to dddmr_sys_core__action__TagDocking_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagDocking_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for TagDocking_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::TagDocking_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for TagDocking_GetResult_Request {
  type RmwMsg = super::action::rmw::TagDocking_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to dddmr_sys_core__action__TagDocking_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagDocking_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::TagDocking_Result,

}



impl Default for TagDocking_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::TagDocking_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for TagDocking_GetResult_Response {
  type RmwMsg = super::action::rmw::TagDocking_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::TagDocking_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::TagDocking_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::TagDocking_Result::from_rmw_message(msg.result),
    }
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






#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__dddmr_sys_core__action__PToPMoveBase() -> *const std::ffi::c_void;
}

// Corresponds to dddmr_sys_core__action__PToPMoveBase
#[allow(missing_docs, non_camel_case_types)]
pub struct PToPMoveBase;

impl rosidl_runtime_rs::Action for PToPMoveBase {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = PToPMoveBase_Goal;

  /// The result message defined in the action definition.
  type Result = PToPMoveBase_Result;

  /// The feedback message defined in the action definition.
  type Feedback = PToPMoveBase_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::PToPMoveBase_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::PToPMoveBase_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::PToPMoveBase_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__dddmr_sys_core__action__PToPMoveBase() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::PToPMoveBase_Goal,
  ) -> super::action::rmw::PToPMoveBase_SendGoal_Request {
   super::action::rmw::PToPMoveBase_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::PToPMoveBase_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::PToPMoveBase_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::PToPMoveBase_SendGoal_Response {
   super::action::rmw::PToPMoveBase_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::PToPMoveBase_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::PToPMoveBase_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::PToPMoveBase_Feedback,
  ) -> super::action::rmw::PToPMoveBase_FeedbackMessage {
    let mut message = super::action::rmw::PToPMoveBase_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::PToPMoveBase_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::PToPMoveBase_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::PToPMoveBase_GetResult_Request {
   super::action::rmw::PToPMoveBase_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::PToPMoveBase_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::PToPMoveBase_Result,
  ) -> super::action::rmw::PToPMoveBase_GetResult_Response {
   super::action::rmw::PToPMoveBase_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::PToPMoveBase_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::PToPMoveBase_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__dddmr_sys_core__action__GetPlan() -> *const std::ffi::c_void;
}

// Corresponds to dddmr_sys_core__action__GetPlan
#[allow(missing_docs, non_camel_case_types)]
pub struct GetPlan;

impl rosidl_runtime_rs::Action for GetPlan {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = GetPlan_Goal;

  /// The result message defined in the action definition.
  type Result = GetPlan_Result;

  /// The feedback message defined in the action definition.
  type Feedback = GetPlan_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::GetPlan_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::GetPlan_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::GetPlan_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__dddmr_sys_core__action__GetPlan() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::GetPlan_Goal,
  ) -> super::action::rmw::GetPlan_SendGoal_Request {
   super::action::rmw::GetPlan_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::GetPlan_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::GetPlan_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::GetPlan_SendGoal_Response {
   super::action::rmw::GetPlan_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::GetPlan_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::GetPlan_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::GetPlan_Feedback,
  ) -> super::action::rmw::GetPlan_FeedbackMessage {
    let mut message = super::action::rmw::GetPlan_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::GetPlan_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::GetPlan_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::GetPlan_GetResult_Request {
   super::action::rmw::GetPlan_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::GetPlan_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::GetPlan_Result,
  ) -> super::action::rmw::GetPlan_GetResult_Response {
   super::action::rmw::GetPlan_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::GetPlan_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::GetPlan_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors() -> *const std::ffi::c_void;
}

// Corresponds to dddmr_sys_core__action__RecoveryBehaviors
#[allow(missing_docs, non_camel_case_types)]
pub struct RecoveryBehaviors;

impl rosidl_runtime_rs::Action for RecoveryBehaviors {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = RecoveryBehaviors_Goal;

  /// The result message defined in the action definition.
  type Result = RecoveryBehaviors_Result;

  /// The feedback message defined in the action definition.
  type Feedback = RecoveryBehaviors_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::RecoveryBehaviors_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::RecoveryBehaviors_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::RecoveryBehaviors_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__dddmr_sys_core__action__RecoveryBehaviors() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::RecoveryBehaviors_Goal,
  ) -> super::action::rmw::RecoveryBehaviors_SendGoal_Request {
   super::action::rmw::RecoveryBehaviors_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::RecoveryBehaviors_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::RecoveryBehaviors_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::RecoveryBehaviors_SendGoal_Response {
   super::action::rmw::RecoveryBehaviors_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::RecoveryBehaviors_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::RecoveryBehaviors_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::RecoveryBehaviors_Feedback,
  ) -> super::action::rmw::RecoveryBehaviors_FeedbackMessage {
    let mut message = super::action::rmw::RecoveryBehaviors_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::RecoveryBehaviors_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::RecoveryBehaviors_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::RecoveryBehaviors_GetResult_Request {
   super::action::rmw::RecoveryBehaviors_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::RecoveryBehaviors_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::RecoveryBehaviors_Result,
  ) -> super::action::rmw::RecoveryBehaviors_GetResult_Response {
   super::action::rmw::RecoveryBehaviors_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::RecoveryBehaviors_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::RecoveryBehaviors_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "dddmr_sys_core__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__dddmr_sys_core__action__TagDocking() -> *const std::ffi::c_void;
}

// Corresponds to dddmr_sys_core__action__TagDocking
#[allow(missing_docs, non_camel_case_types)]
pub struct TagDocking;

impl rosidl_runtime_rs::Action for TagDocking {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = TagDocking_Goal;

  /// The result message defined in the action definition.
  type Result = TagDocking_Result;

  /// The feedback message defined in the action definition.
  type Feedback = TagDocking_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::TagDocking_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::TagDocking_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::TagDocking_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__dddmr_sys_core__action__TagDocking() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::TagDocking_Goal,
  ) -> super::action::rmw::TagDocking_SendGoal_Request {
   super::action::rmw::TagDocking_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::TagDocking_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::TagDocking_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::TagDocking_SendGoal_Response {
   super::action::rmw::TagDocking_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::TagDocking_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::TagDocking_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::TagDocking_Feedback,
  ) -> super::action::rmw::TagDocking_FeedbackMessage {
    let mut message = super::action::rmw::TagDocking_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::TagDocking_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::TagDocking_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::TagDocking_GetResult_Request {
   super::action::rmw::TagDocking_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::TagDocking_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::TagDocking_Result,
  ) -> super::action::rmw::TagDocking_GetResult_Response {
   super::action::rmw::TagDocking_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::TagDocking_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::TagDocking_Result,
  ) {
    (response.status, response.result)
  }
}


