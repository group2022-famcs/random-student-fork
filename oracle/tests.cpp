#include "oracle.h"

#include <gtest/gtest.h>

TEST(Oracle, Answer) {
  Oracle oracle;
  EXPECT_EQ(oracle.GiveTheAnswer(), 42);
}