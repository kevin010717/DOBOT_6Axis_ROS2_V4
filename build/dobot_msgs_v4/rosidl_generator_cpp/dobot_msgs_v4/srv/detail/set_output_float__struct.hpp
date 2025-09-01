// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot_msgs_v4:srv/SetOutputFloat.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS_V4__SRV__DETAIL__SET_OUTPUT_FLOAT__STRUCT_HPP_
#define DOBOT_MSGS_V4__SRV__DETAIL__SET_OUTPUT_FLOAT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dobot_msgs_v4__srv__SetOutputFloat_Request __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs_v4__srv__SetOutputFloat_Request __declspec(deprecated)
#endif

namespace dobot_msgs_v4
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetOutputFloat_Request_
{
  using Type = SetOutputFloat_Request_<ContainerAllocator>;

  explicit SetOutputFloat_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->address = 0l;
      this->value = 0.0;
    }
  }

  explicit SetOutputFloat_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->address = 0l;
      this->value = 0.0;
    }
  }

  // field types and members
  using _address_type =
    int32_t;
  _address_type address;
  using _value_type =
    double;
  _value_type value;

  // setters for named parameter idiom
  Type & set__address(
    const int32_t & _arg)
  {
    this->address = _arg;
    return *this;
  }
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs_v4::srv::SetOutputFloat_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs_v4::srv::SetOutputFloat_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs_v4::srv::SetOutputFloat_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs_v4::srv::SetOutputFloat_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs_v4::srv::SetOutputFloat_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs_v4::srv::SetOutputFloat_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs_v4::srv::SetOutputFloat_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs_v4::srv::SetOutputFloat_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs_v4::srv::SetOutputFloat_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs_v4::srv::SetOutputFloat_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs_v4__srv__SetOutputFloat_Request
    std::shared_ptr<dobot_msgs_v4::srv::SetOutputFloat_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs_v4__srv__SetOutputFloat_Request
    std::shared_ptr<dobot_msgs_v4::srv::SetOutputFloat_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetOutputFloat_Request_ & other) const
  {
    if (this->address != other.address) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetOutputFloat_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetOutputFloat_Request_

// alias to use template instance with default allocator
using SetOutputFloat_Request =
  dobot_msgs_v4::srv::SetOutputFloat_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_msgs_v4


#ifndef _WIN32
# define DEPRECATED__dobot_msgs_v4__srv__SetOutputFloat_Response __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs_v4__srv__SetOutputFloat_Response __declspec(deprecated)
#endif

namespace dobot_msgs_v4
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetOutputFloat_Response_
{
  using Type = SetOutputFloat_Response_<ContainerAllocator>;

  explicit SetOutputFloat_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = 0l;
    }
  }

  explicit SetOutputFloat_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = 0l;
    }
  }

  // field types and members
  using _res_type =
    int32_t;
  _res_type res;

  // setters for named parameter idiom
  Type & set__res(
    const int32_t & _arg)
  {
    this->res = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs_v4::srv::SetOutputFloat_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs_v4::srv::SetOutputFloat_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs_v4::srv::SetOutputFloat_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs_v4::srv::SetOutputFloat_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs_v4::srv::SetOutputFloat_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs_v4::srv::SetOutputFloat_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs_v4::srv::SetOutputFloat_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs_v4::srv::SetOutputFloat_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs_v4::srv::SetOutputFloat_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs_v4::srv::SetOutputFloat_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs_v4__srv__SetOutputFloat_Response
    std::shared_ptr<dobot_msgs_v4::srv::SetOutputFloat_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs_v4__srv__SetOutputFloat_Response
    std::shared_ptr<dobot_msgs_v4::srv::SetOutputFloat_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetOutputFloat_Response_ & other) const
  {
    if (this->res != other.res) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetOutputFloat_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetOutputFloat_Response_

// alias to use template instance with default allocator
using SetOutputFloat_Response =
  dobot_msgs_v4::srv::SetOutputFloat_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_msgs_v4

namespace dobot_msgs_v4
{

namespace srv
{

struct SetOutputFloat
{
  using Request = dobot_msgs_v4::srv::SetOutputFloat_Request;
  using Response = dobot_msgs_v4::srv::SetOutputFloat_Response;
};

}  // namespace srv

}  // namespace dobot_msgs_v4

#endif  // DOBOT_MSGS_V4__SRV__DETAIL__SET_OUTPUT_FLOAT__STRUCT_HPP_
