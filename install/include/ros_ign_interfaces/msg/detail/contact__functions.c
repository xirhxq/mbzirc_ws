// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_ign_interfaces:msg/Contact.idl
// generated code does not contain a copyright notice
#include "ros_ign_interfaces/msg/detail/contact__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `collision1`
// Member `collision2`
#include "ros_ign_interfaces/msg/detail/entity__functions.h"
// Member `positions`
// Member `normals`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `depths`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `wrenches`
#include "ros_ign_interfaces/msg/detail/joint_wrench__functions.h"

bool
ros_ign_interfaces__msg__Contact__init(ros_ign_interfaces__msg__Contact * msg)
{
  if (!msg) {
    return false;
  }
  // collision1
  if (!ros_ign_interfaces__msg__Entity__init(&msg->collision1)) {
    ros_ign_interfaces__msg__Contact__fini(msg);
    return false;
  }
  // collision2
  if (!ros_ign_interfaces__msg__Entity__init(&msg->collision2)) {
    ros_ign_interfaces__msg__Contact__fini(msg);
    return false;
  }
  // positions
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->positions, 0)) {
    ros_ign_interfaces__msg__Contact__fini(msg);
    return false;
  }
  // normals
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->normals, 0)) {
    ros_ign_interfaces__msg__Contact__fini(msg);
    return false;
  }
  // depths
  if (!rosidl_runtime_c__double__Sequence__init(&msg->depths, 0)) {
    ros_ign_interfaces__msg__Contact__fini(msg);
    return false;
  }
  // wrenches
  if (!ros_ign_interfaces__msg__JointWrench__Sequence__init(&msg->wrenches, 0)) {
    ros_ign_interfaces__msg__Contact__fini(msg);
    return false;
  }
  return true;
}

void
ros_ign_interfaces__msg__Contact__fini(ros_ign_interfaces__msg__Contact * msg)
{
  if (!msg) {
    return;
  }
  // collision1
  ros_ign_interfaces__msg__Entity__fini(&msg->collision1);
  // collision2
  ros_ign_interfaces__msg__Entity__fini(&msg->collision2);
  // positions
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->positions);
  // normals
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->normals);
  // depths
  rosidl_runtime_c__double__Sequence__fini(&msg->depths);
  // wrenches
  ros_ign_interfaces__msg__JointWrench__Sequence__fini(&msg->wrenches);
}

bool
ros_ign_interfaces__msg__Contact__are_equal(const ros_ign_interfaces__msg__Contact * lhs, const ros_ign_interfaces__msg__Contact * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // collision1
  if (!ros_ign_interfaces__msg__Entity__are_equal(
      &(lhs->collision1), &(rhs->collision1)))
  {
    return false;
  }
  // collision2
  if (!ros_ign_interfaces__msg__Entity__are_equal(
      &(lhs->collision2), &(rhs->collision2)))
  {
    return false;
  }
  // positions
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->positions), &(rhs->positions)))
  {
    return false;
  }
  // normals
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->normals), &(rhs->normals)))
  {
    return false;
  }
  // depths
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->depths), &(rhs->depths)))
  {
    return false;
  }
  // wrenches
  if (!ros_ign_interfaces__msg__JointWrench__Sequence__are_equal(
      &(lhs->wrenches), &(rhs->wrenches)))
  {
    return false;
  }
  return true;
}

bool
ros_ign_interfaces__msg__Contact__copy(
  const ros_ign_interfaces__msg__Contact * input,
  ros_ign_interfaces__msg__Contact * output)
{
  if (!input || !output) {
    return false;
  }
  // collision1
  if (!ros_ign_interfaces__msg__Entity__copy(
      &(input->collision1), &(output->collision1)))
  {
    return false;
  }
  // collision2
  if (!ros_ign_interfaces__msg__Entity__copy(
      &(input->collision2), &(output->collision2)))
  {
    return false;
  }
  // positions
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->positions), &(output->positions)))
  {
    return false;
  }
  // normals
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->normals), &(output->normals)))
  {
    return false;
  }
  // depths
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->depths), &(output->depths)))
  {
    return false;
  }
  // wrenches
  if (!ros_ign_interfaces__msg__JointWrench__Sequence__copy(
      &(input->wrenches), &(output->wrenches)))
  {
    return false;
  }
  return true;
}

ros_ign_interfaces__msg__Contact *
ros_ign_interfaces__msg__Contact__create()
{
  ros_ign_interfaces__msg__Contact * msg = (ros_ign_interfaces__msg__Contact *)malloc(sizeof(ros_ign_interfaces__msg__Contact));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ign_interfaces__msg__Contact));
  bool success = ros_ign_interfaces__msg__Contact__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros_ign_interfaces__msg__Contact__destroy(ros_ign_interfaces__msg__Contact * msg)
{
  if (msg) {
    ros_ign_interfaces__msg__Contact__fini(msg);
  }
  free(msg);
}


bool
ros_ign_interfaces__msg__Contact__Sequence__init(ros_ign_interfaces__msg__Contact__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros_ign_interfaces__msg__Contact * data = NULL;
  if (size) {
    data = (ros_ign_interfaces__msg__Contact *)calloc(size, sizeof(ros_ign_interfaces__msg__Contact));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ign_interfaces__msg__Contact__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ign_interfaces__msg__Contact__fini(&data[i - 1]);
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
ros_ign_interfaces__msg__Contact__Sequence__fini(ros_ign_interfaces__msg__Contact__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_ign_interfaces__msg__Contact__fini(&array->data[i]);
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

ros_ign_interfaces__msg__Contact__Sequence *
ros_ign_interfaces__msg__Contact__Sequence__create(size_t size)
{
  ros_ign_interfaces__msg__Contact__Sequence * array = (ros_ign_interfaces__msg__Contact__Sequence *)malloc(sizeof(ros_ign_interfaces__msg__Contact__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros_ign_interfaces__msg__Contact__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros_ign_interfaces__msg__Contact__Sequence__destroy(ros_ign_interfaces__msg__Contact__Sequence * array)
{
  if (array) {
    ros_ign_interfaces__msg__Contact__Sequence__fini(array);
  }
  free(array);
}

bool
ros_ign_interfaces__msg__Contact__Sequence__are_equal(const ros_ign_interfaces__msg__Contact__Sequence * lhs, const ros_ign_interfaces__msg__Contact__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ign_interfaces__msg__Contact__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ign_interfaces__msg__Contact__Sequence__copy(
  const ros_ign_interfaces__msg__Contact__Sequence * input,
  ros_ign_interfaces__msg__Contact__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ign_interfaces__msg__Contact);
    ros_ign_interfaces__msg__Contact * data =
      (ros_ign_interfaces__msg__Contact *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ign_interfaces__msg__Contact__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_ign_interfaces__msg__Contact__fini(&data[i]);
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
    if (!ros_ign_interfaces__msg__Contact__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
