// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dddmr_sys_core:action/RecoveryBehaviors.idl
// generated code does not contain a copyright notice

#ifndef DDDMR_SYS_CORE__ACTION__DETAIL__RECOVERY_BEHAVIORS__STRUCT_HPP_
#define DDDMR_SYS_CORE__ACTION__DETAIL__RECOVERY_BEHAVIORS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_Goal __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_Goal __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RecoveryBehaviors_Goal_
{
  using Type = RecoveryBehaviors_Goal_<ContainerAllocator>;

  explicit RecoveryBehaviors_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_name = "";
    }
  }

  explicit RecoveryBehaviors_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : behavior_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_name = "";
    }
  }

  // field types and members
  using _behavior_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _behavior_name_type behavior_name;

  // setters for named parameter idiom
  Type & set__behavior_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->behavior_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::RecoveryBehaviors_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::RecoveryBehaviors_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::RecoveryBehaviors_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::RecoveryBehaviors_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::RecoveryBehaviors_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::RecoveryBehaviors_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::RecoveryBehaviors_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::RecoveryBehaviors_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_Goal
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_Goal
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecoveryBehaviors_Goal_ & other) const
  {
    if (this->behavior_name != other.behavior_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecoveryBehaviors_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecoveryBehaviors_Goal_

// alias to use template instance with default allocator
using RecoveryBehaviors_Goal =
  dddmr_sys_core::action::RecoveryBehaviors_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core


#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_Result __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_Result __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RecoveryBehaviors_Result_
{
  using Type = RecoveryBehaviors_Result_<ContainerAllocator>;

  explicit RecoveryBehaviors_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->succeed = false;
      this->info = "";
    }
  }

  explicit RecoveryBehaviors_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->succeed = false;
      this->info = "";
    }
  }

  // field types and members
  using _succeed_type =
    bool;
  _succeed_type succeed;
  using _info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _info_type info;

  // setters for named parameter idiom
  Type & set__succeed(
    const bool & _arg)
  {
    this->succeed = _arg;
    return *this;
  }
  Type & set__info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::RecoveryBehaviors_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::RecoveryBehaviors_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::RecoveryBehaviors_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::RecoveryBehaviors_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::RecoveryBehaviors_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::RecoveryBehaviors_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::RecoveryBehaviors_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::RecoveryBehaviors_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_Result
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_Result
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecoveryBehaviors_Result_ & other) const
  {
    if (this->succeed != other.succeed) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecoveryBehaviors_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecoveryBehaviors_Result_

// alias to use template instance with default allocator
using RecoveryBehaviors_Result =
  dddmr_sys_core::action::RecoveryBehaviors_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core


#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_Feedback __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RecoveryBehaviors_Feedback_
{
  using Type = RecoveryBehaviors_Feedback_<ContainerAllocator>;

  explicit RecoveryBehaviors_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->undergoing = false;
    }
  }

  explicit RecoveryBehaviors_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->undergoing = false;
    }
  }

  // field types and members
  using _undergoing_type =
    bool;
  _undergoing_type undergoing;

  // setters for named parameter idiom
  Type & set__undergoing(
    const bool & _arg)
  {
    this->undergoing = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::RecoveryBehaviors_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::RecoveryBehaviors_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::RecoveryBehaviors_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::RecoveryBehaviors_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::RecoveryBehaviors_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::RecoveryBehaviors_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::RecoveryBehaviors_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::RecoveryBehaviors_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_Feedback
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_Feedback
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecoveryBehaviors_Feedback_ & other) const
  {
    if (this->undergoing != other.undergoing) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecoveryBehaviors_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecoveryBehaviors_Feedback_

// alias to use template instance with default allocator
using RecoveryBehaviors_Feedback =
  dddmr_sys_core::action::RecoveryBehaviors_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "dddmr_sys_core/action/detail/recovery_behaviors__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Request __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RecoveryBehaviors_SendGoal_Request_
{
  using Type = RecoveryBehaviors_SendGoal_Request_<ContainerAllocator>;

  explicit RecoveryBehaviors_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit RecoveryBehaviors_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    dddmr_sys_core::action::RecoveryBehaviors_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const dddmr_sys_core::action::RecoveryBehaviors_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Request
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Request
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecoveryBehaviors_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecoveryBehaviors_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecoveryBehaviors_SendGoal_Request_

// alias to use template instance with default allocator
using RecoveryBehaviors_SendGoal_Request =
  dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Response __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RecoveryBehaviors_SendGoal_Response_
{
  using Type = RecoveryBehaviors_SendGoal_Response_<ContainerAllocator>;

  explicit RecoveryBehaviors_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit RecoveryBehaviors_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Response
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_SendGoal_Response
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecoveryBehaviors_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecoveryBehaviors_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecoveryBehaviors_SendGoal_Response_

// alias to use template instance with default allocator
using RecoveryBehaviors_SendGoal_Response =
  dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core

namespace dddmr_sys_core
{

namespace action
{

struct RecoveryBehaviors_SendGoal
{
  using Request = dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Request;
  using Response = dddmr_sys_core::action::RecoveryBehaviors_SendGoal_Response;
};

}  // namespace action

}  // namespace dddmr_sys_core


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_GetResult_Request __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RecoveryBehaviors_GetResult_Request_
{
  using Type = RecoveryBehaviors_GetResult_Request_<ContainerAllocator>;

  explicit RecoveryBehaviors_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit RecoveryBehaviors_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_GetResult_Request
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_GetResult_Request
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecoveryBehaviors_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecoveryBehaviors_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecoveryBehaviors_GetResult_Request_

// alias to use template instance with default allocator
using RecoveryBehaviors_GetResult_Request =
  dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core


// Include directives for member types
// Member 'result'
// already included above
// #include "dddmr_sys_core/action/detail/recovery_behaviors__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_GetResult_Response __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RecoveryBehaviors_GetResult_Response_
{
  using Type = RecoveryBehaviors_GetResult_Response_<ContainerAllocator>;

  explicit RecoveryBehaviors_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit RecoveryBehaviors_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    dddmr_sys_core::action::RecoveryBehaviors_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const dddmr_sys_core::action::RecoveryBehaviors_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_GetResult_Response
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_GetResult_Response
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecoveryBehaviors_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecoveryBehaviors_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecoveryBehaviors_GetResult_Response_

// alias to use template instance with default allocator
using RecoveryBehaviors_GetResult_Response =
  dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dddmr_sys_core

namespace dddmr_sys_core
{

namespace action
{

struct RecoveryBehaviors_GetResult
{
  using Request = dddmr_sys_core::action::RecoveryBehaviors_GetResult_Request;
  using Response = dddmr_sys_core::action::RecoveryBehaviors_GetResult_Response;
};

}  // namespace action

}  // namespace dddmr_sys_core


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "dddmr_sys_core/action/detail/recovery_behaviors__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_FeedbackMessage __declspec(deprecated)
#endif

namespace dddmr_sys_core
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RecoveryBehaviors_FeedbackMessage_
{
  using Type = RecoveryBehaviors_FeedbackMessage_<ContainerAllocator>;

  explicit RecoveryBehaviors_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit RecoveryBehaviors_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    dddmr_sys_core::action::RecoveryBehaviors_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const dddmr_sys_core::action::RecoveryBehaviors_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_FeedbackMessage
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dddmr_sys_core__action__RecoveryBehaviors_FeedbackMessage
    std::shared_ptr<dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecoveryBehaviors_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecoveryBehaviors_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecoveryBehaviors_FeedbackMessage_

// alias to use template instance with default allocator
using RecoveryBehaviors_FeedbackMessage =
  dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage_<std::allocator<void>>;

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

struct RecoveryBehaviors
{
  /// The goal message defined in the action definition.
  using Goal = dddmr_sys_core::action::RecoveryBehaviors_Goal;
  /// The result message defined in the action definition.
  using Result = dddmr_sys_core::action::RecoveryBehaviors_Result;
  /// The feedback message defined in the action definition.
  using Feedback = dddmr_sys_core::action::RecoveryBehaviors_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = dddmr_sys_core::action::RecoveryBehaviors_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = dddmr_sys_core::action::RecoveryBehaviors_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = dddmr_sys_core::action::RecoveryBehaviors_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct RecoveryBehaviors RecoveryBehaviors;

}  // namespace action

}  // namespace dddmr_sys_core

#endif  // DDDMR_SYS_CORE__ACTION__DETAIL__RECOVERY_BEHAVIORS__STRUCT_HPP_
