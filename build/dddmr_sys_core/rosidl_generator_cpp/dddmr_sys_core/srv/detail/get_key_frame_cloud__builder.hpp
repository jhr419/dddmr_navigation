// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dddmr_sys_core:srv/GetKeyFrameCloud.idl
// generated code does not contain a copyright notice

#ifndef DDDMR_SYS_CORE__SRV__DETAIL__GET_KEY_FRAME_CLOUD__BUILDER_HPP_
#define DDDMR_SYS_CORE__SRV__DETAIL__GET_KEY_FRAME_CLOUD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dddmr_sys_core/srv/detail/get_key_frame_cloud__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dddmr_sys_core
{

namespace srv
{

namespace builder
{

class Init_GetKeyFrameCloud_Request_key_frame_number
{
public:
  Init_GetKeyFrameCloud_Request_key_frame_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dddmr_sys_core::srv::GetKeyFrameCloud_Request key_frame_number(::dddmr_sys_core::srv::GetKeyFrameCloud_Request::_key_frame_number_type arg)
  {
    msg_.key_frame_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::srv::GetKeyFrameCloud_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::srv::GetKeyFrameCloud_Request>()
{
  return dddmr_sys_core::srv::builder::Init_GetKeyFrameCloud_Request_key_frame_number();
}

}  // namespace dddmr_sys_core


namespace dddmr_sys_core
{

namespace srv
{

namespace builder
{

class Init_GetKeyFrameCloud_Response_key_frame_ground_edge
{
public:
  explicit Init_GetKeyFrameCloud_Response_key_frame_ground_edge(::dddmr_sys_core::srv::GetKeyFrameCloud_Response & msg)
  : msg_(msg)
  {}
  ::dddmr_sys_core::srv::GetKeyFrameCloud_Response key_frame_ground_edge(::dddmr_sys_core::srv::GetKeyFrameCloud_Response::_key_frame_ground_edge_type arg)
  {
    msg_.key_frame_ground_edge = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dddmr_sys_core::srv::GetKeyFrameCloud_Response msg_;
};

class Init_GetKeyFrameCloud_Response_key_frame_ground
{
public:
  explicit Init_GetKeyFrameCloud_Response_key_frame_ground(::dddmr_sys_core::srv::GetKeyFrameCloud_Response & msg)
  : msg_(msg)
  {}
  Init_GetKeyFrameCloud_Response_key_frame_ground_edge key_frame_ground(::dddmr_sys_core::srv::GetKeyFrameCloud_Response::_key_frame_ground_type arg)
  {
    msg_.key_frame_ground = std::move(arg);
    return Init_GetKeyFrameCloud_Response_key_frame_ground_edge(msg_);
  }

private:
  ::dddmr_sys_core::srv::GetKeyFrameCloud_Response msg_;
};

class Init_GetKeyFrameCloud_Response_key_frame_cloud
{
public:
  Init_GetKeyFrameCloud_Response_key_frame_cloud()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetKeyFrameCloud_Response_key_frame_ground key_frame_cloud(::dddmr_sys_core::srv::GetKeyFrameCloud_Response::_key_frame_cloud_type arg)
  {
    msg_.key_frame_cloud = std::move(arg);
    return Init_GetKeyFrameCloud_Response_key_frame_ground(msg_);
  }

private:
  ::dddmr_sys_core::srv::GetKeyFrameCloud_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dddmr_sys_core::srv::GetKeyFrameCloud_Response>()
{
  return dddmr_sys_core::srv::builder::Init_GetKeyFrameCloud_Response_key_frame_cloud();
}

}  // namespace dddmr_sys_core

#endif  // DDDMR_SYS_CORE__SRV__DETAIL__GET_KEY_FRAME_CLOUD__BUILDER_HPP_
