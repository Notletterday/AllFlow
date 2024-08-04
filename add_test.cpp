#include <gtest/gtest.h>

int add(int a, int b)
{
    return a + b;
}

TEST(TEST_ADD, UNSIGNED_INT_VALUE)
{
    int result = add(100, 200);
    EXPECT_EQ(result, 300);
    result = add(200, 300);
    EXPECT_NE(result, 400);
}

int main()
{
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}