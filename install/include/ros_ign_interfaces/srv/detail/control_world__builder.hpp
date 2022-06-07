// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_ign_interfaces:srv/ControlWorld.idl
// generated code does not contain a copyright notice

#ifndef ROS_IGN_INTERFACES__SRV__DETAIL__CONTROL_WORLD__BUILDER_HPP_
#define ROS_IGN_INTERFACES__SRV__DETAIL__CONTROL_WORLD__BUILDER_HPP_

#include "ros_ign_interfaces/srv/detail/control_world__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros_ign_interfaces
{

namespace srv
{

namespace builder
{

class Init_ControlWorld_Request_world_control
{
public:
  Init_ControlWorld_Request_world_control()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_ign_interfaces::srv::ControlWorld_Request world_control(::ros_ign_interfaces::srv::ControlWorld_Request::_world_control_type arg)
  {
    msg_.world_control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ign_interfaces::srv::ControlWorld_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ign_interfaces::srv::ControlWorld_Request>()
{
  return ros_ign_interfaces::srv::builder::Init_ControlWorld_Request_world_control();
}

}  // namespace ros_ign_interfaces


namespace ros_ign_interfaces
{

namespace srv
{

namespace builder
{

class Init_ControlWorld_Response_success
{
public:
  Init_ControlWorld_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_ign_interfaces::srv::ControlWorld_Response success(::ros_ign_interfaces::srv::ControlWorld_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ign_interfaces::srv::ControlWorld_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ign_interfaces::srv::ControlWorld_Response>()
{
  return ros_ign_interfaces::srv::builder::Init_ControlWorld_Response_success();
}

}  // namespace ros_ign_interfaces

#endif  // ROS_IGN_INTERFACES__SRV__DETAIL__CONTROL_WORLD__BUILDER_HPP_
