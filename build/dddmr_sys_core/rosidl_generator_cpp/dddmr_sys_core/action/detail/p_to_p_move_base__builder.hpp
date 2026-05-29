// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dddmr_sys_core:action/PToPMoveBase.idl
// generated code does not contain a copyright notice

#ifndef DDDMR_SYS_CORE__ACTION__DETAIL__P_TO_P_MOVE_BASE__BUILDER_HPP_
#define DDDMR_SYS_CORE__ACTION__DETAIL__P_TO_P_MOVE_BASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dddmr_sys_core/action/detail/p_to_p_move_base__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_PToPMoveBase_Goal_target_value
{
public:
  explicit Init_PToPMoveBase_Goal_target_value(::dddmr_sys_core::action::PToPMoveBase_Goal & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::action::PToPMoveBase_Goal target_value(::dddmr_sys_core::action::PToPMoveBase_Goal::_target_value_type arg)
  {
    msg_.target_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::PToPMoveBase_Goal msg_;
};

class Init_PToPMoveBase_Goal_target_pose
{
public:
  Init_PToPMoveBase_Goal_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PToPMoveBase_Goal_target_value target_pose(::dddmr_sys_core::action::PToPMoveBase_Goal::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return Init_PToPMoveBase_Goal_target_value(msg_);
  }

private:
  ::dddmr_sys_core::action::PToPMoveBase_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::PToPMoveBase_Goal>()
{
  return dddmr_sys_core::action::builder::Init_PToPMoveBase_Goal_target_pose();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_PToPMoveBase_Result_result
{
public:
  explicit Init_PToPMoveBase_Result_result(::dddmr_sys_core::action::PToPMoveBase_Result & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::action::PToPMoveBase_Result result(::dddmr_sys_core::action::PToPMoveBase_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::PToPMoveBase_Result msg_;
};

class Init_PToPMoveBase_Result_status
{
public:
  Init_PToPMoveBase_Result_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PToPMoveBase_Result_result status(::dddmr_sys_core::action::PToPMoveBase_Result::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PToPMoveBase_Result_result(msg_);
  }

private:
  ::dddmr_sys_core::action::PToPMoveBase_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::PToPMoveBase_Result>()
{
  return dddmr_sys_core::action::builder::Init_PToPMoveBase_Result_status();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_PToPMoveBase_Feedback_current_decision
{
public:
  explicit Init_PToPMoveBase_Feedback_current_decision(::dddmr_sys_core::action::PToPMoveBase_Feedback & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::action::PToPMoveBase_Feedback current_decision(::dddmr_sys_core::action::PToPMoveBase_Feedback::_current_decision_type arg)
  {
    msg_.current_decision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::PToPMoveBase_Feedback msg_;
};

class Init_PToPMoveBase_Feedback_last_decision
{
public:
  explicit Init_PToPMoveBase_Feedback_last_decision(::dddmr_sys_core::action::PToPMoveBase_Feedback & msg)
  : msg_(msg)
  {}
  Init_PToPMoveBase_Feedback_current_decision last_decision(::dddmr_sys_core::action::PToPMoveBase_Feedback::_last_decision_type arg)
  {
    msg_.last_decision = std::move(arg);
    return Init_PToPMoveBase_Feedback_current_decision(msg_);
  }

private:
  ::dddmr_sys_core::action::PToPMoveBase_Feedback msg_;
};

class Init_PToPMoveBase_Feedback_base_position
{
public:
  Init_PToPMoveBase_Feedback_base_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PToPMoveBase_Feedback_last_decision base_position(::dddmr_sys_core::action::PToPMoveBase_Feedback::_base_position_type arg)
  {
    msg_.base_position = std::move(arg);
    return Init_PToPMoveBase_Feedback_last_decision(msg_);
  }

private:
  ::dddmr_sys_core::action::PToPMoveBase_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::PToPMoveBase_Feedback>()
{
  return dddmr_sys_core::action::builder::Init_PToPMoveBase_Feedback_base_position();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_PToPMoveBase_SendGoal_Request_goal
{
public:
  explicit Init_PToPMoveBase_SendGoal_Request_goal(::dddmr_sys_core::action::PToPMoveBase_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::action::PToPMoveBase_SendGoal_Request goal(::dddmr_sys_core::action::PToPMoveBase_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::PToPMoveBase_SendGoal_Request msg_;
};

class Init_PToPMoveBase_SendGoal_Request_goal_id
{
public:
  Init_PToPMoveBase_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PToPMoveBase_SendGoal_Request_goal goal_id(::dddmr_sys_core::action::PToPMoveBase_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PToPMoveBase_SendGoal_Request_goal(msg_);
  }

private:
  ::dddmr_sys_core::action::PToPMoveBase_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::PToPMoveBase_SendGoal_Request>()
{
  return dddmr_sys_core::action::builder::Init_PToPMoveBase_SendGoal_Request_goal_id();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_PToPMoveBase_SendGoal_Response_stamp
{
public:
  explicit Init_PToPMoveBase_SendGoal_Response_stamp(::dddmr_sys_core::action::PToPMoveBase_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::action::PToPMoveBase_SendGoal_Response stamp(::dddmr_sys_core::action::PToPMoveBase_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::PToPMoveBase_SendGoal_Response msg_;
};

class Init_PToPMoveBase_SendGoal_Response_accepted
{
public:
  Init_PToPMoveBase_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PToPMoveBase_SendGoal_Response_stamp accepted(::dddmr_sys_core::action::PToPMoveBase_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PToPMoveBase_SendGoal_Response_stamp(msg_);
  }

private:
  ::dddmr_sys_core::action::PToPMoveBase_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::PToPMoveBase_SendGoal_Response>()
{
  return dddmr_sys_core::action::builder::Init_PToPMoveBase_SendGoal_Response_accepted();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_PToPMoveBase_GetResult_Request_goal_id
{
public:
  Init_PToPMoveBase_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dddmr_sys_core::action::PToPMoveBase_GetResult_Request goal_id(::dddmr_sys_core::action::PToPMoveBase_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::PToPMoveBase_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::PToPMoveBase_GetResult_Request>()
{
  return dddmr_sys_core::action::builder::Init_PToPMoveBase_GetResult_Request_goal_id();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_PToPMoveBase_GetResult_Response_result
{
public:
  explicit Init_PToPMoveBase_GetResult_Response_result(::dddmr_sys_core::action::PToPMoveBase_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::action::PToPMoveBase_GetResult_Response result(::dddmr_sys_core::action::PToPMoveBase_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::PToPMoveBase_GetResult_Response msg_;
};

class Init_PToPMoveBase_GetResult_Response_status
{
public:
  Init_PToPMoveBase_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PToPMoveBase_GetResult_Response_result status(::dddmr_sys_core::action::PToPMoveBase_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PToPMoveBase_GetResult_Response_result(msg_);
  }

private:
  ::dddmr_sys_core::action::PToPMoveBase_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::PToPMoveBase_GetResult_Response>()
{
  return dddmr_sys_core::action::builder::Init_PToPMoveBase_GetResult_Response_status();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_PToPMoveBase_FeedbackMessage_feedback
{
public:
  explicit Init_PToPMoveBase_FeedbackMessage_feedback(::dddmr_sys_core::action::PToPMoveBase_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::action::PToPMoveBase_FeedbackMessage feedback(::dddmr_sys_core::action::PToPMoveBase_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::PToPMoveBase_FeedbackMessage msg_;
};

class Init_PToPMoveBase_FeedbackMessage_goal_id
{
public:
  Init_PToPMoveBase_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PToPMoveBase_FeedbackMessage_feedback goal_id(::dddmr_sys_core::action::PToPMoveBase_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PToPMoveBase_FeedbackMessage_feedback(msg_);
  }

private:
  ::dddmr_sys_core::action::PToPMoveBase_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::PToPMoveBase_FeedbackMessage>()
{
  return dddmr_sys_core::action::builder::Init_PToPMoveBase_FeedbackMessage_goal_id();
}

}  // namespace dddmr_sys_core

#endif  // DDDMR_SYS_CORE__ACTION__DETAIL__P_TO_P_MOVE_BASE__BUILDER_HPP_
