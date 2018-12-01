#include "include/mocka.hpp"
#include "../include/class_A.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

using ::testing::AtLeast;
TEST(PainterTest, CanDrawSomething) {
  mockClass turtle;
  EXPECT_CALL(turtle, producta()).Times(1);
  turtle.producta();
}
