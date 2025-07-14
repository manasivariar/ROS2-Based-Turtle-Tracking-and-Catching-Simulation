// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_robot_interfaces:msg/TurtleList.idl
// generated code does not contain a copyright notice

#include "my_robot_interfaces/msg/detail/turtle_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__msg__TurtleList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0x25, 0xa2, 0xef, 0xce, 0x08, 0x25, 0xef,
      0x35, 0x3b, 0x1e, 0xf1, 0xe5, 0x15, 0x02, 0x57,
      0x9e, 0x93, 0x28, 0x6f, 0x15, 0xcb, 0x59, 0xf5,
      0x20, 0xfb, 0x1f, 0x35, 0xfc, 0xa5, 0x98, 0xdd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "my_robot_interfaces/msg/detail/turtle__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t my_robot_interfaces__msg__Turtle__EXPECTED_HASH = {1, {
    0xa6, 0xd7, 0x4f, 0x17, 0x7f, 0x7e, 0x62, 0x5a,
    0x47, 0xba, 0x1a, 0x4c, 0x77, 0xa0, 0x8f, 0x96,
    0x5d, 0x20, 0x10, 0xe0, 0x37, 0x18, 0xbf, 0x09,
    0xba, 0x44, 0x99, 0x67, 0x1e, 0x62, 0x86, 0x12,
  }};
#endif

static char my_robot_interfaces__msg__TurtleList__TYPE_NAME[] = "my_robot_interfaces/msg/TurtleList";
static char my_robot_interfaces__msg__Turtle__TYPE_NAME[] = "my_robot_interfaces/msg/Turtle";

// Define type names, field names, and default values
static char my_robot_interfaces__msg__TurtleList__FIELD_NAME__turtle_list[] = "turtle_list";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__msg__TurtleList__FIELDS[] = {
  {
    {my_robot_interfaces__msg__TurtleList__FIELD_NAME__turtle_list, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {my_robot_interfaces__msg__Turtle__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_robot_interfaces__msg__TurtleList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {my_robot_interfaces__msg__Turtle__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__msg__TurtleList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__msg__TurtleList__TYPE_NAME, 34, 34},
      {my_robot_interfaces__msg__TurtleList__FIELDS, 1, 1},
    },
    {my_robot_interfaces__msg__TurtleList__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&my_robot_interfaces__msg__Turtle__EXPECTED_HASH, my_robot_interfaces__msg__Turtle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = my_robot_interfaces__msg__Turtle__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "Turtle[] turtle_list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__msg__TurtleList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__msg__TurtleList__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 20, 20},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__msg__TurtleList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__msg__TurtleList__get_individual_type_description_source(NULL),
    sources[1] = *my_robot_interfaces__msg__Turtle__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
