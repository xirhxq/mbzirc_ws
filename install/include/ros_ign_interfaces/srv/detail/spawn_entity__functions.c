// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_ign_interfaces:srv/SpawnEntity.idl
// generated code does not contain a copyright notice
#include "ros_ign_interfaces/srv/detail/spawn_entity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `entity_factory`
#include "ros_ign_interfaces/msg/detail/entity_factory__functions.h"

bool
ros_ign_interfaces__srv__SpawnEntity_Request__init(ros_ign_interfaces__srv__SpawnEntity_Request * msg)
{
  if (!msg) {
    return false;
  }
  // entity_factory
  if (!ros_ign_interfaces__msg__EntityFactory__init(&msg->entity_factory)) {
    ros_ign_interfaces__srv__SpawnEntity_Request__fini(msg);
    return false;
  }
  return true;
}

void
ros_ign_interfaces__srv__SpawnEntity_Request__fini(ros_ign_interfaces__srv__SpawnEntity_Request * msg)
{
  if (!msg) {
    return;
  }
  // entity_factory
  ros_ign_interfaces__msg__EntityFactory__fini(&msg->entity_factory);
}

bool
ros_ign_interfaces__srv__SpawnEntity_Request__are_equal(const ros_ign_interfaces__srv__SpawnEntity_Request * lhs, const ros_ign_interfaces__srv__SpawnEntity_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // entity_factory
  if (!ros_ign_interfaces__msg__EntityFactory__are_equal(
      &(lhs->entity_factory), &(rhs->entity_factory)))
  {
    return false;
  }
  return true;
}

bool
ros_ign_interfaces__srv__SpawnEntity_Request__copy(
  const ros_ign_interfaces__srv__SpawnEntity_Request * input,
  ros_ign_interfaces__srv__SpawnEntity_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // entity_factory
  if (!ros_ign_interfaces__msg__EntityFactory__copy(
      &(input->entity_factory), &(output->entity_factory)))
  {
    return false;
  }
  return true;
}

ros_ign_interfaces__srv__SpawnEntity_Request *
ros_ign_interfaces__srv__SpawnEntity_Request__create()
{
  ros_ign_interfaces__srv__SpawnEntity_Request * msg = (ros_ign_interfaces__srv__SpawnEntity_Request *)malloc(sizeof(ros_ign_interfaces__srv__SpawnEntity_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ign_interfaces__srv__SpawnEntity_Request));
  bool success = ros_ign_interfaces__srv__SpawnEntity_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros_ign_interfaces__srv__SpawnEntity_Request__destroy(ros_ign_interfaces__srv__SpawnEntity_Request * msg)
{
  if (msg) {
    ros_ign_interfaces__srv__SpawnEntity_Request__fini(msg);
  }
  free(msg);
}


bool
ros_ign_interfaces__srv__SpawnEntity_Request__Sequence__init(ros_ign_interfaces__srv__SpawnEntity_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros_ign_interfaces__srv__SpawnEntity_Request * data = NULL;
  if (size) {
    data = (ros_ign_interfaces__srv__SpawnEntity_Request *)calloc(size, sizeof(ros_ign_interfaces__srv__SpawnEntity_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ign_interfaces__srv__SpawnEntity_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ign_interfaces__srv__SpawnEntity_Request__fini(&data[i - 1]);
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
ros_ign_interfaces__srv__SpawnEntity_Request__Sequence__fini(ros_ign_interfaces__srv__SpawnEntity_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_ign_interfaces__srv__SpawnEntity_Request__fini(&array->data[i]);
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

ros_ign_interfaces__srv__SpawnEntity_Request__Sequence *
ros_ign_interfaces__srv__SpawnEntity_Request__Sequence__create(size_t size)
{
  ros_ign_interfaces__srv__SpawnEntity_Request__Sequence * array = (ros_ign_interfaces__srv__SpawnEntity_Request__Sequence *)malloc(sizeof(ros_ign_interfaces__srv__SpawnEntity_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros_ign_interfaces__srv__SpawnEntity_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros_ign_interfaces__srv__SpawnEntity_Request__Sequence__destroy(ros_ign_interfaces__srv__SpawnEntity_Request__Sequence * array)
{
  if (array) {
    ros_ign_interfaces__srv__SpawnEntity_Request__Sequence__fini(array);
  }
  free(array);
}

bool
ros_ign_interfaces__srv__SpawnEntity_Request__Sequence__are_equal(const ros_ign_interfaces__srv__SpawnEntity_Request__Sequence * lhs, const ros_ign_interfaces__srv__SpawnEntity_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ign_interfaces__srv__SpawnEntity_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ign_interfaces__srv__SpawnEntity_Request__Sequence__copy(
  const ros_ign_interfaces__srv__SpawnEntity_Request__Sequence * input,
  ros_ign_interfaces__srv__SpawnEntity_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ign_interfaces__srv__SpawnEntity_Request);
    ros_ign_interfaces__srv__SpawnEntity_Request * data =
      (ros_ign_interfaces__srv__SpawnEntity_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ign_interfaces__srv__SpawnEntity_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_ign_interfaces__srv__SpawnEntity_Request__fini(&data[i]);
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
    if (!ros_ign_interfaces__srv__SpawnEntity_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ros_ign_interfaces__srv__SpawnEntity_Response__init(ros_ign_interfaces__srv__SpawnEntity_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
ros_ign_interfaces__srv__SpawnEntity_Response__fini(ros_ign_interfaces__srv__SpawnEntity_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
ros_ign_interfaces__srv__SpawnEntity_Response__are_equal(const ros_ign_interfaces__srv__SpawnEntity_Response * lhs, const ros_ign_interfaces__srv__SpawnEntity_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
ros_ign_interfaces__srv__SpawnEntity_Response__copy(
  const ros_ign_interfaces__srv__SpawnEntity_Response * input,
  ros_ign_interfaces__srv__SpawnEntity_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

ros_ign_interfaces__srv__SpawnEntity_Response *
ros_ign_interfaces__srv__SpawnEntity_Response__create()
{
  ros_ign_interfaces__srv__SpawnEntity_Response * msg = (ros_ign_interfaces__srv__SpawnEntity_Response *)malloc(sizeof(ros_ign_interfaces__srv__SpawnEntity_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ign_interfaces__srv__SpawnEntity_Response));
  bool success = ros_ign_interfaces__srv__SpawnEntity_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros_ign_interfaces__srv__SpawnEntity_Response__destroy(ros_ign_interfaces__srv__SpawnEntity_Response * msg)
{
  if (msg) {
    ros_ign_interfaces__srv__SpawnEntity_Response__fini(msg);
  }
  free(msg);
}


bool
ros_ign_interfaces__srv__SpawnEntity_Response__Sequence__init(ros_ign_interfaces__srv__SpawnEntity_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros_ign_interfaces__srv__SpawnEntity_Response * data = NULL;
  if (size) {
    data = (ros_ign_interfaces__srv__SpawnEntity_Response *)calloc(size, sizeof(ros_ign_interfaces__srv__SpawnEntity_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ign_interfaces__srv__SpawnEntity_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ign_interfaces__srv__SpawnEntity_Response__fini(&data[i - 1]);
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
ros_ign_interfaces__srv__SpawnEntity_Response__Sequence__fini(ros_ign_interfaces__srv__SpawnEntity_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_ign_interfaces__srv__SpawnEntity_Response__fini(&array->data[i]);
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

ros_ign_interfaces__srv__SpawnEntity_Response__Sequence *
ros_ign_interfaces__srv__SpawnEntity_Response__Sequence__create(size_t size)
{
  ros_ign_interfaces__srv__SpawnEntity_Response__Sequence * array = (ros_ign_interfaces__srv__SpawnEntity_Response__Sequence *)malloc(sizeof(ros_ign_interfaces__srv__SpawnEntity_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros_ign_interfaces__srv__SpawnEntity_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros_ign_interfaces__srv__SpawnEntity_Response__Sequence__destroy(ros_ign_interfaces__srv__SpawnEntity_Response__Sequence * array)
{
  if (array) {
    ros_ign_interfaces__srv__SpawnEntity_Response__Sequence__fini(array);
  }
  free(array);
}

bool
ros_ign_interfaces__srv__SpawnEntity_Response__Sequence__are_equal(const ros_ign_interfaces__srv__SpawnEntity_Response__Sequence * lhs, const ros_ign_interfaces__srv__SpawnEntity_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ign_interfaces__srv__SpawnEntity_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ign_interfaces__srv__SpawnEntity_Response__Sequence__copy(
  const ros_ign_interfaces__srv__SpawnEntity_Response__Sequence * input,
  ros_ign_interfaces__srv__SpawnEntity_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ign_interfaces__srv__SpawnEntity_Response);
    ros_ign_interfaces__srv__SpawnEntity_Response * data =
      (ros_ign_interfaces__srv__SpawnEntity_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ign_interfaces__srv__SpawnEntity_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_ign_interfaces__srv__SpawnEntity_Response__fini(&data[i]);
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
    if (!ros_ign_interfaces__srv__SpawnEntity_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
