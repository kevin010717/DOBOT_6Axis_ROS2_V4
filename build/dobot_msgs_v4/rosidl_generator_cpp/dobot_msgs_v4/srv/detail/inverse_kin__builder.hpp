// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_msgs_v4:srv/InverseKin.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS_V4__SRV__DETAIL__INVERSE_KIN__BUILDER_HPP_
#define DOBOT_MSGS_V4__SRV__DETAIL__INVERSE_KIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot_msgs_v4/srv/detail/inverse_kin__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot_msgs_v4
{

namespace srv
{

namespace builder
{

class Init_InverseKin_Request_tool
{
public:
  explicit Init_InverseKin_Request_tool(::dobot_msgs_v4::srv::InverseKin_Request & msg)
  : msg_(msg)
  {}
  ::dobot_msgs_v4::srv::InverseKin_Request tool(::dobot_msgs_v4::srv::InverseKin_Request::_tool_type arg)
  {
    msg_.tool = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs_v4::srv::InverseKin_Request msg_;
};

class Init_InverseKin_Request_user
{
public:
  explicit Init_InverseKin_Request_user(::dobot_msgs_v4::srv::InverseKin_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKin_Request_tool user(::dobot_msgs_v4::srv::InverseKin_Request::_user_type arg)
  {
    msg_.user = std::move(arg);
    return Init_InverseKin_Request_tool(msg_);
  }

private:
  ::dobot_msgs_v4::srv::InverseKin_Request msg_;
};

class Init_InverseKin_Request_joint_near
{
public:
  explicit Init_InverseKin_Request_joint_near(::dobot_msgs_v4::srv::InverseKin_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKin_Request_user joint_near(::dobot_msgs_v4::srv::InverseKin_Request::_joint_near_type arg)
  {
    msg_.joint_near = std::move(arg);
    return Init_InverseKin_Request_user(msg_);
  }

private:
  ::dobot_msgs_v4::srv::InverseKin_Request msg_;
};

class Init_InverseKin_Request_use_joint_near
{
public:
  explicit Init_InverseKin_Request_use_joint_near(::dobot_msgs_v4::srv::InverseKin_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKin_Request_joint_near use_joint_near(::dobot_msgs_v4::srv::InverseKin_Request::_use_joint_near_type arg)
  {
    msg_.use_joint_near = std::move(arg);
    return Init_InverseKin_Request_joint_near(msg_);
  }

private:
  ::dobot_msgs_v4::srv::InverseKin_Request msg_;
};

class Init_InverseKin_Request_rz
{
public:
  explicit Init_InverseKin_Request_rz(::dobot_msgs_v4::srv::InverseKin_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKin_Request_use_joint_near rz(::dobot_msgs_v4::srv::InverseKin_Request::_rz_type arg)
  {
    msg_.rz = std::move(arg);
    return Init_InverseKin_Request_use_joint_near(msg_);
  }

private:
  ::dobot_msgs_v4::srv::InverseKin_Request msg_;
};

class Init_InverseKin_Request_ry
{
public:
  explicit Init_InverseKin_Request_ry(::dobot_msgs_v4::srv::InverseKin_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKin_Request_rz ry(::dobot_msgs_v4::srv::InverseKin_Request::_ry_type arg)
  {
    msg_.ry = std::move(arg);
    return Init_InverseKin_Request_rz(msg_);
  }

private:
  ::dobot_msgs_v4::srv::InverseKin_Request msg_;
};

class Init_InverseKin_Request_rx
{
public:
  explicit Init_InverseKin_Request_rx(::dobot_msgs_v4::srv::InverseKin_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKin_Request_ry rx(::dobot_msgs_v4::srv::InverseKin_Request::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return Init_InverseKin_Request_ry(msg_);
  }

private:
  ::dobot_msgs_v4::srv::InverseKin_Request msg_;
};

class Init_InverseKin_Request_z
{
public:
  explicit Init_InverseKin_Request_z(::dobot_msgs_v4::srv::InverseKin_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKin_Request_rx z(::dobot_msgs_v4::srv::InverseKin_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_InverseKin_Request_rx(msg_);
  }

private:
  ::dobot_msgs_v4::srv::InverseKin_Request msg_;
};

class Init_InverseKin_Request_y
{
public:
  explicit Init_InverseKin_Request_y(::dobot_msgs_v4::srv::InverseKin_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKin_Request_z y(::dobot_msgs_v4::srv::InverseKin_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_InverseKin_Request_z(msg_);
  }

private:
  ::dobot_msgs_v4::srv::InverseKin_Request msg_;
};

class Init_InverseKin_Request_x
{
public:
  Init_InverseKin_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKin_Request_y x(::dobot_msgs_v4::srv::InverseKin_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_InverseKin_Request_y(msg_);
  }

private:
  ::dobot_msgs_v4::srv::InverseKin_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs_v4::srv::InverseKin_Request>()
{
  return dobot_msgs_v4::srv::builder::Init_InverseKin_Request_x();
}

}  // namespace dobot_msgs_v4


namespace dobot_msgs_v4
{

namespace srv
{

namespace builder
{

class Init_InverseKin_Response_res
{
public:
  Init_InverseKin_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_msgs_v4::srv::InverseKin_Response res(::dobot_msgs_v4::srv::InverseKin_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs_v4::srv::InverseKin_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs_v4::srv::InverseKin_Response>()
{
  return dobot_msgs_v4::srv::builder::Init_InverseKin_Response_res();
}

}  // namespace dobot_msgs_v4

#endif  // DOBOT_MSGS_V4__SRV__DETAIL__INVERSE_KIN__BUILDER_HPP_
