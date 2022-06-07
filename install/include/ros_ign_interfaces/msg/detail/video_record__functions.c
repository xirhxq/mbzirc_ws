// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_ign_interfaces:msg/VideoRecord.idl
// generated code does not contain a copyright notice
#include "ros_ign_interfaces/msg/detail/video_record__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `format`
// Member `save_filename`
#include "rosidl_runtime_c/string_functions.h"

bool
ros_ign_interfaces__msg__VideoRecord__init(ros_ign_interfaces__msg__VideoRecord * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros_ign_interfaces__msg__VideoRecord__fini(msg);
    return false;
  }
  // start
  // stop
  // format
  if (!rosidl_runtime_c__String__init(&msg->format)) {
    ros_ign_interfaces__msg__VideoRecord__fini(msg);
    return false;
  }
  // save_filename
  if (!rosidl_runtime_c__String__init(&msg->save_filename)) {
    ros_ign_interfaces__msg__VideoRecord__fini(msg);
    return false;
  }
  return true;
}

void
ros_ign_interfaces__msg__VideoRecord__fini(ros_ign_interfaces__msg__VideoRecord * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // start
  // stop
  // format
  rosidl_runtime_c__String__fini(&msg->format);
  // save_filename
  rosidl_runtime_c__String__fini(&msg->save_filename);
}

bool
ros_ign_interfaces__msg__VideoRecord__are_equal(const ros_ign_interfaces__msg__VideoRecord * lhs, const ros_ign_interfaces__msg__VideoRecord * rhs)
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
  // start
  if (lhs->start != rhs->start) {
    return false;
  }
  // stop
  if (lhs->stop != rhs->stop) {
    return false;
  }
  // format
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->format), &(rhs->format)))
  {
    return false;
  }
  // save_filename
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->save_filename), &(rhs->save_filename)))
  {
    return false;
  }
  return true;
}

bool
ros_ign_interfaces__msg__VideoRecord__copy(
  const ros_ign_interfaces__msg__VideoRecord * input,
  ros_ign_interfaces__msg__VideoRecord * output)
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
  // start
  output->start = input->start;
  // stop
  output->stop = input->stop;
  // format
  if (!rosidl_runtime_c__String__copy(
      &(input->format), &(output->format)))
  {
    return false;
  }
  // save_filename
  if (!rosidl_runtime_c__String__copy(
      &(input->save_filename), &(output->save_filename)))
  {
    return false;
  }
  return true;
}

ros_ign_interfaces__msg__VideoRecord *
ros_ign_interfaces__msg__VideoRecord__create()
{
  ros_ign_interfaces__msg__VideoRecord * msg = (ros_ign_interfaces__msg__VideoRecord *)malloc(sizeof(ros_ign_interfaces__msg__VideoRecord));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ign_interfaces__msg__VideoRecord));
  bool success = ros_ign_interfaces__msg__VideoRecord__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros_ign_interfaces__msg__VideoRecord__destroy(ros_ign_interfaces__msg__VideoRecord * msg)
{
  if (msg) {
    ros_ign_interfaces__msg__VideoRecord__fini(msg);
  }
  free(msg);
}


bool
ros_ign_interfaces__msg__VideoRecord__Sequence__init(ros_ign_interfaces__msg__VideoRecord__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros_ign_interfaces__msg__VideoRecord * data = NULL;
  if (size) {
    data = (ros_ign_interfaces__msg__VideoRecord *)calloc(size, sizeof(ros_ign_interfaces__msg__VideoRecord));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ign_interfaces__msg__VideoRecord__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ign_interfaces__msg__VideoRecord__fini(&data[i - 1]);
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
ros_ign_interfaces__msg__VideoRecord__Sequence__fini(ros_ign_interfaces__msg__VideoRecord__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_ign_interfaces__msg__VideoRecord__fini(&array->data[i]);
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

ros_ign_interfaces__msg__VideoRecord__Sequence *
ros_ign_interfaces__msg__VideoRecord__Sequence__create(size_t size)
{
  ros_ign_interfaces__msg__VideoRecord__Sequence * array = (ros_ign_interfaces__msg__VideoRecord__Sequence *)malloc(sizeof(ros_ign_interfaces__msg__VideoRecord__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros_ign_interfaces__msg__VideoRecord__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros_ign_interfaces__msg__VideoRecord__Sequence__destroy(ros_ign_interfaces__msg__VideoRecord__Sequence * array)
{
  if (array) {
    ros_ign_interfaces__msg__VideoRecord__Sequence__fini(array);
  }
  free(array);
}

bool
ros_ign_interfaces__msg__VideoRecord__Sequence__are_equal(const ros_ign_interfaces__msg__VideoRecord__Sequence * lhs, const ros_ign_interfaces__msg__VideoRecord__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ign_interfaces__msg__VideoRecord__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ign_interfaces__msg__VideoRecord__Sequence__copy(
  const ros_ign_interfaces__msg__VideoRecord__Sequence * input,
  ros_ign_interfaces__msg__VideoRecord__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ign_interfaces__msg__VideoRecord);
    ros_ign_interfaces__msg__VideoRecord * data =
      (ros_ign_interfaces__msg__VideoRecord *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ign_interfaces__msg__VideoRecord__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_ign_interfaces__msg__VideoRecord__fini(&data[i]);
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
    if (!ros_ign_interfaces__msg__VideoRecord__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
