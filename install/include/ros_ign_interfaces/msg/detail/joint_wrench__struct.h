// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_ign_interfaces:msg/JointWrench.idl
// generated code does not contain a copyright notice

#ifndef ROS_IGN_INTERFACES__MSG__DETAIL__JOINT_WRENCH__STRUCT_H_
#define ROS_IGN_INTERFACES__MSG__DETAIL__JOINT_WRENCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'body_1_name'
// Member 'body_2_name'
#include "std_msgs/msg/detail/string__struct.h"
// Member 'body_1_id'
// Member 'body_2_id'
#include "std_msgs/msg/detail/u_int32__struct.h"
// Member 'body_1_wrench'
// Member 'body_2_wrench'
#include "geometry_msgs/msg/detail/wrench__struct.h"

// Struct defined in msg/JointWrench in the package ros_ign_interfaces.
typedef struct ros_ign_interfaces__msg__JointWrench
{
  std_msgs__msg__Header header;
  std_msgs__msg__String body_1_name;
  std_msgs__msg__UInt32 body_1_id;
  std_msgs__msg__String body_2_name;
  std_msgs__msg__UInt32 body_2_id;
  geometry_msgs__msg__Wrench body_1_wrench;
  geometry_msgs__msg__Wrench body_2_wrench;
} ros_ign_interfaces__msg__JointWrench;

// Struct for a sequence of ros_ign_interfaces__msg__JointWrench.
typedef struct ros_ign_interfaces__msg__JointWrench__Sequence
{
  ros_ign_interfaces__msg__JointWrench * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_ign_interfaces__msg__JointWrench__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_IGN_INTERFACES__MSG__DETAIL__JOINT_WRENCH__STRUCT_H_
