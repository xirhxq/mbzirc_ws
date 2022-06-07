// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_ign_interfaces:msg/Contact.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_ign_interfaces/msg/detail/contact__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros_ign_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Contact_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_ign_interfaces::msg::Contact(_init);
}

void Contact_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_ign_interfaces::msg::Contact *>(message_memory);
  typed_message->~Contact();
}

size_t size_function__Contact__positions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Contact__positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void * get_function__Contact__positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void resize_function__Contact__positions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Contact__normals(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Contact__normals(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void * get_function__Contact__normals(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void resize_function__Contact__normals(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Contact__depths(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Contact__depths(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Contact__depths(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__Contact__depths(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Contact__wrenches(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros_ign_interfaces::msg::JointWrench> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Contact__wrenches(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros_ign_interfaces::msg::JointWrench> *>(untyped_member);
  return &member[index];
}

void * get_function__Contact__wrenches(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros_ign_interfaces::msg::JointWrench> *>(untyped_member);
  return &member[index];
}

void resize_function__Contact__wrenches(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros_ign_interfaces::msg::JointWrench> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Contact_message_member_array[6] = {
  {
    "collision1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_ign_interfaces::msg::Entity>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ign_interfaces::msg::Contact, collision1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "collision2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_ign_interfaces::msg::Entity>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ign_interfaces::msg::Contact, collision2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ign_interfaces::msg::Contact, positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__Contact__positions,  // size() function pointer
    get_const_function__Contact__positions,  // get_const(index) function pointer
    get_function__Contact__positions,  // get(index) function pointer
    resize_function__Contact__positions  // resize(index) function pointer
  },
  {
    "normals",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ign_interfaces::msg::Contact, normals),  // bytes offset in struct
    nullptr,  // default value
    size_function__Contact__normals,  // size() function pointer
    get_const_function__Contact__normals,  // get_const(index) function pointer
    get_function__Contact__normals,  // get(index) function pointer
    resize_function__Contact__normals  // resize(index) function pointer
  },
  {
    "depths",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ign_interfaces::msg::Contact, depths),  // bytes offset in struct
    nullptr,  // default value
    size_function__Contact__depths,  // size() function pointer
    get_const_function__Contact__depths,  // get_const(index) function pointer
    get_function__Contact__depths,  // get(index) function pointer
    resize_function__Contact__depths  // resize(index) function pointer
  },
  {
    "wrenches",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_ign_interfaces::msg::JointWrench>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ign_interfaces::msg::Contact, wrenches),  // bytes offset in struct
    nullptr,  // default value
    size_function__Contact__wrenches,  // size() function pointer
    get_const_function__Contact__wrenches,  // get_const(index) function pointer
    get_function__Contact__wrenches,  // get(index) function pointer
    resize_function__Contact__wrenches  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Contact_message_members = {
  "ros_ign_interfaces::msg",  // message namespace
  "Contact",  // message name
  6,  // number of fields
  sizeof(ros_ign_interfaces::msg::Contact),
  Contact_message_member_array,  // message members
  Contact_init_function,  // function to initialize message memory (memory has to be allocated)
  Contact_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Contact_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Contact_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros_ign_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_ign_interfaces::msg::Contact>()
{
  return &::ros_ign_interfaces::msg::rosidl_typesupport_introspection_cpp::Contact_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_ign_interfaces, msg, Contact)() {
  return &::ros_ign_interfaces::msg::rosidl_typesupport_introspection_cpp::Contact_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
