// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_ign_interfaces:msg/GuiCamera.idl
// generated code does not contain a copyright notice

#ifndef ROS_IGN_INTERFACES__MSG__DETAIL__GUI_CAMERA__STRUCT_H_
#define ROS_IGN_INTERFACES__MSG__DETAIL__GUI_CAMERA__STRUCT_H_

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
// Member 'name'
// Member 'view_controller'
// Member 'projection_type'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'track'
#include "ros_ign_interfaces/msg/detail/track_visual__struct.h"

// Struct defined in msg/GuiCamera in the package ros_ign_interfaces.
typedef struct ros_ign_interfaces__msg__GuiCamera
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String view_controller;
  geometry_msgs__msg__Pose pose;
  ros_ign_interfaces__msg__TrackVisual track;
  rosidl_runtime_c__String projection_type;
} ros_ign_interfaces__msg__GuiCamera;

// Struct for a sequence of ros_ign_interfaces__msg__GuiCamera.
typedef struct ros_ign_interfaces__msg__GuiCamera__Sequence
{
  ros_ign_interfaces__msg__GuiCamera * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_ign_interfaces__msg__GuiCamera__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_IGN_INTERFACES__MSG__DETAIL__GUI_CAMERA__STRUCT_H_
