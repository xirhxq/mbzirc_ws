// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_ign_interfaces:msg/WorldControl.idl
// generated code does not contain a copyright notice
#include "ros_ign_interfaces/msg/detail/world_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `reset`
#include "ros_ign_interfaces/msg/detail/world_reset__functions.h"
// Member `run_to_sim_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ros_ign_interfaces__msg__WorldControl__init(ros_ign_interfaces__msg__WorldControl * msg)
{
  if (!msg) {
    return false;
  }
  // pause
  // step
  // multi_step
  msg->multi_step = 0ul;
  // reset
  if (!ros_ign_interfaces__msg__WorldReset__init(&msg->reset)) {
    ros_ign_interfaces__msg__WorldControl__fini(msg);
    return false;
  }
  // seed
  // run_to_sim_time
  if (!builtin_interfaces__msg__Time__init(&msg->run_to_sim_time)) {
    ros_ign_interfaces__msg__WorldControl__fini(msg);
    return false;
  }
  return true;
}

void
ros_ign_interfaces__msg__WorldControl__fini(ros_ign_interfaces__msg__WorldControl * msg)
{
  if (!msg) {
    return;
  }
  // pause
  // step
  // multi_step
  // reset
  ros_ign_interfaces__msg__WorldReset__fini(&msg->reset);
  // seed
  // run_to_sim_time
  builtin_interfaces__msg__Time__fini(&msg->run_to_sim_time);
}

bool
ros_ign_interfaces__msg__WorldControl__are_equal(const ros_ign_interfaces__msg__WorldControl * lhs, const ros_ign_interfaces__msg__WorldControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pause
  if (lhs->pause != rhs->pause) {
    return false;
  }
  // step
  if (lhs->step != rhs->step) {
    return false;
  }
  // multi_step
  if (lhs->multi_step != rhs->multi_step) {
    return false;
  }
  // reset
  if (!ros_ign_interfaces__msg__WorldReset__are_equal(
      &(lhs->reset), &(rhs->reset)))
  {
    return false;
  }
  // seed
  if (lhs->seed != rhs->seed) {
    return false;
  }
  // run_to_sim_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->run_to_sim_time), &(rhs->run_to_sim_time)))
  {
    return false;
  }
  return true;
}

bool
ros_ign_interfaces__msg__WorldControl__copy(
  const ros_ign_interfaces__msg__WorldControl * input,
  ros_ign_interfaces__msg__WorldControl * output)
{
  if (!input || !output) {
    return false;
  }
  // pause
  output->pause = input->pause;
  // step
  output->step = input->step;
  // multi_step
  output->multi_step = input->multi_step;
  // reset
  if (!ros_ign_interfaces__msg__WorldReset__copy(
      &(input->reset), &(output->reset)))
  {
    return false;
  }
  // seed
  output->seed = input->seed;
  // run_to_sim_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->run_to_sim_time), &(output->run_to_sim_time)))
  {
    return false;
  }
  return true;
}

ros_ign_interfaces__msg__WorldControl *
ros_ign_interfaces__msg__WorldControl__create()
{
  ros_ign_interfaces__msg__WorldControl * msg = (ros_ign_interfaces__msg__WorldControl *)malloc(sizeof(ros_ign_interfaces__msg__WorldControl));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ign_interfaces__msg__WorldControl));
  bool success = ros_ign_interfaces__msg__WorldControl__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros_ign_interfaces__msg__WorldControl__destroy(ros_ign_interfaces__msg__WorldControl * msg)
{
  if (msg) {
    ros_ign_interfaces__msg__WorldControl__fini(msg);
  }
  free(msg);
}


bool
ros_ign_interfaces__msg__WorldControl__Sequence__init(ros_ign_interfaces__msg__WorldControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros_ign_interfaces__msg__WorldControl * data = NULL;
  if (size) {
    data = (ros_ign_interfaces__msg__WorldControl *)calloc(size, sizeof(ros_ign_interfaces__msg__WorldControl));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ign_interfaces__msg__WorldControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ign_interfaces__msg__WorldControl__fini(&data[i - 1]);
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
ros_ign_interfaces__msg__WorldControl__Sequence__fini(ros_ign_interfaces__msg__WorldControl__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_ign_interfaces__msg__WorldControl__fini(&array->data[i]);
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

ros_ign_interfaces__msg__WorldControl__Sequence *
ros_ign_interfaces__msg__WorldControl__Sequence__create(size_t size)
{
  ros_ign_interfaces__msg__WorldControl__Sequence * array = (ros_ign_interfaces__msg__WorldControl__Sequence *)malloc(sizeof(ros_ign_interfaces__msg__WorldControl__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros_ign_interfaces__msg__WorldControl__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros_ign_interfaces__msg__WorldControl__Sequence__destroy(ros_ign_interfaces__msg__WorldControl__Sequence * array)
{
  if (array) {
    ros_ign_interfaces__msg__WorldControl__Sequence__fini(array);
  }
  free(array);
}

bool
ros_ign_interfaces__msg__WorldControl__Sequence__are_equal(const ros_ign_interfaces__msg__WorldControl__Sequence * lhs, const ros_ign_interfaces__msg__WorldControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ign_interfaces__msg__WorldControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ign_interfaces__msg__WorldControl__Sequence__copy(
  const ros_ign_interfaces__msg__WorldControl__Sequence * input,
  ros_ign_interfaces__msg__WorldControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ign_interfaces__msg__WorldControl);
    ros_ign_interfaces__msg__WorldControl * data =
      (ros_ign_interfaces__msg__WorldControl *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ign_interfaces__msg__WorldControl__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_ign_interfaces__msg__WorldControl__fini(&data[i]);
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
    if (!ros_ign_interfaces__msg__WorldControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
