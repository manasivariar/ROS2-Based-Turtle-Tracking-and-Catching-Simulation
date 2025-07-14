// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_robot_interfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#include "my_robot_interfaces/srv/detail/catch_turtle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__srv__CatchTurtle__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2f, 0xb7, 0x72, 0x7d, 0x1c, 0xa8, 0x6c, 0xab,
      0xac, 0xdf, 0x22, 0xf1, 0xe1, 0x03, 0x63, 0xac,
      0x98, 0x86, 0x74, 0xe3, 0x46, 0xc5, 0xe9, 0x15,
      0xb2, 0xf3, 0xa3, 0x65, 0x78, 0x1e, 0xd1, 0xbb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__srv__CatchTurtle_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0xd2, 0x93, 0xfe, 0x14, 0x23, 0x8b, 0xcc,
      0x83, 0xa1, 0x9e, 0x3d, 0x2b, 0x9d, 0xb1, 0xf1,
      0x8b, 0xb7, 0x03, 0x24, 0x87, 0x3b, 0xe2, 0x1a,
      0x51, 0xfc, 0xc3, 0x9a, 0xc8, 0x1b, 0xbc, 0x21,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__srv__CatchTurtle_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1c, 0x02, 0xcb, 0xff, 0x20, 0x02, 0x5d, 0x27,
      0xb7, 0x94, 0x18, 0x11, 0x6d, 0xb6, 0x53, 0xcb,
      0xfe, 0xf0, 0xac, 0xdd, 0x8a, 0x76, 0xe7, 0xa9,
      0x41, 0xe7, 0x24, 0xa5, 0xf9, 0xd2, 0xf8, 0xb4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__srv__CatchTurtle_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x82, 0xa6, 0x8c, 0xd6, 0x07, 0x0c, 0x4d, 0x63,
      0x4a, 0xa4, 0xb8, 0x00, 0xd7, 0x28, 0x6e, 0x13,
      0x56, 0xf7, 0x16, 0x8b, 0xce, 0xf6, 0x9f, 0x75,
      0x00, 0x78, 0xf1, 0xaa, 0xd1, 0xa4, 0x9f, 0x1c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char my_robot_interfaces__srv__CatchTurtle__TYPE_NAME[] = "my_robot_interfaces/srv/CatchTurtle";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char my_robot_interfaces__srv__CatchTurtle_Event__TYPE_NAME[] = "my_robot_interfaces/srv/CatchTurtle_Event";
static char my_robot_interfaces__srv__CatchTurtle_Request__TYPE_NAME[] = "my_robot_interfaces/srv/CatchTurtle_Request";
static char my_robot_interfaces__srv__CatchTurtle_Response__TYPE_NAME[] = "my_robot_interfaces/srv/CatchTurtle_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char my_robot_interfaces__srv__CatchTurtle__FIELD_NAME__request_message[] = "request_message";
static char my_robot_interfaces__srv__CatchTurtle__FIELD_NAME__response_message[] = "response_message";
static char my_robot_interfaces__srv__CatchTurtle__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__srv__CatchTurtle__FIELDS[] = {
  {
    {my_robot_interfaces__srv__CatchTurtle__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_robot_interfaces__srv__CatchTurtle_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__srv__CatchTurtle__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_robot_interfaces__srv__CatchTurtle_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__srv__CatchTurtle__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_robot_interfaces__srv__CatchTurtle_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_robot_interfaces__srv__CatchTurtle__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__srv__CatchTurtle_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__srv__CatchTurtle_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__srv__CatchTurtle_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__srv__CatchTurtle__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__srv__CatchTurtle__TYPE_NAME, 35, 35},
      {my_robot_interfaces__srv__CatchTurtle__FIELDS, 3, 3},
    },
    {my_robot_interfaces__srv__CatchTurtle__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = my_robot_interfaces__srv__CatchTurtle_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = my_robot_interfaces__srv__CatchTurtle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = my_robot_interfaces__srv__CatchTurtle_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_robot_interfaces__srv__CatchTurtle_Request__FIELD_NAME__name[] = "name";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__srv__CatchTurtle_Request__FIELDS[] = {
  {
    {my_robot_interfaces__srv__CatchTurtle_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__srv__CatchTurtle_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__srv__CatchTurtle_Request__TYPE_NAME, 43, 43},
      {my_robot_interfaces__srv__CatchTurtle_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_robot_interfaces__srv__CatchTurtle_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__srv__CatchTurtle_Response__FIELDS[] = {
  {
    {my_robot_interfaces__srv__CatchTurtle_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__srv__CatchTurtle_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__srv__CatchTurtle_Response__TYPE_NAME, 44, 44},
      {my_robot_interfaces__srv__CatchTurtle_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_robot_interfaces__srv__CatchTurtle_Event__FIELD_NAME__info[] = "info";
static char my_robot_interfaces__srv__CatchTurtle_Event__FIELD_NAME__request[] = "request";
static char my_robot_interfaces__srv__CatchTurtle_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__srv__CatchTurtle_Event__FIELDS[] = {
  {
    {my_robot_interfaces__srv__CatchTurtle_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__srv__CatchTurtle_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {my_robot_interfaces__srv__CatchTurtle_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__srv__CatchTurtle_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {my_robot_interfaces__srv__CatchTurtle_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_robot_interfaces__srv__CatchTurtle_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__srv__CatchTurtle_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__srv__CatchTurtle_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__srv__CatchTurtle_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__srv__CatchTurtle_Event__TYPE_NAME, 41, 41},
      {my_robot_interfaces__srv__CatchTurtle_Event__FIELDS, 3, 3},
    },
    {my_robot_interfaces__srv__CatchTurtle_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = my_robot_interfaces__srv__CatchTurtle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = my_robot_interfaces__srv__CatchTurtle_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "---\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__srv__CatchTurtle__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__srv__CatchTurtle__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 30, 30},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__srv__CatchTurtle_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__srv__CatchTurtle_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__srv__CatchTurtle_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__srv__CatchTurtle_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__srv__CatchTurtle_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__srv__CatchTurtle_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__srv__CatchTurtle__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__srv__CatchTurtle__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *my_robot_interfaces__srv__CatchTurtle_Event__get_individual_type_description_source(NULL);
    sources[3] = *my_robot_interfaces__srv__CatchTurtle_Request__get_individual_type_description_source(NULL);
    sources[4] = *my_robot_interfaces__srv__CatchTurtle_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__srv__CatchTurtle_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__srv__CatchTurtle_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__srv__CatchTurtle_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__srv__CatchTurtle_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__srv__CatchTurtle_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__srv__CatchTurtle_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *my_robot_interfaces__srv__CatchTurtle_Request__get_individual_type_description_source(NULL);
    sources[3] = *my_robot_interfaces__srv__CatchTurtle_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
