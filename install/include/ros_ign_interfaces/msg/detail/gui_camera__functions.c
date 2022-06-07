// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_ign_interfaces:msg/GuiCamera.idl
// generated code does not contain a copyright notice
#include "ros_ign_interfaces/msg/detail/gui_camera__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
// Member `view_controller`
// Member `projection_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `track`
#include "ros_ign_interfaces/msg/detail/track_visual__functions.h"

bool
ros_ign_interfaces__msg__GuiCamera__init(ros_ign_interfaces__msg__GuiCamera * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros_ign_interfaces__msg__GuiCamera__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ros_ign_interfaces__msg__GuiCamera__fini(msg);
    return false;
  }
  // view_controller
  if (!rosidl_runtime_c__String__init(&msg->view_controller)) {
    ros_ign_interfaces__msg__GuiCamera__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    ros_ign_interfaces__msg__GuiCamera__fini(msg);
    return false;
  }
  // track
  if (!ros_ign_interfaces__msg__TrackVisual__init(&msg->track)) {
    ros_ign_interfaces__msg__GuiCamera__fini(msg);
    return false;
  }
  // projection_type
  if (!rosidl_runtime_c__String__init(&msg->projection_type)) {
    ros_ign_interfaces__msg__GuiCamera__fini(msg);
    return false;
  }
  return true;
}

void
ros_ign_interfaces__msg__GuiCamera__fini(ros_ign_interfaces__msg__GuiCamera * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // view_controller
  rosidl_runtime_c__String__fini(&msg->view_controller);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // track
  ros_ign_interfaces__msg__TrackVisual__fini(&msg->track);
  // projection_type
  rosidl_runtime_c__String__fini(&msg->projection_type);
}

bool
ros_ign_interfaces__msg__GuiCamera__are_equal(const ros_ign_interfaces__msg__GuiCamera * lhs, const ros_ign_interfaces__msg__GuiCamera * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // view_controller
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->view_controller), &(rhs->view_controller)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // track
  if (!ros_ign_interfaces__msg__TrackVisual__are_equal(
      &(lhs->track), &(rhs->track)))
  {
    return false;
  }
  // projection_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->projection_type), &(rhs->projection_type)))
  {
    return false;
  }
  return true;
}

bool
ros_ign_interfaces__msg__GuiCamera__copy(
  const ros_ign_interfaces__msg__GuiCamera * input,
  ros_ign_interfaces__msg__GuiCamera * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // view_controller
  if (!rosidl_runtime_c__String__copy(
      &(input->view_controller), &(output->view_controller)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // track
  if (!ros_ign_interfaces__msg__TrackVisual__copy(
      &(input->track), &(output->track)))
  {
    return false;
  }
  // projection_type
  if (!rosidl_runtime_c__String__copy(
      &(input->projection_type), &(output->projection_type)))
  {
    return false;
  }
  return true;
}

ros_ign_interfaces__msg__GuiCamera *
ros_ign_interfaces__msg__GuiCamera__create()
{
  ros_ign_interfaces__msg__GuiCamera * msg = (ros_ign_interfaces__msg__GuiCamera *)malloc(sizeof(ros_ign_interfaces__msg__GuiCamera));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ign_interfaces__msg__GuiCamera));
  bool success = ros_ign_interfaces__msg__GuiCamera__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros_ign_interfaces__msg__GuiCamera__destroy(ros_ign_interfaces__msg__GuiCamera * msg)
{
  if (msg) {
    ros_ign_interfaces__msg__GuiCamera__fini(msg);
  }
  free(msg);
}


bool
ros_ign_interfaces__msg__GuiCamera__Sequence__init(ros_ign_interfaces__msg__GuiCamera__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros_ign_interfaces__msg__GuiCamera * data = NULL;
  if (size) {
    data = (ros_ign_interfaces__msg__GuiCamera *)calloc(size, sizeof(ros_ign_interfaces__msg__GuiCamera));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ign_interfaces__msg__GuiCamera__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ign_interfaces__msg__GuiCamera__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_ign_interfaces__msg__GuiCamera__Sequence__fini(ros_ign_interfaces__msg__GuiCamera__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_ign_interfaces__msg__GuiCamera__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_ign_interfaces__msg__GuiCamera__Sequence *
ros_ign_interfaces__msg__GuiCamera__Sequence__create(size_t size)
{
  ros_ign_interfaces__msg__GuiCamera__Sequence * array = (ros_ign_interfaces__msg__GuiCamera__Sequence *)malloc(sizeof(ros_ign_interfaces__msg__GuiCamera__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros_ign_interfaces__msg__GuiCamera__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros_ign_interfaces__msg__GuiCamera__Sequence__destroy(ros_ign_interfaces__msg__GuiCamera__Sequence * array)
{
  if (array) {
    ros_ign_interfaces__msg__GuiCamera__Sequence__fini(array);
  }
  free(array);
}

bool
ros_ign_interfaces__msg__GuiCamera__Sequence__are_equal(const ros_ign_interfaces__msg__GuiCamera__Sequence * lhs, const ros_ign_interfaces__msg__GuiCamera__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ign_interfaces__msg__GuiCamera__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ign_interfaces__msg__GuiCamera__Sequence__copy(
  const ros_ign_interfaces__msg__GuiCamera__Sequence * input,
  ros_ign_interfaces__msg__GuiCamera__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ign_interfaces__msg__GuiCamera);
    ros_ign_interfaces__msg__GuiCamera * data =
      (ros_ign_interfaces__msg__GuiCamera *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ign_interfaces__msg__GuiCamera__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_ign_interfaces__msg__GuiCamera__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_ign_interfaces__msg__GuiCamera__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
