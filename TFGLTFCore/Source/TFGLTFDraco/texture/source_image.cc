// Copyright 2021 The Draco Authors.
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
#include "TFGLTFDraco/texture/source_image.h"

#ifdef DRACO_TRANSCODER_SUPPORTED

namespace draco {

void SourceImage::Copy(const SourceImage &src) {
  mime_type_ = src.mime_type_;
  filename_ = src.filename_;
  encoded_data_ = src.encoded_data_;
}

}  // namespace draco

#endif  // DRACO_TRANSCODER_SUPPORTED
