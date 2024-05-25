// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from yolobot_algo:msg/InferenceResult.idl
// generated code does not contain a copyright notice

#ifndef YOLOBOT_ALGO__MSG__DETAIL__INFERENCE_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define YOLOBOT_ALGO__MSG__DETAIL__INFERENCE_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "yolobot_algo/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "yolobot_algo/msg/detail/inference_result__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace yolobot_algo
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolobot_algo
cdr_serialize(
  const yolobot_algo::msg::InferenceResult & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolobot_algo
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  yolobot_algo::msg::InferenceResult & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolobot_algo
get_serialized_size(
  const yolobot_algo::msg::InferenceResult & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolobot_algo
max_serialized_size_InferenceResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace yolobot_algo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolobot_algo
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yolobot_algo, msg, InferenceResult)();

#ifdef __cplusplus
}
#endif

#endif  // YOLOBOT_ALGO__MSG__DETAIL__INFERENCE_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
