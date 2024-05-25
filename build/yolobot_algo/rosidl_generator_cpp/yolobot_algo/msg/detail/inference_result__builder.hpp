// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolobot_algo:msg/InferenceResult.idl
// generated code does not contain a copyright notice

#ifndef YOLOBOT_ALGO__MSG__DETAIL__INFERENCE_RESULT__BUILDER_HPP_
#define YOLOBOT_ALGO__MSG__DETAIL__INFERENCE_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolobot_algo/msg/detail/inference_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolobot_algo
{

namespace msg
{

namespace builder
{

class Init_InferenceResult_right
{
public:
  explicit Init_InferenceResult_right(::yolobot_algo::msg::InferenceResult & msg)
  : msg_(msg)
  {}
  ::yolobot_algo::msg::InferenceResult right(::yolobot_algo::msg::InferenceResult::_right_type arg)
  {
    msg_.right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolobot_algo::msg::InferenceResult msg_;
};

class Init_InferenceResult_bottom
{
public:
  explicit Init_InferenceResult_bottom(::yolobot_algo::msg::InferenceResult & msg)
  : msg_(msg)
  {}
  Init_InferenceResult_right bottom(::yolobot_algo::msg::InferenceResult::_bottom_type arg)
  {
    msg_.bottom = std::move(arg);
    return Init_InferenceResult_right(msg_);
  }

private:
  ::yolobot_algo::msg::InferenceResult msg_;
};

class Init_InferenceResult_left
{
public:
  explicit Init_InferenceResult_left(::yolobot_algo::msg::InferenceResult & msg)
  : msg_(msg)
  {}
  Init_InferenceResult_bottom left(::yolobot_algo::msg::InferenceResult::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_InferenceResult_bottom(msg_);
  }

private:
  ::yolobot_algo::msg::InferenceResult msg_;
};

class Init_InferenceResult_top
{
public:
  explicit Init_InferenceResult_top(::yolobot_algo::msg::InferenceResult & msg)
  : msg_(msg)
  {}
  Init_InferenceResult_left top(::yolobot_algo::msg::InferenceResult::_top_type arg)
  {
    msg_.top = std::move(arg);
    return Init_InferenceResult_left(msg_);
  }

private:
  ::yolobot_algo::msg::InferenceResult msg_;
};

class Init_InferenceResult_class_name
{
public:
  Init_InferenceResult_class_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InferenceResult_top class_name(::yolobot_algo::msg::InferenceResult::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_InferenceResult_top(msg_);
  }

private:
  ::yolobot_algo::msg::InferenceResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolobot_algo::msg::InferenceResult>()
{
  return yolobot_algo::msg::builder::Init_InferenceResult_class_name();
}

}  // namespace yolobot_algo

#endif  // YOLOBOT_ALGO__MSG__DETAIL__INFERENCE_RESULT__BUILDER_HPP_
