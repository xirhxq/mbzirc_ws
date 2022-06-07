// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_ign_interfaces:msg/Dataframe.idl
// generated code does not contain a copyright notice
#include "ros_ign_interfaces/msg/detail/dataframe__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `src_address`
// Member `dst_address`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ros_ign_interfaces__msg__Dataframe__init(ros_ign_interfaces__msg__Dataframe * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros_ign_interfaces__msg__Dataframe__fini(msg);
    return false;
  }
  // src_address
  if (!rosidl_runtime_c__String__init(&msg->src_address)) {
    ros_ign_interfaces__msg__Dataframe__fini(msg);
    return false;
  }
  // dst_address
  if (!rosidl_runtime_c__String__init(&msg->dst_address)) {
    ros_ign_interfaces__msg__Dataframe__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    ros_ign_interfaces__msg__Dataframe__fini(msg);
    return false;
  }
  // rssi
  return true;
}

void
ros_ign_interfaces__msg__Dataframe__fini(ros_ign_interfaces__msg__Dataframe * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // src_address
  rosidl_runtime_c__String__fini(&msg->src_address);
  // dst_address
  rosidl_runtime_c__String__fini(&msg->dst_address);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
  // rssi
}

bool
ros_ign_interfaces__msg__Dataframe__are_equal(const ros_ign_interfaces__msg__Dataframe * lhs, const ros_ign_interfaces__msg__Dataframe * rhs)
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
  // src_address
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->src_address), &(rhs->src_address)))
  {
    return false;
  }
  // dst_address
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->dst_address), &(rhs->dst_address)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // rssi
  if (lhs->rssi != rhs->rssi) {
    return false;
  }
  return true;
}

bool
ros_ign_interfaces__msg__Dataframe__copy(
  const ros_ign_interfaces__msg__Dataframe * input,
  ros_ign_interfaces__msg__Dataframe * output)
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
  // src_address
  if (!rosidl_runtime_c__String__copy(
      &(input->src_address), &(output->src_address)))
  {
    return false;
  }
  // dst_address
  if (!rosidl_runtime_c__String__copy(
      &(input->dst_address), &(output->dst_address)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // rssi
  output->rssi = input->rssi;
  return true;
}

ros_ign_interfaces__msg__Dataframe *
ros_ign_interfaces__msg__Dataframe__create()
{
  ros_ign_interfaces__msg__Dataframe * msg = (ros_ign_interfaces__msg__Dataframe *)malloc(sizeof(ros_ign_interfaces__msg__Dataframe));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ign_interfaces__msg__Dataframe));
  bool success = ros_ign_interfaces__msg__Dataframe__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros_ign_interfaces__msg__Dataframe__destroy(ros_ign_interfaces__msg__Dataframe * msg)
{
  if (msg) {
    ros_ign_interfaces__msg__Dataframe__fini(msg);
  }
  free(msg);
}


bool
ros_ign_interfaces__msg__Dataframe__Sequence__init(ros_ign_interfaces__msg__Dataframe__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros_ign_interfaces__msg__Dataframe * data = NULL;
  if (size) {
    data = (ros_ign_interfaces__msg__Dataframe *)calloc(size, sizeof(ros_ign_interfaces__msg__Dataframe));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ign_interfaces__msg__Dataframe__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ign_interfaces__msg__Dataframe__fini(&data[i - 1]);
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
ros_ign_interfaces__msg__Dataframe__Sequence__fini(ros_ign_interfaces__msg__Dataframe__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_ign_interfaces__msg__Dataframe__fini(&array->data[i]);
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

ros_ign_interfaces__msg__Dataframe__Sequence *
ros_ign_interfaces__msg__Dataframe__Sequence__create(size_t size)
{
  ros_ign_interfaces__msg__Dataframe__Sequence * array = (ros_ign_interfaces__msg__Dataframe__Sequence *)malloc(sizeof(ros_ign_interfaces__msg__Dataframe__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros_ign_interfaces__msg__Dataframe__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros_ign_interfaces__msg__Dataframe__Sequence__destroy(ros_ign_interfaces__msg__Dataframe__Sequence * array)
{
  if (array) {
    ros_ign_interfaces__msg__Dataframe__Sequence__fini(array);
  }
  free(array);
}

bool
ros_ign_interfaces__msg__Dataframe__Sequence__are_equal(const ros_ign_interfaces__msg__Dataframe__Sequence * lhs, const ros_ign_interfaces__msg__Dataframe__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ign_interfaces__msg__Dataframe__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ign_interfaces__msg__Dataframe__Sequence__copy(
  const ros_ign_interfaces__msg__Dataframe__Sequence * input,
  ros_ign_interfaces__msg__Dataframe__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ign_interfaces__msg__Dataframe);
    ros_ign_interfaces__msg__Dataframe * data =
      (ros_ign_interfaces__msg__Dataframe *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ign_interfaces__msg__Dataframe__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_ign_interfaces__msg__Dataframe__fini(&data[i]);
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
    if (!ros_ign_interfaces__msg__Dataframe__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
