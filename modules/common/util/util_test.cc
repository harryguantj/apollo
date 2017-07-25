/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#include "modules/common/util/util.h"
#include "gtest/gtest.h"

namespace apollo {
namespace common {
namespace util {

TEST(UtilTest, EndWith) {
  EXPECT_TRUE(EndWith("abc.def", "def"));
  EXPECT_TRUE(EndWith("abc.def", ".def"));
  EXPECT_FALSE(EndWith("abc.def", "abc"));
  EXPECT_FALSE(EndWith("abc.def", "de"));
}

TEST(UtilTest, StrCat) {
  EXPECT_EQ(StrCat("string", "32"), "string32");  // string, string
  EXPECT_EQ(StrCat("string", 32, 3.2f), "string323.2");  // string, int, float
  EXPECT_EQ(StrCat(3.2, ' ', true), "3.2 1");  // double, char, bool
}

}  // namespace util
}  // namespace common
}  // namespace apollo
