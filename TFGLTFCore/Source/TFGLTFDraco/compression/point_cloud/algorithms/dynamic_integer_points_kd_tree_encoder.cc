// Copyright 2016 The Draco Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#include "TFGLTFDraco/compression/point_cloud/algorithms/dynamic_integer_points_kd_tree_encoder.h"

#include "TFGLTFDraco/compression/point_cloud/algorithms/point_cloud_types.h"

namespace draco {

template class DynamicIntegerPointsKdTreeEncoder<0>;
template class DynamicIntegerPointsKdTreeEncoder<2>;
template class DynamicIntegerPointsKdTreeEncoder<4>;
template class DynamicIntegerPointsKdTreeEncoder<6>;

}  // namespace draco
