// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_ign_interfaces:msg/WorldReset.idl
// generated code does not contain a copyright notice

#ifndef ROS_IGN_INTERFACES__MSG__DETAIL__WORLD_RESET__TRAITS_HPP_
#define ROS_IGN_INTERFACES__MSG__DETAIL__WORLD_RESET__TRAITS_HPP_

#include "ros_ign_interfaces/msg/detail/world_reset__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ros_ign_interfaces::msg::WorldReset & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: all
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all: ";
    value_to_yaml(msg.all, out);
    out << "\n";
  }

  // member: time_only
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_only: ";
    value_to_yaml(msg.time_only, out);
    out << "\n";
  }

  // member: model_only
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_only: ";
    value_to_yaml(msg.model_only, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ros_ign_interfaces::msg::WorldReset & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ros_ign_interfaces::msg::WorldReset>()
{
  return "ros_ign_interfaces::msg::WorldReset";
}

template<>
inline const char * name<ros_ign_interfaces::msg::WorldReset>()
{
  return "ros_ign_interfaces/msg/WorldReset";
}

template<>
struct has_fixed_size<ros_ign_interfaces::msg::WorldReset>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_ign_interfaces::msg::WorldReset>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_ign_interfaces::msg::WorldReset>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_IGN_INTERFACES__MSG__DETAIL__WORLD_RESET__TRAITS_HPP_
