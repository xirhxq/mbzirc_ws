// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_ign_interfaces:msg/Contact.idl
// generated code does not contain a copyright notice

#ifndef ROS_IGN_INTERFACES__MSG__DETAIL__CONTACT__STRUCT_H_
#define ROS_IGN_INTERFACES__MSG__DETAIL__CONTACT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'collision1'
// Member 'collision2'
#include "ros_ign_interfaces/msg/detail/entity__struct.h"
// Member 'positions'
// Member 'normals'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'depths'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'wrenches'
#include "ros_ign_interfaces/msg/detail/joint_wrench__struct.h"

// Struct defined in msg/Contact in the package ros_ign_interfaces.
typedef struct ros_ign_interfaces__msg__Contact
{
  ros_ign_interfaces__msg__Entity collision1;
  ros_ign_interfaces__msg__Entity collision2;
  geometry_msgs__msg__Vector3__Sequence positions;
  geometry_msgs__msg__Vector3__Sequence normals;
  rosidl_runtime_c__double__Sequence depths;
  ros_ign_interfaces__msg__JointWrench__Sequence wrenches;
} ros_ign_interfaces__msg__Contact;

// Struct for a sequence of ros_ign_interfaces__msg__Contact.
typedef struct ros_ign_interfaces__msg__Contact__Sequence
{
  ros_ign_interfaces__msg__Contact * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_ign_interfaces__msg__Contact__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_IGN_INTERFACES__MSG__DETAIL__CONTACT__STRUCT_H_
