// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolobot_algo:msg/Yolov8Inference.idl
// generated code does not contain a copyright notice

#ifndef YOLOBOT_ALGO__MSG__DETAIL__YOLOV8_INFERENCE__BUILDER_HPP_
#define YOLOBOT_ALGO__MSG__DETAIL__YOLOV8_INFERENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolobot_algo/msg/detail/yolov8_inference__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolobot_algo
{

namespace msg
{

namespace builder
{

class Init_Yolov8Inference_yolov8_inference
{
public:
  explicit Init_Yolov8Inference_yolov8_inference(::yolobot_algo::msg::Yolov8Inference & msg)
  : msg_(msg)
  {}
  ::yolobot_algo::msg::Yolov8Inference yolov8_inference(::yolobot_algo::msg::Yolov8Inference::_yolov8_inference_type arg)
  {
    msg_.yolov8_inference = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolobot_algo::msg::Yolov8Inference msg_;
};

class Init_Yolov8Inference_header
{
public:
  Init_Yolov8Inference_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Yolov8Inference_yolov8_inference header(::yolobot_algo::msg::Yolov8Inference::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Yolov8Inference_yolov8_inference(msg_);
  }

private:
  ::yolobot_algo::msg::Yolov8Inference msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolobot_algo::msg::Yolov8Inference>()
{
  return yolobot_algo::msg::builder::Init_Yolov8Inference_header();
}

}  // namespace yolobot_algo

#endif  // YOLOBOT_ALGO__MSG__DETAIL__YOLOV8_INFERENCE__BUILDER_HPP_
