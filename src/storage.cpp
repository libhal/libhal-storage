// Copyright 2024 Khalil Estell
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

#include <libhal-storage/storage.hpp>

namespace hal::storage {
namespace {
int do_something_variable = 0;
}
storage_replace_me::storage_replace_me()
{
  // Do nothing here, but give something to be contained in the .a archive file
  do_something_variable++;
}
}  // namespace hal::storage
