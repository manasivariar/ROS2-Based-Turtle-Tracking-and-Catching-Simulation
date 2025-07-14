// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_robot_interfaces:msg/Turtle.idl
// generated code does not contain a copyright notice

#include "my_robot_interfaces/msg/detail/turtle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__msg__Turtle__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa6, 0xd7, 0x4f, 0x17, 0x7f, 0x7e, 0x62, 0x5a,
      0x47, 0xba, 0x1a, 0x4c, 0x77, 0xa0, 0x8f, 0x96,
      0x5d, 0x20, 0x10, 0xe0, 0x37, 0x18, 0xbf, 0x09,
      0xba, 0x44, 0x99, 0x67, 0x1e, 0x62, 0x86, 0x12,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_robot_interfaces__msg__Turtle__TYPE_NAME[] = "my_robot_interfaces/msg/Turtle";

// Define type names, field names, and default values
static char my_robot_interfaces__msg__Turtle__FIELD_NAME__turtle_name[] = "turtle_name";
static char my_robot_interfaces__msg__Turtle__FIELD_NAME__x[] = "x";
static char my_robot_interfaces__msg__Turtle__FIELD_NAME__y[] = "y";
static char my_robot_interfaces__msg__Turtle__FIELD_NAME__theta[] = "theta";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__msg__Turtle__FIELDS[] = {
  {
    {my_robot_interfaces__msg__Turtle__FIELD_NAME__turtle_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__msg__Turtle__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__msg__Turtle__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__msg__Turtle__FIELD_NAME__theta, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__msg__Turtle__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__msg__Turtle__TYPE_NAME, 30, 30},
      {my_robot_interfaces__msg__Turtle__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string turtle_name\n"
  "float64 x\n"
  "float64 y\n"
  "float64 theta";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__msg__Turtle__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__msg__Turtle__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 52, 52},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__msg__Turtle__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__msg__Turtle__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
