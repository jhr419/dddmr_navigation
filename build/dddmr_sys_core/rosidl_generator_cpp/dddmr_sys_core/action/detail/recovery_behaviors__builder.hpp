// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dddmr_sys_core:action/RecoveryBehaviors.idl
// generated code does not contain a copyright notice

#ifndef DDDMR_SYS_CORE__ACTION__DETAIL__RECOVERY_BEHAVIORS__BUILDER_HPP_
#define DDDMR_SYS_CORE__ACTION__DETAIL__RECOVERY_BEHAVIORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dddmr_sys_core/action/detail/recovery_behaviors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_RecoveryBehaviors_Goal_behavior_name
{
public:
  Init_RecoveryBehaviors_Goal_behavior_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dddmr_sys_core::action::RecoveryBehaviors_Goal behavior_name(::dddmr_sys_core::action::RecoveryBehaviors_Goal::_behavior_name_type arg)
  {
    msg_.behavior_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::RecoveryBehaviors_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::RecoveryBehaviors_Goal>()
{
  return dddmr_sys_core::action::builder::Init_RecoveryBehaviors_Goal_behavior_name();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_RecoveryBehaviors_Result_info
{
public:
  explicit Init_RecoveryBehaviors_Result_info(::dddmr_sys_core::action::RecoveryBehaviors_Result & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::action::RecoveryBehaviors_Result info(::dddmr_sys_core::action::RecoveryBehaviors_Result::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::RecoveryBehaviors_Result msg_;
};

class Init_RecoveryBehaviors_Result_succeed
{
public:
  Init_RecoveryBehaviors_Result_succeed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecoveryBehaviors_Result_info succeed(::dddmr_sys_core::action::RecoveryBehaviors_Result::_succeed_type arg)
  {
    msg_.succeed = std::move(arg);
    return Init_RecoveryBehaviors_Result_info(msg_);
  }

private:
  ::dddmr_sys_core::action::RecoveryBehaviors_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::RecoveryBehaviors_Result>()
{
  return dddmr_sys_core::action::builder::Init_RecoveryBehaviors_Result_succeed();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_RecoveryBehaviors_Feedback_undergoing
{
public:
  Init_RecoveryBehaviors_Feedback_undergoing()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dddmr_sys_core::action::RecoveryBehaviors_Feedback undergoing(::dddmr_sys_core::action::RecoveryBehaviors_Feedback::_undergoing_type arg)
  {
    msg_.undergoing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::RecoveryBehaviors_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::RecoveryBehaviors_Feedback>()
{
  return dddmr_sys_core::action::builder::Init_RecoveryBehaviors_Feedback_undergoing();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_RecoveryBehaviors_SendGoal_Request_goal
{
public:
  explicit Init_RecoveryBehaviors_SendGoal_Request_goal(::dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request goal(::dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request msg_;
};

class Init_RecoveryBehaviors_SendGoal_Request_goal_id
{
public:
  Init_RecoveryBehaviors_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecoveryBehaviors_SendGoal_Request_goal goal_id(::dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RecoveryBehaviors_SendGoal_Request_goal(msg_);
  }

private:
  ::dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request>()
{
  return dddmr_sys_core::action::builder::Init_RecoveryBehaviors_SendGoal_Request_goal_id();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_RecoveryBehaviors_SendGoal_Response_stamp
{
public:
  explicit Init_RecoveryBehaviors_SendGoal_Response_stamp(::dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response stamp(::dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response msg_;
};

class Init_RecoveryBehaviors_SendGoal_Response_accepted
{
public:
  Init_RecoveryBehaviors_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecoveryBehaviors_SendGoal_Response_stamp accepted(::dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RecoveryBehaviors_SendGoal_Response_stamp(msg_);
  }

private:
  ::dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response>()
{
  return dddmr_sys_core::action::builder::Init_RecoveryBehaviors_SendGoal_Response_accepted();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_RecoveryBehaviors_GetResult_Request_goal_id
{
public:
  Init_RecoveryBehaviors_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request goal_id(::dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request>()
{
  return dddmr_sys_core::action::builder::Init_RecoveryBehaviors_GetResult_Request_goal_id();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_RecoveryBehaviors_GetResult_Response_result
{
public:
  explicit Init_RecoveryBehaviors_GetResult_Response_result(::dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response result(::dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response msg_;
};

class Init_RecoveryBehaviors_GetResult_Response_status
{
public:
  Init_RecoveryBehaviors_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecoveryBehaviors_GetResult_Response_result status(::dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RecoveryBehaviors_GetResult_Response_result(msg_);
  }

private:
  ::dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response>()
{
  return dddmr_sys_core::action::builder::Init_RecoveryBehaviors_GetResult_Response_status();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_RecoveryBehaviors_FeedbackMessage_feedback
{
public:
  explicit Init_RecoveryBehaviors_FeedbackMessage_feedback(::dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage feedback(::dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage msg_;
};

class Init_RecoveryBehaviors_FeedbackMessage_goal_id
{
public:
  Init_RecoveryBehaviors_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecoveryBehaviors_FeedbackMessage_feedback goal_id(::dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RecoveryBehaviors_FeedbackMessage_feedback(msg_);
  }

private:
  ::dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage>()
{
  return dddmr_sys_core::action::builder::Init_RecoveryBehaviors_FeedbackMessage_goal_id();
}

}  // namespace dddmr_sys_core

#endif  // DDDMR_SYS_CORE__ACTION__DETAIL__RECOVERY_BEHAVIORS__BUILDER_HPP_
