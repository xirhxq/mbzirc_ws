// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_ign_interfaces:msg/Contacts.idl
// generated code does not contain a copyright notice
#include "ros_ign_interfaces/msg/detail/contacts__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `contacts`
#include "ros_ign_interfaces/msg/detail/contact__functions.h"

bool
ros_ign_interfaces__msg__Contacts__init(ros_ign_interfaces__msg__Contacts * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros_ign_interfaces__msg__Contacts__fini(msg);
    return false;
  }
  // contacts
  if (!ros_ign_interfaces__msg__Contact__Sequence__init(&msg->contacts, 0)) {
    ros_ign_interfaces__msg__Contacts__fini(msg);
    return false;
  }
  return true;
}

void
ros_ign_interfaces__msg__Contacts__fini(ros_ign_interfaces__msg__Contacts * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // contacts
  ros_ign_interfaces__msg__Contact__Sequence__fini(&msg->contacts);
}

bool
ros_ign_interfaces__msg__Contacts__are_equal(const ros_ign_interfaces__msg__Contacts * lhs, const ros_ign_interfaces__msg__Contacts * rhs)
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
  // contacts
  if (!ros_ign_interfaces__msg__Contact__Sequence__are_equal(
      &(lhs->contacts), &(rhs->contacts)))
  {
    return false;
  }
  return true;
}

bool
ros_ign_interfaces__msg__Contacts__copy(
  const ros_ign_interfaces__msg__Contacts * input,
  ros_ign_interfaces__msg__Contacts * output)
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
  // contacts
  if (!ros_ign_interfaces__msg__Contact__Sequence__copy(
      &(input->contacts), &(output->contacts)))
  {
    return false;
  }
  return true;
}

ros_ign_interfaces__msg__Contacts *
ros_ign_interfaces__msg__Contacts__create()
{
  ros_ign_interfaces__msg__Contacts * msg = (ros_ign_interfaces__msg__Contacts *)malloc(sizeof(ros_ign_interfaces__msg__Contacts));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ign_interfaces__msg__Contacts));
  bool success = ros_ign_interfaces__msg__Contacts__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros_ign_interfaces__msg__Contacts__destroy(ros_ign_interfaces__msg__Contacts * msg)
{
  if (msg) {
    ros_ign_interfaces__msg__Contacts__fini(msg);
  }
  free(msg);
}


bool
ros_ign_interfaces__msg__Contacts__Sequence__init(ros_ign_interfaces__msg__Contacts__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros_ign_interfaces__msg__Contacts * data = NULL;
  if (size) {
    data = (ros_ign_interfaces__msg__Contacts *)calloc(size, sizeof(ros_ign_interfaces__msg__Contacts));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ign_interfaces__msg__Contacts__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ign_interfaces__msg__Contacts__fini(&data[i - 1]);
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
ros_ign_interfaces__msg__Contacts__Sequence__fini(ros_ign_interfaces__msg__Contacts__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_ign_interfaces__msg__Contacts__fini(&array->data[i]);
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

ros_ign_interfaces__msg__Contacts__Sequence *
ros_ign_interfaces__msg__Contacts__Sequence__create(size_t size)
{
  ros_ign_interfaces__msg__Contacts__Sequence * array = (ros_ign_interfaces__msg__Contacts__Sequence *)malloc(sizeof(ros_ign_interfaces__msg__Contacts__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros_ign_interfaces__msg__Contacts__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros_ign_interfaces__msg__Contacts__Sequence__destroy(ros_ign_interfaces__msg__Contacts__Sequence * array)
{
  if (array) {
    ros_ign_interfaces__msg__Contacts__Sequence__fini(array);
  }
  free(array);
}

bool
ros_ign_interfaces__msg__Contacts__Sequence__are_equal(const ros_ign_interfaces__msg__Contacts__Sequence * lhs, const ros_ign_interfaces__msg__Contacts__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ign_interfaces__msg__Contacts__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ign_interfaces__msg__Contacts__Sequence__copy(
  const ros_ign_interfaces__msg__Contacts__Sequence * input,
  ros_ign_interfaces__msg__Contacts__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ign_interfaces__msg__Contacts);
    ros_ign_interfaces__msg__Contacts * data =
      (ros_ign_interfaces__msg__Contacts *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ign_interfaces__msg__Contacts__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_ign_interfaces__msg__Contacts__fini(&data[i]);
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
    if (!ros_ign_interfaces__msg__Contacts__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
