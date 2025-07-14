// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_robot_interfaces:msg/LedPanelState.idl
// generated code does not contain a copyright notice

#include "my_robot_interfaces/msg/detail/led_panel_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__msg__LedPanelState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf0, 0xd9, 0x87, 0x54, 0x64, 0x2b, 0x0a, 0xba,
      0xe5, 0x33, 0xde, 0xb3, 0xb8, 0x98, 0xfe, 0xe6,
      0x8c, 0x5a, 0xa1, 0xc5, 0xb0, 0xba, 0x88, 0x8d,
      0xd4, 0x12, 0x7e, 0x1e, 0x49, 0xcb, 0x12, 0x4a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_robot_interfaces__msg__LedPanelState__TYPE_NAME[] = "my_robot_interfaces/msg/LedPanelState";

// Define type names, field names, and default values
static char my_robot_interfaces__msg__LedPanelState__FIELD_NAME__led_panel_state[] = "led_panel_state";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__msg__LedPanelState__FIELDS[] = {
  {
    {my_robot_interfaces__msg__LedPanelState__FIELD_NAME__led_panel_state, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__msg__LedPanelState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__msg__LedPanelState__TYPE_NAME, 37, 37},
      {my_robot_interfaces__msg__LedPanelState__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64[] led_panel_state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__msg__LedPanelState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__msg__LedPanelState__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 23, 23},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__msg__LedPanelState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__msg__LedPanelState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
