// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_ign_interfaces:srv/SpawnEntity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_ign_interfaces/srv/detail/spawn_entity__rosidl_typesupport_introspection_c.h"
#include "ros_ign_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_ign_interfaces/srv/detail/spawn_entity__functions.h"
#include "ros_ign_interfaces/srv/detail/spawn_entity__struct.h"


// Include directives for member types
// Member `entity_factory`
#include "ros_ign_interfaces/msg/entity_factory.h"
// Member `entity_factory`
#include "ros_ign_interfaces/msg/detail/entity_factory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_ign_interfaces__srv__SpawnEntity_Request__init(message_memory);
}

void SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_fini_function(void * message_memory)
{
  ros_ign_interfaces__srv__SpawnEntity_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_member_array[1] = {
  {
    "entity_factory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ign_interfaces__srv__SpawnEntity_Request, entity_factory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_members = {
  "ros_ign_interfaces__srv",  // message namespace
  "SpawnEntity_Request",  // message name
  1,  // number of fields
  sizeof(ros_ign_interfaces__srv__SpawnEntity_Request),
  SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_member_array,  // message members
  SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_type_support_handle = {
  0,
  &SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_ign_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ign_interfaces, srv, SpawnEntity_Request)() {
  SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ign_interfaces, msg, EntityFactory)();
  if (!SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_type_support_handle.typesupport_identifier) {
    SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_ign_interfaces/srv/detail/spawn_entity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_ign_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_ign_interfaces/srv/detail/spawn_entity__functions.h"
// already included above
// #include "ros_ign_interfaces/srv/detail/spawn_entity__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_ign_interfaces__srv__SpawnEntity_Response__init(message_memory);
}

void SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_fini_function(void * message_memory)
{
  ros_ign_interfaces__srv__SpawnEntity_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ign_interfaces__srv__SpawnEntity_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_message_members = {
  "ros_ign_interfaces__srv",  // message namespace
  "SpawnEntity_Response",  // message name
  1,  // number of fields
  sizeof(ros_ign_interfaces__srv__SpawnEntity_Response),
  SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_message_member_array,  // message members
  SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_message_type_support_handle = {
  0,
  &SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_ign_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ign_interfaces, srv, SpawnEntity_Response)() {
  if (!SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_message_type_support_handle.typesupport_identifier) {
    SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_ign_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros_ign_interfaces/srv/detail/spawn_entity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros_ign_interfaces__srv__detail__spawn_entity__rosidl_typesupport_introspection_c__SpawnEntity_service_members = {
  "ros_ign_interfaces__srv",  // service namespace
  "SpawnEntity",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ros_ign_interfaces__srv__detail__spawn_entity__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_type_support_handle,
  NULL  // response message
  // ros_ign_interfaces__srv__detail__spawn_entity__rosidl_typesupport_introspection_c__SpawnEntity_Response_message_type_support_handle
};

static rosidl_service_type_support_t ros_ign_interfaces__srv__detail__spawn_entity__rosidl_typesupport_introspection_c__SpawnEntity_service_type_support_handle = {
  0,
  &ros_ign_interfaces__srv__detail__spawn_entity__rosidl_typesupport_introspection_c__SpawnEntity_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ign_interfaces, srv, SpawnEntity_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ign_interfaces, srv, SpawnEntity_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_ign_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ign_interfaces, srv, SpawnEntity)() {
  if (!ros_ign_interfaces__srv__detail__spawn_entity__rosidl_typesupport_introspection_c__SpawnEntity_service_type_support_handle.typesupport_identifier) {
    ros_ign_interfaces__srv__detail__spawn_entity__rosidl_typesupport_introspection_c__SpawnEntity_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros_ign_interfaces__srv__detail__spawn_entity__rosidl_typesupport_introspection_c__SpawnEntity_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ign_interfaces, srv, SpawnEntity_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ign_interfaces, srv, SpawnEntity_Response)()->data;
  }

  return &ros_ign_interfaces__srv__detail__spawn_entity__rosidl_typesupport_introspection_c__SpawnEntity_service_type_support_handle;
}
