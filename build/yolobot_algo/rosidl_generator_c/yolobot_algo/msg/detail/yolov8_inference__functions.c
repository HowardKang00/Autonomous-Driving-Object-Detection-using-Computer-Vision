// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yolobot_algo:msg/Yolov8Inference.idl
// generated code does not contain a copyright notice
#include "yolobot_algo/msg/detail/yolov8_inference__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `yolov8_inference`
#include "yolobot_algo/msg/detail/inference_result__functions.h"

bool
yolobot_algo__msg__Yolov8Inference__init(yolobot_algo__msg__Yolov8Inference * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    yolobot_algo__msg__Yolov8Inference__fini(msg);
    return false;
  }
  // yolov8_inference
  if (!yolobot_algo__msg__InferenceResult__Sequence__init(&msg->yolov8_inference, 0)) {
    yolobot_algo__msg__Yolov8Inference__fini(msg);
    return false;
  }
  return true;
}

void
yolobot_algo__msg__Yolov8Inference__fini(yolobot_algo__msg__Yolov8Inference * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // yolov8_inference
  yolobot_algo__msg__InferenceResult__Sequence__fini(&msg->yolov8_inference);
}

bool
yolobot_algo__msg__Yolov8Inference__are_equal(const yolobot_algo__msg__Yolov8Inference * lhs, const yolobot_algo__msg__Yolov8Inference * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // yolov8_inference
  if (!yolobot_algo__msg__InferenceResult__Sequence__are_equal(
      &(lhs->yolov8_inference), &(rhs->yolov8_inference)))
  {
    return false;
  }
  return true;
}

bool
yolobot_algo__msg__Yolov8Inference__copy(
  const yolobot_algo__msg__Yolov8Inference * input,
  yolobot_algo__msg__Yolov8Inference * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // yolov8_inference
  if (!yolobot_algo__msg__InferenceResult__Sequence__copy(
      &(input->yolov8_inference), &(output->yolov8_inference)))
  {
    return false;
  }
  return true;
}

yolobot_algo__msg__Yolov8Inference *
yolobot_algo__msg__Yolov8Inference__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolobot_algo__msg__Yolov8Inference * msg = (yolobot_algo__msg__Yolov8Inference *)allocator.allocate(sizeof(yolobot_algo__msg__Yolov8Inference), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yolobot_algo__msg__Yolov8Inference));
  bool success = yolobot_algo__msg__Yolov8Inference__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yolobot_algo__msg__Yolov8Inference__destroy(yolobot_algo__msg__Yolov8Inference * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yolobot_algo__msg__Yolov8Inference__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yolobot_algo__msg__Yolov8Inference__Sequence__init(yolobot_algo__msg__Yolov8Inference__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolobot_algo__msg__Yolov8Inference * data = NULL;

  if (size) {
    data = (yolobot_algo__msg__Yolov8Inference *)allocator.zero_allocate(size, sizeof(yolobot_algo__msg__Yolov8Inference), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yolobot_algo__msg__Yolov8Inference__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yolobot_algo__msg__Yolov8Inference__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
yolobot_algo__msg__Yolov8Inference__Sequence__fini(yolobot_algo__msg__Yolov8Inference__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      yolobot_algo__msg__Yolov8Inference__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

yolobot_algo__msg__Yolov8Inference__Sequence *
yolobot_algo__msg__Yolov8Inference__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolobot_algo__msg__Yolov8Inference__Sequence * array = (yolobot_algo__msg__Yolov8Inference__Sequence *)allocator.allocate(sizeof(yolobot_algo__msg__Yolov8Inference__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yolobot_algo__msg__Yolov8Inference__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yolobot_algo__msg__Yolov8Inference__Sequence__destroy(yolobot_algo__msg__Yolov8Inference__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yolobot_algo__msg__Yolov8Inference__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yolobot_algo__msg__Yolov8Inference__Sequence__are_equal(const yolobot_algo__msg__Yolov8Inference__Sequence * lhs, const yolobot_algo__msg__Yolov8Inference__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yolobot_algo__msg__Yolov8Inference__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yolobot_algo__msg__Yolov8Inference__Sequence__copy(
  const yolobot_algo__msg__Yolov8Inference__Sequence * input,
  yolobot_algo__msg__Yolov8Inference__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yolobot_algo__msg__Yolov8Inference);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yolobot_algo__msg__Yolov8Inference * data =
      (yolobot_algo__msg__Yolov8Inference *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yolobot_algo__msg__Yolov8Inference__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yolobot_algo__msg__Yolov8Inference__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yolobot_algo__msg__Yolov8Inference__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
