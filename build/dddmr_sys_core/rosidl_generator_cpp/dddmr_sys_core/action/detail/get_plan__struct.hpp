// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dddmr_sys_core:action/GetPlan.idl
// generated code does not contain a copyright notice

#ifndef DDDMR_SYS_CORE__ACTION__DETAIL__GET_PLAN__STRUCT_HPP_
#define DDDMR_SYS_CORE__ACTION__DETAIL__GET_PLAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'goal'
// Member 'start'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__GetPlan_Goal __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__GetPlan_Goal __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetPlan_Goal_
{
  using Type = GetPlan_Goal_<ContainerAllocator>;

  explicit GetPlan_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal(_init),
    start(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->activate_threading = false;
    }
  }

  explicit GetPlan_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal(_alloc, _init),
    start(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->activate_threading = false;
    }
  }

  // field types and members
  using _goal_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _goal_type goal;
  using _start_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _start_type start;
  using _activate_threading_type =
    bool;
  _activate_threading_type activate_threading;

  // setters for named parameter idiom
  Type & set__goal(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }
  Type & set__start(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__activate_threading(
    const bool & _arg)
  {
    this->activate_threading = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::GetPlan_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::GetPlan_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::GetPlan_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::GetPlan_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::GetPlan_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::GetPlan_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::GetPlan_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::GetPlan_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::GetPlan_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::GetPlan_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__GetPlan_Goal
    std::shared_ptr<dddmr_sys_core::action::GetPlan_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__GetPlan_Goal
    std::shared_ptr<dddmr_sys_core::action::GetPlan_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlan_Goal_ & other) const
  {
    if (this->goal != other.goal) {
      return false;
    }
    if (this->start != other.start) {
      return false;
    }
    if (this->activate_threading != other.activate_threading) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlan_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlan_Goal_

// alias to use template instance with default allocator
using GetPlan_Goal =
  dddmr_sys_core::action::GetPlan_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core


// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.hpp"
// Member 'planning_time'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__GetPlan_Result __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__GetPlan_Result __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetPlan_Result_
{
  using Type = GetPlan_Result_<ContainerAllocator>;

  explicit GetPlan_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_init),
    planning_time(_init)
  {
    (void)_init;
  }

  explicit GetPlan_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_alloc, _init),
    planning_time(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _path_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _path_type path;
  using _planning_time_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _planning_time_type planning_time;

  // setters for named parameter idiom
  Type & set__path(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__planning_time(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->planning_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::GetPlan_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::GetPlan_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::GetPlan_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::GetPlan_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::GetPlan_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::GetPlan_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::GetPlan_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::GetPlan_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::GetPlan_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::GetPlan_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__GetPlan_Result
    std::shared_ptr<dddmr_sys_core::action::GetPlan_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__GetPlan_Result
    std::shared_ptr<dddmr_sys_core::action::GetPlan_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlan_Result_ & other) const
  {
    if (this->path != other.path) {
      return false;
    }
    if (this->planning_time != other.planning_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlan_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlan_Result_

// alias to use template instance with default allocator
using GetPlan_Result =
  dddmr_sys_core::action::GetPlan_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core


#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__GetPlan_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__GetPlan_Feedback __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetPlan_Feedback_
{
  using Type = GetPlan_Feedback_<ContainerAllocator>;

  explicit GetPlan_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetPlan_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::GetPlan_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::GetPlan_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::GetPlan_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::GetPlan_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::GetPlan_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::GetPlan_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::GetPlan_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::GetPlan_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::GetPlan_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::GetPlan_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__GetPlan_Feedback
    std::shared_ptr<dddmr_sys_core::action::GetPlan_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__GetPlan_Feedback
    std::shared_ptr<dddmr_sys_core::action::GetPlan_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlan_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlan_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlan_Feedback_

// alias to use template instance with default allocator
using GetPlan_Feedback =
  dddmr_sys_core::action::GetPlan_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "dddmr_sys_core/action/detail/get_plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__GetPlan_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__GetPlan_SendGoal_Request __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetPlan_SendGoal_Request_
{
  using Type = GetPlan_SendGoal_Request_<ContainerAllocator>;

  explicit GetPlan_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GetPlan_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    dddmr_sys_core::action::GetPlan_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const dddmr_sys_core::action::GetPlan_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::GetPlan_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::GetPlan_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::GetPlan_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::GetPlan_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::GetPlan_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::GetPlan_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::GetPlan_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::GetPlan_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::GetPlan_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::GetPlan_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__GetPlan_SendGoal_Request
    std::shared_ptr<dddmr_sys_core::action::GetPlan_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__GetPlan_SendGoal_Request
    std::shared_ptr<dddmr_sys_core::action::GetPlan_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlan_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlan_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlan_SendGoal_Request_

// alias to use template instance with default allocator
using GetPlan_SendGoal_Request =
  dddmr_sys_core::action::GetPlan_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__GetPlan_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__GetPlan_SendGoal_Response __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetPlan_SendGoal_Response_
{
  using Type = GetPlan_SendGoal_Response_<ContainerAllocator>;

  explicit GetPlan_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GetPlan_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::GetPlan_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::GetPlan_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::GetPlan_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::GetPlan_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::GetPlan_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::GetPlan_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::GetPlan_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::GetPlan_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::GetPlan_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::GetPlan_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__GetPlan_SendGoal_Response
    std::shared_ptr<dddmr_sys_core::action::GetPlan_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__GetPlan_SendGoal_Response
    std::shared_ptr<dddmr_sys_core::action::GetPlan_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlan_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlan_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlan_SendGoal_Response_

// alias to use template instance with default allocator
using GetPlan_SendGoal_Response =
  dddmr_sys_core::action::GetPlan_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core

namespace dddmr_sys_core
{

namespace action
{

struct GetPlan_SendGoal
{
  using Request = dddmr_sys_core::action::GetPlan_SendGoal_Request;
  using Response = dddmr_sys_core::action::GetPlan_SendGoal_Response;
};

}  // namespace action

}  // namespace dddmr_sys_core


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__GetPlan_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__GetPlan_GetResult_Request __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetPlan_GetResult_Request_
{
  using Type = GetPlan_GetResult_Request_<ContainerAllocator>;

  explicit GetPlan_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GetPlan_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::GetPlan_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::GetPlan_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::GetPlan_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::GetPlan_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::GetPlan_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::GetPlan_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::GetPlan_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::GetPlan_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::GetPlan_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::GetPlan_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__GetPlan_GetResult_Request
    std::shared_ptr<dddmr_sys_core::action::GetPlan_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__GetPlan_GetResult_Request
    std::shared_ptr<dddmr_sys_core::action::GetPlan_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlan_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlan_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlan_GetResult_Request_

// alias to use template instance with default allocator
using GetPlan_GetResult_Request =
  dddmr_sys_core::action::GetPlan_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core


// Include directives for member types
// Member 'result'
// already included above
// #include "dddmr_sys_core/action/detail/get_plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__GetPlan_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__GetPlan_GetResult_Response __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetPlan_GetResult_Response_
{
  using Type = GetPlan_GetResult_Response_<ContainerAllocator>;

  explicit GetPlan_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GetPlan_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    dddmr_sys_core::action::GetPlan_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const dddmr_sys_core::action::GetPlan_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::GetPlan_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::GetPlan_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::GetPlan_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::GetPlan_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::GetPlan_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::GetPlan_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::GetPlan_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::GetPlan_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::GetPlan_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::GetPlan_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__GetPlan_GetResult_Response
    std::shared_ptr<dddmr_sys_core::action::GetPlan_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__GetPlan_GetResult_Response
    std::shared_ptr<dddmr_sys_core::action::GetPlan_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlan_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlan_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlan_GetResult_Response_

// alias to use template instance with default allocator
using GetPlan_GetResult_Response =
  dddmr_sys_core::action::GetPlan_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core

namespace dddmr_sys_core
{

namespace action
{

struct GetPlan_GetResult
{
  using Request = dddmr_sys_core::action::GetPlan_GetResult_Request;
  using Response = dddmr_sys_core::action::GetPlan_GetResult_Response;
};

}  // namespace action

}  // namespace dddmr_sys_core


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "dddmr_sys_core/action/detail/get_plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__GetPlan_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__GetPlan_FeedbackMessage __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetPlan_FeedbackMessage_
{
  using Type = GetPlan_FeedbackMessage_<ContainerAllocator>;

  explicit GetPlan_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GetPlan_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    dddmr_sys_core::action::GetPlan_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const dddmr_sys_core::action::GetPlan_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::GetPlan_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::GetPlan_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::GetPlan_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::GetPlan_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::GetPlan_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::GetPlan_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::GetPlan_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::GetPlan_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::GetPlan_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::GetPlan_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__GetPlan_FeedbackMessage
    std::shared_ptr<dddmr_sys_core::action::GetPlan_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__GetPlan_FeedbackMessage
    std::shared_ptr<dddmr_sys_core::action::GetPlan_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlan_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlan_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlan_FeedbackMessage_

// alias to use template instance with default allocator
using GetPlan_FeedbackMessage =
  dddmr_sys_core::action::GetPlan_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace dddmr_sys_core
{

namespace action
{

struct GetPlan
{
  /// The goal message defined in the action definition.
  using Goal = dddmr_sys_core::action::GetPlan_Goal;
  /// The result message defined in the action definition.
  using Result = dddmr_sys_core::action::GetPlan_Result;
  /// The feedback message defined in the action definition.
  using Feedback = dddmr_sys_core::action::GetPlan_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = dddmr_sys_core::action::GetPlan_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = dddmr_sys_core::action::GetPlan_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = dddmr_sys_core::action::GetPlan_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GetPlan GetPlan;

}  // namespace action

}  // namespace dddmr_sys_core

#endif  // DDDMR_SYS_CORE__ACTION__DETAIL__GET_PLAN__STRUCT_HPP_
