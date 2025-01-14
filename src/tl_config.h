/*
 * Copyright (c) 2021, NVIDIA CORPORATION.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <names.h>

#include <string>

namespace triton { namespace backend { namespace NAMESPACE {

struct treelite_config {
  std::string algo;
  bool output_class;
  float threshold;
  std::string storage_type;
  int blocks_per_sm;
  int threads_per_tree;
};

}}}  // namespace triton::backend::NAMESPACE
