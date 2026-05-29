// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dddmr_sys_core:srv/GetKeyFrameCloud.idl
// generated code does not contain a copyright notice

#ifndef DDDMR_SYS_CORE__SRV__DETAIL__GET_KEY_FRAME_CLOUD__STRUCT_HPP_
#define DDDMR_SYS_CORE__SRV__DETAIL__GET_KEY_FRAME_CLOUD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__srv__GetKeyFrameCloud_Request __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__srv__GetKeyFrameCloud_Request __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetKeyFrameCloud_Request_
{
  using Type = GetKeyFrameCloud_Request_<ContainerAllocator>;

  explicit GetKeyFrameCloud_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key_frame_number = 0l;
    }
  }

  explicit GetKeyFrameCloud_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key_frame_number = 0l;
    }
  }

  // field types and members
  using _key_frame_number_type =
    int32_t;
  _key_frame_number_type key_frame_number;

  // setters for named parameter idiom
  Type & set__key_frame_number(
    const int32_t & _arg)
  {
    this->key_frame_number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::srv::GetKeyFrameCloud_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::srv::GetKeyFrameCloud_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::srv::GetKeyFrameCloud_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::srv::GetKeyFrameCloud_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::srv::GetKeyFrameCloud_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::srv::GetKeyFrameCloud_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::srv::GetKeyFrameCloud_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::srv::GetKeyFrameCloud_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::srv::GetKeyFrameCloud_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::srv::GetKeyFrameCloud_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__srv__GetKeyFrameCloud_Request
    std::shared_ptr<dddmr_sys_core::srv::GetKeyFrameCloud_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__srv__GetKeyFrameCloud_Request
    std::shared_ptr<dddmr_sys_core::srv::GetKeyFrameCloud_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetKeyFrameCloud_Request_ & other) const
  {
    if (this->key_frame_number != other.key_frame_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetKeyFrameCloud_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetKeyFrameCloud_Request_

// alias to use template instance with default allocator
using GetKeyFrameCloud_Request =
  dddmr_sys_core::srv::GetKeyFrameCloud_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dddmr_sys_core


// Include directives for member types
// Member 'key_frame_cloud'
// Member 'key_frame_ground'
// Member 'key_frame_ground_edge'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__srv__GetKeyFrameCloud_Response __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__srv__GetKeyFrameCloud_Response __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetKeyFrameCloud_Response_
{
  using Type = GetKeyFrameCloud_Response_<ContainerAllocator>;

  explicit GetKeyFrameCloud_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key_frame_cloud(_init),
    key_frame_ground(_init),
    key_frame_ground_edge(_init)
  {
    (void)_init;
  }

  explicit GetKeyFrameCloud_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key_frame_cloud(_alloc, _init),
    key_frame_ground(_alloc, _init),
    key_frame_ground_edge(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _key_frame_cloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _key_frame_cloud_type key_frame_cloud;
  using _key_frame_ground_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _key_frame_ground_type key_frame_ground;
  using _key_frame_ground_edge_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _key_frame_ground_edge_type key_frame_ground_edge;

  // setters for named parameter idiom
  Type & set__key_frame_cloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->key_frame_cloud = _arg;
    return *this;
  }
  Type & set__key_frame_ground(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->key_frame_ground = _arg;
    return *this;
  }
  Type & set__key_frame_ground_edge(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->key_frame_ground_edge = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::srv::GetKeyFrameCloud_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::srv::GetKeyFrameCloud_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::srv::GetKeyFrameCloud_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::srv::GetKeyFrameCloud_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::srv::GetKeyFrameCloud_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::srv::GetKeyFrameCloud_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::srv::GetKeyFrameCloud_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::srv::GetKeyFrameCloud_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::srv::GetKeyFrameCloud_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::srv::GetKeyFrameCloud_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__srv__GetKeyFrameCloud_Response
    std::shared_ptr<dddmr_sys_core::srv::GetKeyFrameCloud_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__srv__GetKeyFrameCloud_Response
    std::shared_ptr<dddmr_sys_core::srv::GetKeyFrameCloud_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetKeyFrameCloud_Response_ & other) const
  {
    if (this->key_frame_cloud != other.key_frame_cloud) {
      return false;
    }
    if (this->key_frame_ground != other.key_frame_ground) {
      return false;
    }
    if (this->key_frame_ground_edge != other.key_frame_ground_edge) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetKeyFrameCloud_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetKeyFrameCloud_Response_

// alias to use template instance with default allocator
using GetKeyFrameCloud_Response =
  dddmr_sys_core::srv::GetKeyFrameCloud_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dddmr_sys_core

namespace dddmr_sys_core
{

namespace srv
{

struct GetKeyFrameCloud
{
  using Request = dddmr_sys_core::srv::GetKeyFrameCloud_Request;
  using Response = dddmr_sys_core::srv::GetKeyFrameCloud_Response;
};

}  // namespace srv

}  // namespace dddmr_sys_core

#endif  // DDDMR_SYS_CORE__SRV__DETAIL__GET_KEY_FRAME_CLOUD__STRUCT_HPP_
