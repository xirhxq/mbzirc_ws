// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_ign_interfaces:msg/WorldReset.idl
// generated code does not contain a copyright notice
#include "ros_ign_interfaces/msg/detail/world_reset__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ros_ign_interfaces__msg__WorldReset__init(ros_ign_interfaces__msg__WorldReset * msg)
{
  if (!msg) {
    return false;
  }
  // all
  msg->all = false;
  // time_only
  msg->time_only = false;
  // model_only
  msg->model_only = false;
  return true;
}

void
ros_ign_interfaces__msg__WorldReset__fini(ros_ign_interfaces__msg__WorldReset * msg)
{
  if (!msg) {
    return;
  }
  // all
  // time_only
  // model_only
}

bool
ros_ign_interfaces__msg__WorldReset__are_equal(const ros_ign_interfaces__msg__WorldReset * lhs, const ros_ign_interfaces__msg__WorldReset * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // all
  if (lhs->all != rhs->all) {
    return false;
  }
  // time_only
  if (lhs->time_only != rhs->time_only) {
    return false;
  }
  // model_only
  if (lhs->model_only != rhs->model_only) {
    return false;
  }
  return true;
}

bool
ros_ign_interfaces__msg__WorldReset__copy(
  const ros_ign_interfaces__msg__WorldReset * input,
  ros_ign_interfaces__msg__WorldReset * output)
{
  if (!input || !output) {
    return false;
  }
  // all
  output->all = input->all;
  // time_only
  output->time_only = input->time_only;
  // model_only
  output->model_only = input->model_only;
  return true;
}

ros_ign_interfaces__msg__WorldReset *
ros_ign_interfaces__msg__WorldReset__create()
{
  ros_ign_interfaces__msg__WorldReset * msg = (ros_ign_interfaces__msg__WorldReset *)malloc(sizeof(ros_ign_interfaces__msg__WorldReset));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ign_interfaces__msg__WorldReset));
  bool success = ros_ign_interfaces__msg__WorldReset__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros_ign_interfaces__msg__WorldReset__destroy(ros_ign_interfaces__msg__WorldReset * msg)
{
  if (msg) {
    ros_ign_interfaces__msg__WorldReset__fini(msg);
  }
  free(msg);
}


bool
ros_ign_interfaces__msg__WorldReset__Sequence__init(ros_ign_interfaces__msg__WorldReset__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros_ign_interfaces__msg__WorldReset * data = NULL;
  if (size) {
    data = (ros_ign_interfaces__msg__WorldReset *)calloc(size, sizeof(ros_ign_interfaces__msg__WorldReset));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ign_interfaces__msg__WorldReset__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ign_interfaces__msg__WorldReset__fini(&data[i - 1]);
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
ros_ign_interfaces__msg__WorldReset__Sequence__fini(ros_ign_interfaces__msg__WorldReset__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_ign_interfaces__msg__WorldReset__fini(&array->data[i]);
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

ros_ign_interfaces__msg__WorldReset__Sequence *
ros_ign_interfaces__msg__WorldReset__Sequence__create(size_t size)
{
  ros_ign_interfaces__msg__WorldReset__Sequence * array = (ros_ign_interfaces__msg__WorldReset__Sequence *)malloc(sizeof(ros_ign_interfaces__msg__WorldReset__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros_ign_interfaces__msg__WorldReset__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros_ign_interfaces__msg__WorldReset__Sequence__destroy(ros_ign_interfaces__msg__WorldReset__Sequence * array)
{
  if (array) {
    ros_ign_interfaces__msg__WorldReset__Sequence__fini(array);
  }
  free(array);
}

bool
ros_ign_interfaces__msg__WorldReset__Sequence__are_equal(const ros_ign_interfaces__msg__WorldReset__Sequence * lhs, const ros_ign_interfaces__msg__WorldReset__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ign_interfaces__msg__WorldReset__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ign_interfaces__msg__WorldReset__Sequence__copy(
  const ros_ign_interfaces__msg__WorldReset__Sequence * input,
  ros_ign_interfaces__msg__WorldReset__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ign_interfaces__msg__WorldReset);
    ros_ign_interfaces__msg__WorldReset * data =
      (ros_ign_interfaces__msg__WorldReset *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ign_interfaces__msg__WorldReset__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_ign_interfaces__msg__WorldReset__fini(&data[i]);
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
    if (!ros_ign_interfaces__msg__WorldReset__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
