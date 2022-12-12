#include "../../include/demo.hpp"
#include <gtest/gtest.h>

TEST(DemoTest, AddFunctionCall) {
    EXPECT_EQ(add(449, 1), 450);
    EXPECT_NE(add(45, 5), 30);
}

TEST(DemoTest, LengthStrCall) {
    EXPECT_EQ(length_str("This demo"), 9);
    EXPECT_NE(length_str("Hello, World?"), 5);
}