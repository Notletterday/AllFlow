#include <gtest/gtest.h>

// 示例函数：计算两个整数的和
int add(int a, int b) {
    return a + b;
}

// 测试用例：测试 add 函数
TEST(AddTest, HandlesPositiveInput) {
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(10, 20), 30);
}

TEST(AddTest, HandlesNegativeInput) {
    EXPECT_EQ(add(-1, -2), -3);
    EXPECT_EQ(add(-10, -20), -30);
}

TEST(AddTest, HandlesMixedInput) {
    EXPECT_EQ(add(1, -2), -1);
    EXPECT_EQ(add(-10, 20), 10);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}