// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dddmr_sys_core:action/PToPMoveBase.idl
// generated code does not contain a copyright notice

#ifndef DDDMR_SYS_CORE__ACTION__DETAIL__P_TO_P_MOVE_BASE__STRUCT_HPP_
#define DDDMR_SYS_CORE__ACTION__DETAIL__P_TO_P_MOVE_BASE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__PToPMoveBase_Goal __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__PToPMoveBase_Goal __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PToPMoveBase_Goal_
{
  using Type = PToPMoveBase_Goal_<ContainerAllocator>;

  explicit PToPMoveBase_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_value = 0.0f;
    }
  }

  explicit PToPMoveBase_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_value = 0.0f;
    }
  }

  // field types and members
  using _target_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _target_pose_type target_pose;
  using _target_value_type =
    float;
  _target_value_type target_value;

  // setters for named parameter idiom
  Type & set__target_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->target_pose = _arg;
    return *this;
  }
  Type & set__target_value(
    const float & _arg)
  {
    this->target_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::PToPMoveBase_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::PToPMoveBase_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::PToPMoveBase_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::PToPMoveBase_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::PToPMoveBase_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::PToPMoveBase_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::PToPMoveBase_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::PToPMoveBase_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__PToPMoveBase_Goal
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__PToPMoveBase_Goal
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PToPMoveBase_Goal_ & other) const
  {
    if (this->target_pose != other.target_pose) {
      return false;
    }
    if (this->target_value != other.target_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const PToPMoveBase_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PToPMoveBase_Goal_

// alias to use template instance with default allocator
using PToPMoveBase_Goal =
  dddmr_sys_core::action::PToPMoveBase_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core


#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__PToPMoveBase_Result __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__PToPMoveBase_Result __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PToPMoveBase_Result_
{
  using Type = PToPMoveBase_Result_<ContainerAllocator>;

  explicit PToPMoveBase_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0l;
      this->result = "";
    }
  }

  explicit PToPMoveBase_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0l;
      this->result = "";
    }
  }

  // field types and members
  using _status_type =
    int32_t;
  _status_type status;
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::PToPMoveBase_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::PToPMoveBase_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::PToPMoveBase_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::PToPMoveBase_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::PToPMoveBase_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::PToPMoveBase_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::PToPMoveBase_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::PToPMoveBase_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__PToPMoveBase_Result
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__PToPMoveBase_Result
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PToPMoveBase_Result_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PToPMoveBase_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PToPMoveBase_Result_

// alias to use template instance with default allocator
using PToPMoveBase_Result =
  dddmr_sys_core::action::PToPMoveBase_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core


// Include directives for member types
// Member 'base_position'
#include "geometry_msgs/msg/detail/transform_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__PToPMoveBase_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__PToPMoveBase_Feedback __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PToPMoveBase_Feedback_
{
  using Type = PToPMoveBase_Feedback_<ContainerAllocator>;

  explicit PToPMoveBase_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->last_decision = "";
      this->current_decision = "";
    }
  }

  explicit PToPMoveBase_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_position(_alloc, _init),
    last_decision(_alloc),
    current_decision(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->last_decision = "";
      this->current_decision = "";
    }
  }

  // field types and members
  using _base_position_type =
    geometry_msgs::msg::TransformStamped_<ContainerAllocator>;
  _base_position_type base_position;
  using _last_decision_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _last_decision_type last_decision;
  using _current_decision_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_decision_type current_decision;

  // setters for named parameter idiom
  Type & set__base_position(
    const geometry_msgs::msg::TransformStamped_<ContainerAllocator> & _arg)
  {
    this->base_position = _arg;
    return *this;
  }
  Type & set__last_decision(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->last_decision = _arg;
    return *this;
  }
  Type & set__current_decision(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_decision = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::PToPMoveBase_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::PToPMoveBase_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::PToPMoveBase_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::PToPMoveBase_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::PToPMoveBase_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::PToPMoveBase_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::PToPMoveBase_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::PToPMoveBase_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__PToPMoveBase_Feedback
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__PToPMoveBase_Feedback
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PToPMoveBase_Feedback_ & other) const
  {
    if (this->base_position != other.base_position) {
      return false;
    }
    if (this->last_decision != other.last_decision) {
      return false;
    }
    if (this->current_decision != other.current_decision) {
      return false;
    }
    return true;
  }
  bool operator!=(const PToPMoveBase_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PToPMoveBase_Feedback_

// alias to use template instance with default allocator
using PToPMoveBase_Feedback =
  dddmr_sys_core::action::PToPMoveBase_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "dddmr_sys_core/action/detail/p_to_p_move_base__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__PToPMoveBase_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__PToPMoveBase_SendGoal_Request __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PToPMoveBase_SendGoal_Request_
{
  using Type = PToPMoveBase_SendGoal_Request_<ContainerAllocator>;

  explicit PToPMoveBase_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit PToPMoveBase_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    dddmr_sys_core::action::PToPMoveBase_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const dddmr_sys_core::action::PToPMoveBase_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::PToPMoveBase_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::PToPMoveBase_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::PToPMoveBase_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::PToPMoveBase_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::PToPMoveBase_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::PToPMoveBase_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::PToPMoveBase_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::PToPMoveBase_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__PToPMoveBase_SendGoal_Request
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__PToPMoveBase_SendGoal_Request
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PToPMoveBase_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const PToPMoveBase_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PToPMoveBase_SendGoal_Request_

// alias to use template instance with default allocator
using PToPMoveBase_SendGoal_Request =
  dddmr_sys_core::action::PToPMoveBase_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__PToPMoveBase_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__PToPMoveBase_SendGoal_Response __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PToPMoveBase_SendGoal_Response_
{
  using Type = PToPMoveBase_SendGoal_Response_<ContainerAllocator>;

  explicit PToPMoveBase_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit PToPMoveBase_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    dddmr_sys_core::action::PToPMoveBase_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::PToPMoveBase_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::PToPMoveBase_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::PToPMoveBase_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::PToPMoveBase_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::PToPMoveBase_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::PToPMoveBase_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::PToPMoveBase_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__PToPMoveBase_SendGoal_Response
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__PToPMoveBase_SendGoal_Response
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PToPMoveBase_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const PToPMoveBase_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PToPMoveBase_SendGoal_Response_

// alias to use template instance with default allocator
using PToPMoveBase_SendGoal_Response =
  dddmr_sys_core::action::PToPMoveBase_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core

namespace dddmr_sys_core
{

namespace action
{

struct PToPMoveBase_SendGoal
{
  using Request = dddmr_sys_core::action::PToPMoveBase_SendGoal_Request;
  using Response = dddmr_sys_core::action::PToPMoveBase_SendGoal_Response;
};

}  // namespace action

}  // namespace dddmr_sys_core


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__PToPMoveBase_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__PToPMoveBase_GetResult_Request __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PToPMoveBase_GetResult_Request_
{
  using Type = PToPMoveBase_GetResult_Request_<ContainerAllocator>;

  explicit PToPMoveBase_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit PToPMoveBase_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    dddmr_sys_core::action::PToPMoveBase_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::PToPMoveBase_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::PToPMoveBase_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::PToPMoveBase_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::PToPMoveBase_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::PToPMoveBase_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::PToPMoveBase_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::PToPMoveBase_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__PToPMoveBase_GetResult_Request
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__PToPMoveBase_GetResult_Request
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PToPMoveBase_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PToPMoveBase_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PToPMoveBase_GetResult_Request_

// alias to use template instance with default allocator
using PToPMoveBase_GetResult_Request =
  dddmr_sys_core::action::PToPMoveBase_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core


// Include directives for member types
// Member 'result'
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__PToPMoveBase_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__PToPMoveBase_GetResult_Response __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PToPMoveBase_GetResult_Response_
{
  using Type = PToPMoveBase_GetResult_Response_<ContainerAllocator>;

  explicit PToPMoveBase_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit PToPMoveBase_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    dddmr_sys_core::action::PToPMoveBase_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const dddmr_sys_core::action::PToPMoveBase_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::PToPMoveBase_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::PToPMoveBase_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::PToPMoveBase_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::PToPMoveBase_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::PToPMoveBase_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::PToPMoveBase_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::PToPMoveBase_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::PToPMoveBase_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__PToPMoveBase_GetResult_Response
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__PToPMoveBase_GetResult_Response
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PToPMoveBase_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PToPMoveBase_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PToPMoveBase_GetResult_Response_

// alias to use template instance with default allocator
using PToPMoveBase_GetResult_Response =
  dddmr_sys_core::action::PToPMoveBase_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core

namespace dddmr_sys_core
{

namespace action
{

struct PToPMoveBase_GetResult
{
  using Request = dddmr_sys_core::action::PToPMoveBase_GetResult_Request;
  using Response = dddmr_sys_core::action::PToPMoveBase_GetResult_Response;
};

}  // namespace action

}  // namespace dddmr_sys_core


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "dddmr_sys_core/action/detail/p_to_p_move_base__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__PToPMoveBase_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__PToPMoveBase_FeedbackMessage __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PToPMoveBase_FeedbackMessage_
{
  using Type = PToPMoveBase_FeedbackMessage_<ContainerAllocator>;

  explicit PToPMoveBase_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit PToPMoveBase_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    dddmr_sys_core::action::PToPMoveBase_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const dddmr_sys_core::action::PToPMoveBase_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::PToPMoveBase_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::PToPMoveBase_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::PToPMoveBase_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::PToPMoveBase_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::PToPMoveBase_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::PToPMoveBase_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::PToPMoveBase_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::PToPMoveBase_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__PToPMoveBase_FeedbackMessage
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__PToPMoveBase_FeedbackMessage
    std::shared_ptr<dddmr_sys_core::action::PToPMoveBase_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PToPMoveBase_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const PToPMoveBase_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PToPMoveBase_FeedbackMessage_

// alias to use template instance with default allocator
using PToPMoveBase_FeedbackMessage =
  dddmr_sys_core::action::PToPMoveBase_FeedbackMessage_<std::allocator<void>>;

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

struct PToPMoveBase
{
  /// The goal message defined in the action definition.
  using Goal = dddmr_sys_core::action::PToPMoveBase_Goal;
  /// The result message defined in the action definition.
  using Result = dddmr_sys_core::action::PToPMoveBase_Result;
  /// The feedback message defined in the action definition.
  using Feedback = dddmr_sys_core::action::PToPMoveBase_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = dddmr_sys_core::action::PToPMoveBase_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = dddmr_sys_core::action::PToPMoveBase_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = dddmr_sys_core::action::PToPMoveBase_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct PToPMoveBase PToPMoveBase;

}  // namespace action

}  // namespace dddmr_sys_core

#endif  // DDDMR_SYS_CORE__ACTION__DETAIL__P_TO_P_MOVE_BASE__STRUCT_HPP_
