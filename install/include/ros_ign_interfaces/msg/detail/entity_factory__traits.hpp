// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_ign_interfaces:msg/EntityFactory.idl
// generated code does not contain a copyright notice

#ifndef ROS_IGN_INTERFACES__MSG__DETAIL__ENTITY_FACTORY__TRAITS_HPP_
#define ROS_IGN_INTERFACES__MSG__DETAIL__ENTITY_FACTORY__TRAITS_HPP_

#include "ros_ign_interfaces/msg/detail/entity_factory__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ros_ign_interfaces::msg::EntityFactory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: allow_renaming
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allow_renaming: ";
    value_to_yaml(msg.allow_renaming, out);
    out << "\n";
  }

  // member: sdf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sdf: ";
    value_to_yaml(msg.sdf, out);
    out << "\n";
  }

  // member: sdf_filename
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sdf_filename: ";
    value_to_yaml(msg.sdf_filename, out);
    out << "\n";
  }

  // member: clone_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clone_name: ";
    value_to_yaml(msg.clone_name, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_yaml(msg.pose, out, indentation + 2);
  }

  // member: relative_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_to: ";
    value_to_yaml(msg.relative_to, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ros_ign_interfaces::msg::EntityFactory & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ros_ign_interfaces::msg::EntityFactory>()
{
  return "ros_ign_interfaces::msg::EntityFactory";
}

template<>
inline const char * name<ros_ign_interfaces::msg::EntityFactory>()
{
  return "ros_ign_interfaces/msg/EntityFactory";
}

template<>
struct has_fixed_size<ros_ign_interfaces::msg::EntityFactory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ign_interfaces::msg::EntityFactory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ign_interfaces::msg::EntityFactory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_IGN_INTERFACES__MSG__DETAIL__ENTITY_FACTORY__TRAITS_HPP_
