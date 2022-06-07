// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_ign_interfaces:srv/ControlWorld.idl
// generated code does not contain a copyright notice

#ifndef ROS_IGN_INTERFACES__SRV__DETAIL__CONTROL_WORLD__STRUCT_H_
#define ROS_IGN_INTERFACES__SRV__DETAIL__CONTROL_WORLD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'world_control'
#include "ros_ign_interfaces/msg/detail/world_control__struct.h"

// Struct defined in srv/ControlWorld in the package ros_ign_interfaces.
typedef struct ros_ign_interfaces__srv__ControlWorld_Request
{
  ros_ign_interfaces__msg__WorldControl world_control;
} ros_ign_interfaces__srv__ControlWorld_Request;

// Struct for a sequence of ros_ign_interfaces__srv__ControlWorld_Request.
typedef struct ros_ign_interfaces__srv__ControlWorld_Request__Sequence
{
  ros_ign_interfaces__srv__ControlWorld_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_ign_interfaces__srv__ControlWorld_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ControlWorld in the package ros_ign_interfaces.
typedef struct ros_ign_interfaces__srv__ControlWorld_Response
{
  bool success;
} ros_ign_interfaces__srv__ControlWorld_Response;

// Struct for a sequence of ros_ign_interfaces__srv__ControlWorld_Response.
typedef struct ros_ign_interfaces__srv__ControlWorld_Response__Sequence
{
  ros_ign_interfaces__srv__ControlWorld_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_ign_interfaces__srv__ControlWorld_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_IGN_INTERFACES__SRV__DETAIL__CONTROL_WORLD__STRUCT_H_
