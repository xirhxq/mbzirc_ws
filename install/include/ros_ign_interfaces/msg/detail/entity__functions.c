// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_ign_interfaces:msg/Entity.idl
// generated code does not contain a copyright notice
#include "ros_ign_interfaces/msg/detail/entity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
ros_ign_interfaces__msg__Entity__init(ros_ign_interfaces__msg__Entity * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ros_ign_interfaces__msg__Entity__fini(msg);
    return false;
  }
  // type
  return true;
}

void
ros_ign_interfaces__msg__Entity__fini(ros_ign_interfaces__msg__Entity * msg)
{
  if (!msg) {
    return;
  }
  // id
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // type
}

bool
ros_ign_interfaces__msg__Entity__are_equal(const ros_ign_interfaces__msg__Entity * lhs, const ros_ign_interfaces__msg__Entity * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  return true;
}

bool
ros_ign_interfaces__msg__Entity__copy(
  const ros_ign_interfaces__msg__Entity * input,
  ros_ign_interfaces__msg__Entity * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // type
  output->type = input->type;
  return true;
}

ros_ign_interfaces__msg__Entity *
ros_ign_interfaces__msg__Entity__create()
{
  ros_ign_interfaces__msg__Entity * msg = (ros_ign_interfaces__msg__Entity *)malloc(sizeof(ros_ign_interfaces__msg__Entity));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ign_interfaces__msg__Entity));
  bool success = ros_ign_interfaces__msg__Entity__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros_ign_interfaces__msg__Entity__destroy(ros_ign_interfaces__msg__Entity * msg)
{
  if (msg) {
    ros_ign_interfaces__msg__Entity__fini(msg);
  }
  free(msg);
}


bool
ros_ign_interfaces__msg__Entity__Sequence__init(ros_ign_interfaces__msg__Entity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros_ign_interfaces__msg__Entity * data = NULL;
  if (size) {
    data = (ros_ign_interfaces__msg__Entity *)calloc(size, sizeof(ros_ign_interfaces__msg__Entity));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ign_interfaces__msg__Entity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ign_interfaces__msg__Entity__fini(&data[i - 1]);
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
ros_ign_interfaces__msg__Entity__Sequence__fini(ros_ign_interfaces__msg__Entity__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_ign_interfaces__msg__Entity__fini(&array->data[i]);
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

ros_ign_interfaces__msg__Entity__Sequence *
ros_ign_interfaces__msg__Entity__Sequence__create(size_t size)
{
  ros_ign_interfaces__msg__Entity__Sequence * array = (ros_ign_interfaces__msg__Entity__Sequence *)malloc(sizeof(ros_ign_interfaces__msg__Entity__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros_ign_interfaces__msg__Entity__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros_ign_interfaces__msg__Entity__Sequence__destroy(ros_ign_interfaces__msg__Entity__Sequence * array)
{
  if (array) {
    ros_ign_interfaces__msg__Entity__Sequence__fini(array);
  }
  free(array);
}

bool
ros_ign_interfaces__msg__Entity__Sequence__are_equal(const ros_ign_interfaces__msg__Entity__Sequence * lhs, const ros_ign_interfaces__msg__Entity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ign_interfaces__msg__Entity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ign_interfaces__msg__Entity__Sequence__copy(
  const ros_ign_interfaces__msg__Entity__Sequence * input,
  ros_ign_interfaces__msg__Entity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ign_interfaces__msg__Entity);
    ros_ign_interfaces__msg__Entity * data =
      (ros_ign_interfaces__msg__Entity *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ign_interfaces__msg__Entity__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_ign_interfaces__msg__Entity__fini(&data[i]);
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
    if (!ros_ign_interfaces__msg__Entity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
