// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dddmr_sys_core:action/GetPlan.idl
// generated code does not contain a copyright notice

#ifndef DDDMR_SYS_CORE__ACTION__DETAIL__GET_PLAN__BUILDER_HPP_
#define DDDMR_SYS_CORE__ACTION__DETAIL__GET_PLAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dddmr_sys_core/action/detail/get_plan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_GetPlan_Goal_activate_threading
{
public:
  explicit Init_GetPlan_Goal_activate_threading(::dddmr_sys_core::action::GetPlan_Goal & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::action::GetPlan_Goal activate_threading(::dddmr_sys_core::action::GetPlan_Goal::_activate_threading_type arg)
  {
    msg_.activate_threading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::GetPlan_Goal msg_;
};

class Init_GetPlan_Goal_start
{
public:
  explicit Init_GetPlan_Goal_start(::dddmr_sys_core::action::GetPlan_Goal & msg)
  : msg_(msg)
  {}
  Init_GetPlan_Goal_activate_threading start(::dddmr_sys_core::action::GetPlan_Goal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_GetPlan_Goal_activate_threading(msg_);
  }

private:
  ::dddmr_sys_core::action::GetPlan_Goal msg_;
};

class Init_GetPlan_Goal_goal
{
public:
  Init_GetPlan_Goal_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPlan_Goal_start goal(::dddmr_sys_core::action::GetPlan_Goal::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_GetPlan_Goal_start(msg_);
  }

private:
  ::dddmr_sys_core::action::GetPlan_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::GetPlan_Goal>()
{
  return dddmr_sys_core::action::builder::Init_GetPlan_Goal_goal();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_GetPlan_Result_planning_time
{
public:
  explicit Init_GetPlan_Result_planning_time(::dddmr_sys_core::action::GetPlan_Result & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::action::GetPlan_Result planning_time(::dddmr_sys_core::action::GetPlan_Result::_planning_time_type arg)
  {
    msg_.planning_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::GetPlan_Result msg_;
};

class Init_GetPlan_Result_path
{
public:
  Init_GetPlan_Result_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPlan_Result_planning_time path(::dddmr_sys_core::action::GetPlan_Result::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_GetPlan_Result_planning_time(msg_);
  }

private:
  ::dddmr_sys_core::action::GetPlan_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::GetPlan_Result>()
{
  return dddmr_sys_core::action::builder::Init_GetPlan_Result_path();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::GetPlan_Feedback>()
{
  return ::dddmr_sys_core::action::GetPlan_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_GetPlan_SendGoal_Request_goal
{
public:
  explicit Init_GetPlan_SendGoal_Request_goal(::dddmr_sys_core::action::GetPlan_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::action::GetPlan_SendGoal_Request goal(::dddmr_sys_core::action::GetPlan_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::GetPlan_SendGoal_Request msg_;
};

class Init_GetPlan_SendGoal_Request_goal_id
{
public:
  Init_GetPlan_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPlan_SendGoal_Request_goal goal_id(::dddmr_sys_core::action::GetPlan_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GetPlan_SendGoal_Request_goal(msg_);
  }

private:
  ::dddmr_sys_core::action::GetPlan_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::GetPlan_SendGoal_Request>()
{
  return dddmr_sys_core::action::builder::Init_GetPlan_SendGoal_Request_goal_id();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_GetPlan_SendGoal_Response_stamp
{
public:
  explicit Init_GetPlan_SendGoal_Response_stamp(::dddmr_sys_core::action::GetPlan_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::action::GetPlan_SendGoal_Response stamp(::dddmr_sys_core::action::GetPlan_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::GetPlan_SendGoal_Response msg_;
};

class Init_GetPlan_SendGoal_Response_accepted
{
public:
  Init_GetPlan_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPlan_SendGoal_Response_stamp accepted(::dddmr_sys_core::action::GetPlan_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GetPlan_SendGoal_Response_stamp(msg_);
  }

private:
  ::dddmr_sys_core::action::GetPlan_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::GetPlan_SendGoal_Response>()
{
  return dddmr_sys_core::action::builder::Init_GetPlan_SendGoal_Response_accepted();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_GetPlan_GetResult_Request_goal_id
{
public:
  Init_GetPlan_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dddmr_sys_core::action::GetPlan_GetResult_Request goal_id(::dddmr_sys_core::action::GetPlan_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::GetPlan_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::GetPlan_GetResult_Request>()
{
  return dddmr_sys_core::action::builder::Init_GetPlan_GetResult_Request_goal_id();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_GetPlan_GetResult_Response_result
{
public:
  explicit Init_GetPlan_GetResult_Response_result(::dddmr_sys_core::action::GetPlan_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::action::GetPlan_GetResult_Response result(::dddmr_sys_core::action::GetPlan_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::GetPlan_GetResult_Response msg_;
};

class Init_GetPlan_GetResult_Response_status
{
public:
  Init_GetPlan_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPlan_GetResult_Response_result status(::dddmr_sys_core::action::GetPlan_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetPlan_GetResult_Response_result(msg_);
  }

private:
  ::dddmr_sys_core::action::GetPlan_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::GetPlan_GetResult_Response>()
{
  return dddmr_sys_core::action::builder::Init_GetPlan_GetResult_Response_status();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace action
{

namespace builder
{

class Init_GetPlan_FeedbackMessage_feedback
{
public:
  explicit Init_GetPlan_FeedbackMessage_feedback(::dddmr_sys_core::action::GetPlan_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::action::GetPlan_FeedbackMessage feedback(::dddmr_sys_core::action::GetPlan_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::action::GetPlan_FeedbackMessage msg_;
};

class Init_GetPlan_FeedbackMessage_goal_id
{
public:
  Init_GetPlan_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPlan_FeedbackMessage_feedback goal_id(::dddmr_sys_core::action::GetPlan_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GetPlan_FeedbackMessage_feedback(msg_);
  }

private:
  ::dddmr_sys_core::action::GetPlan_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::action::GetPlan_FeedbackMessage>()
{
  return dddmr_sys_core::action::builder::Init_GetPlan_FeedbackMessage_goal_id();
}

}  // namespace dddmr_sys_core

#endif  // DDDMR_SYS_CORE__ACTION__DETAIL__GET_PLAN__BUILDER_HPP_
