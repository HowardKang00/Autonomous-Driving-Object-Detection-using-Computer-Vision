// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolobot_algo:msg/InferenceResult.idl
// generated code does not contain a copyright notice

#ifndef YOLOBOT_ALGO__MSG__DETAIL__INFERENCE_RESULT__STRUCT_H_
#define YOLOBOT_ALGO__MSG__DETAIL__INFERENCE_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/InferenceResult in the package yolobot_algo.
typedef struct yolobot_algo__msg__InferenceResult
{
  rosidl_runtime_c__String class_name;
  int64_t top;
  int64_t left;
  int64_t bottom;
  int64_t right;
} yolobot_algo__msg__InferenceResult;

// Struct for a sequence of yolobot_algo__msg__InferenceResult.
typedef struct yolobot_algo__msg__InferenceResult__Sequence
{
  yolobot_algo__msg__InferenceResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolobot_algo__msg__InferenceResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOBOT_ALGO__MSG__DETAIL__INFERENCE_RESULT__STRUCT_H_
