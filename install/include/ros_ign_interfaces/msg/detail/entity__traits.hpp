// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_ign_interfaces:msg/Entity.idl
// generated code does not contain a copyright notice

#ifndef ROS_IGN_INTERFACES__MSG__DETAIL__ENTITY__TRAITS_HPP_
#define ROS_IGN_INTERFACES__MSG__DETAIL__ENTITY__TRAITS_HPP_

#include "ros_ign_interfaces/msg/detail/entity__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ros_ign_interfaces::msg::Entity & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ros_ign_interfaces::msg::Entity & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ros_ign_interfaces::msg::Entity>()
{
  return "ros_ign_interfaces::msg::Entity";
}

template<>
inline const char * name<ros_ign_interfaces::msg::Entity>()
{
  return "ros_ign_interfaces/msg/Entity";
}

template<>
struct has_fixed_size<ros_ign_interfaces::msg::Entity>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ign_interfaces::msg::Entity>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ign_interfaces::msg::Entity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_IGN_INTERFACES__MSG__DETAIL__ENTITY__TRAITS_HPP_
