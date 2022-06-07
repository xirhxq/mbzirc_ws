// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_ign_interfaces:srv/ControlWorld.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_ign_interfaces/srv/detail/control_world__rosidl_typesupport_introspection_c.h"
#include "ros_ign_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_ign_interfaces/srv/detail/control_world__functions.h"
#include "ros_ign_interfaces/srv/detail/control_world__struct.h"


// Include directives for member types
// Member `world_control`
#include "ros_ign_interfaces/msg/world_control.h"
// Member `world_control`
#include "ros_ign_interfaces/msg/detail/world_control__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ControlWorld_Request__rosidl_typesupport_introspection_c__ControlWorld_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_ign_interfaces__srv__ControlWorld_Request__init(message_memory);
}

void ControlWorld_Request__rosidl_typesupport_introspection_c__ControlWorld_Request_fini_function(void * message_memory)
{
  ros_ign_interfaces__srv__ControlWorld_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ControlWorld_Request__rosidl_typesupport_introspection_c__ControlWorld_Request_message_member_array[1] = {
  {
    "world_control",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ign_interfaces__srv__ControlWorld_Request, world_control),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ControlWorld_Request__rosidl_typesupport_introspection_c__ControlWorld_Request_message_members = {
  "ros_ign_interfaces__srv",  // message namespace
  "ControlWorld_Request",  // message name
  1,  // number of fields
  sizeof(ros_ign_interfaces__srv__ControlWorld_Request),
  ControlWorld_Request__rosidl_typesupport_introspection_c__ControlWorld_Request_message_member_array,  // message members
  ControlWorld_Request__rosidl_typesupport_introspection_c__ControlWorld_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ControlWorld_Request__rosidl_typesupport_introspection_c__ControlWorld_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ControlWorld_Request__rosidl_typesupport_introspection_c__ControlWorld_Request_message_type_support_handle = {
  0,
  &ControlWorld_Request__rosidl_typesupport_introspection_c__ControlWorld_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_ign_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ign_interfaces, srv, ControlWorld_Request)() {
  ControlWorld_Request__rosidl_typesupport_introspection_c__ControlWorld_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ign_interfaces, msg, WorldControl)();
  if (!ControlWorld_Request__rosidl_typesupport_introspection_c__ControlWorld_Request_message_type_support_handle.typesupport_identifier) {
    ControlWorld_Request__rosidl_typesupport_introspection_c__ControlWorld_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ControlWorld_Request__rosidl_typesupport_introspection_c__ControlWorld_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_ign_interfaces/srv/detail/control_world__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_ign_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_ign_interfaces/srv/detail/control_world__functions.h"
// already included above
// #include "ros_ign_interfaces/srv/detail/control_world__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ControlWorld_Response__rosidl_typesupport_introspection_c__ControlWorld_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_ign_interfaces__srv__ControlWorld_Response__init(message_memory);
}

void ControlWorld_Response__rosidl_typesupport_introspection_c__ControlWorld_Response_fini_function(void * message_memory)
{
  ros_ign_interfaces__srv__ControlWorld_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ControlWorld_Response__rosidl_typesupport_introspection_c__ControlWorld_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ign_interfaces__srv__ControlWorld_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ControlWorld_Response__rosidl_typesupport_introspection_c__ControlWorld_Response_message_members = {
  "ros_ign_interfaces__srv",  // message namespace
  "ControlWorld_Response",  // message name
  1,  // number of fields
  sizeof(ros_ign_interfaces__srv__ControlWorld_Response),
  ControlWorld_Response__rosidl_typesupport_introspection_c__ControlWorld_Response_message_member_array,  // message members
  ControlWorld_Response__rosidl_typesupport_introspection_c__ControlWorld_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ControlWorld_Response__rosidl_typesupport_introspection_c__ControlWorld_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ControlWorld_Response__rosidl_typesupport_introspection_c__ControlWorld_Response_message_type_support_handle = {
  0,
  &ControlWorld_Response__rosidl_typesupport_introspection_c__ControlWorld_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_ign_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ign_interfaces, srv, ControlWorld_Response)() {
  if (!ControlWorld_Response__rosidl_typesupport_introspection_c__ControlWorld_Response_message_type_support_handle.typesupport_identifier) {
    ControlWorld_Response__rosidl_typesupport_introspection_c__ControlWorld_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ControlWorld_Response__rosidl_typesupport_introspection_c__ControlWorld_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_ign_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros_ign_interfaces/srv/detail/control_world__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros_ign_interfaces__srv__detail__control_world__rosidl_typesupport_introspection_c__ControlWorld_service_members = {
  "ros_ign_interfaces__srv",  // service namespace
  "ControlWorld",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ros_ign_interfaces__srv__detail__control_world__rosidl_typesupport_introspection_c__ControlWorld_Request_message_type_support_handle,
  NULL  // response message
  // ros_ign_interfaces__srv__detail__control_world__rosidl_typesupport_introspection_c__ControlWorld_Response_message_type_support_handle
};

static rosidl_service_type_support_t ros_ign_interfaces__srv__detail__control_world__rosidl_typesupport_introspection_c__ControlWorld_service_type_support_handle = {
  0,
  &ros_ign_interfaces__srv__detail__control_world__rosidl_typesupport_introspection_c__ControlWorld_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ign_interfaces, srv, ControlWorld_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ign_interfaces, srv, ControlWorld_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_ign_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ign_interfaces, srv, ControlWorld)() {
  if (!ros_ign_interfaces__srv__detail__control_world__rosidl_typesupport_introspection_c__ControlWorld_service_type_support_handle.typesupport_identifier) {
    ros_ign_interfaces__srv__detail__control_world__rosidl_typesupport_introspection_c__ControlWorld_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros_ign_interfaces__srv__detail__control_world__rosidl_typesupport_introspection_c__ControlWorld_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ign_interfaces, srv, ControlWorld_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ign_interfaces, srv, ControlWorld_Response)()->data;
  }

  return &ros_ign_interfaces__srv__detail__control_world__rosidl_typesupport_introspection_c__ControlWorld_service_type_support_handle;
}
