// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_ign_interfaces:msg/WorldReset.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_ign_interfaces/msg/detail/world_reset__rosidl_typesupport_introspection_c.h"
#include "ros_ign_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_ign_interfaces/msg/detail/world_reset__functions.h"
#include "ros_ign_interfaces/msg/detail/world_reset__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void WorldReset__rosidl_typesupport_introspection_c__WorldReset_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_ign_interfaces__msg__WorldReset__init(message_memory);
}

void WorldReset__rosidl_typesupport_introspection_c__WorldReset_fini_function(void * message_memory)
{
  ros_ign_interfaces__msg__WorldReset__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WorldReset__rosidl_typesupport_introspection_c__WorldReset_message_member_array[3] = {
  {
    "all",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ign_interfaces__msg__WorldReset, all),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_only",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ign_interfaces__msg__WorldReset, time_only),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_only",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ign_interfaces__msg__WorldReset, model_only),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WorldReset__rosidl_typesupport_introspection_c__WorldReset_message_members = {
  "ros_ign_interfaces__msg",  // message namespace
  "WorldReset",  // message name
  3,  // number of fields
  sizeof(ros_ign_interfaces__msg__WorldReset),
  WorldReset__rosidl_typesupport_introspection_c__WorldReset_message_member_array,  // message members
  WorldReset__rosidl_typesupport_introspection_c__WorldReset_init_function,  // function to initialize message memory (memory has to be allocated)
  WorldReset__rosidl_typesupport_introspection_c__WorldReset_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WorldReset__rosidl_typesupport_introspection_c__WorldReset_message_type_support_handle = {
  0,
  &WorldReset__rosidl_typesupport_introspection_c__WorldReset_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_ign_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ign_interfaces, msg, WorldReset)() {
  if (!WorldReset__rosidl_typesupport_introspection_c__WorldReset_message_type_support_handle.typesupport_identifier) {
    WorldReset__rosidl_typesupport_introspection_c__WorldReset_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WorldReset__rosidl_typesupport_introspection_c__WorldReset_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
