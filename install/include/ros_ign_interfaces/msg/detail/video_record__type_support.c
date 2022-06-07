// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_ign_interfaces:msg/VideoRecord.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_ign_interfaces/msg/detail/video_record__rosidl_typesupport_introspection_c.h"
#include "ros_ign_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_ign_interfaces/msg/detail/video_record__functions.h"
#include "ros_ign_interfaces/msg/detail/video_record__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `format`
// Member `save_filename`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VideoRecord__rosidl_typesupport_introspection_c__VideoRecord_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_ign_interfaces__msg__VideoRecord__init(message_memory);
}

void VideoRecord__rosidl_typesupport_introspection_c__VideoRecord_fini_function(void * message_memory)
{
  ros_ign_interfaces__msg__VideoRecord__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VideoRecord__rosidl_typesupport_introspection_c__VideoRecord_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ign_interfaces__msg__VideoRecord, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ign_interfaces__msg__VideoRecord, start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ign_interfaces__msg__VideoRecord, stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "format",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ign_interfaces__msg__VideoRecord, format),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "save_filename",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ign_interfaces__msg__VideoRecord, save_filename),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VideoRecord__rosidl_typesupport_introspection_c__VideoRecord_message_members = {
  "ros_ign_interfaces__msg",  // message namespace
  "VideoRecord",  // message name
  5,  // number of fields
  sizeof(ros_ign_interfaces__msg__VideoRecord),
  VideoRecord__rosidl_typesupport_introspection_c__VideoRecord_message_member_array,  // message members
  VideoRecord__rosidl_typesupport_introspection_c__VideoRecord_init_function,  // function to initialize message memory (memory has to be allocated)
  VideoRecord__rosidl_typesupport_introspection_c__VideoRecord_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VideoRecord__rosidl_typesupport_introspection_c__VideoRecord_message_type_support_handle = {
  0,
  &VideoRecord__rosidl_typesupport_introspection_c__VideoRecord_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_ign_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ign_interfaces, msg, VideoRecord)() {
  VideoRecord__rosidl_typesupport_introspection_c__VideoRecord_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!VideoRecord__rosidl_typesupport_introspection_c__VideoRecord_message_type_support_handle.typesupport_identifier) {
    VideoRecord__rosidl_typesupport_introspection_c__VideoRecord_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VideoRecord__rosidl_typesupport_introspection_c__VideoRecord_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
