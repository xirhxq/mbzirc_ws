// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_ign_interfaces:msg/StringVec.idl
// generated code does not contain a copyright notice
#include "ros_ign_interfaces/msg/detail/string_vec__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
ros_ign_interfaces__msg__StringVec__init(ros_ign_interfaces__msg__StringVec * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros_ign_interfaces__msg__StringVec__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__Sequence__init(&msg->data, 0)) {
    ros_ign_interfaces__msg__StringVec__fini(msg);
    return false;
  }
  return true;
}

void
ros_ign_interfaces__msg__StringVec__fini(ros_ign_interfaces__msg__StringVec * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // data
  rosidl_runtime_c__String__Sequence__fini(&msg->data);
}

bool
ros_ign_interfaces__msg__StringVec__are_equal(const ros_ign_interfaces__msg__StringVec * lhs, const ros_ign_interfaces__msg__StringVec * rhs)
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
  // data
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
ros_ign_interfaces__msg__StringVec__copy(
  const ros_ign_interfaces__msg__StringVec * input,
  ros_ign_interfaces__msg__StringVec * output)
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
  // data
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

ros_ign_interfaces__msg__StringVec *
ros_ign_interfaces__msg__StringVec__create()
{
  ros_ign_interfaces__msg__StringVec * msg = (ros_ign_interfaces__msg__StringVec *)malloc(sizeof(ros_ign_interfaces__msg__StringVec));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ign_interfaces__msg__StringVec));
  bool success = ros_ign_interfaces__msg__StringVec__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros_ign_interfaces__msg__StringVec__destroy(ros_ign_interfaces__msg__StringVec * msg)
{
  if (msg) {
    ros_ign_interfaces__msg__StringVec__fini(msg);
  }
  free(msg);
}


bool
ros_ign_interfaces__msg__StringVec__Sequence__init(ros_ign_interfaces__msg__StringVec__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros_ign_interfaces__msg__StringVec * data = NULL;
  if (size) {
    data = (ros_ign_interfaces__msg__StringVec *)calloc(size, sizeof(ros_ign_interfaces__msg__StringVec));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ign_interfaces__msg__StringVec__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ign_interfaces__msg__StringVec__fini(&data[i - 1]);
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
ros_ign_interfaces__msg__StringVec__Sequence__fini(ros_ign_interfaces__msg__StringVec__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_ign_interfaces__msg__StringVec__fini(&array->data[i]);
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

ros_ign_interfaces__msg__StringVec__Sequence *
ros_ign_interfaces__msg__StringVec__Sequence__create(size_t size)
{
  ros_ign_interfaces__msg__StringVec__Sequence * array = (ros_ign_interfaces__msg__StringVec__Sequence *)malloc(sizeof(ros_ign_interfaces__msg__StringVec__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros_ign_interfaces__msg__StringVec__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros_ign_interfaces__msg__StringVec__Sequence__destroy(ros_ign_interfaces__msg__StringVec__Sequence * array)
{
  if (array) {
    ros_ign_interfaces__msg__StringVec__Sequence__fini(array);
  }
  free(array);
}

bool
ros_ign_interfaces__msg__StringVec__Sequence__are_equal(const ros_ign_interfaces__msg__StringVec__Sequence * lhs, const ros_ign_interfaces__msg__StringVec__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ign_interfaces__msg__StringVec__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ign_interfaces__msg__StringVec__Sequence__copy(
  const ros_ign_interfaces__msg__StringVec__Sequence * input,
  ros_ign_interfaces__msg__StringVec__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ign_interfaces__msg__StringVec);
    ros_ign_interfaces__msg__StringVec * data =
      (ros_ign_interfaces__msg__StringVec *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ign_interfaces__msg__StringVec__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_ign_interfaces__msg__StringVec__fini(&data[i]);
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
    if (!ros_ign_interfaces__msg__StringVec__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
