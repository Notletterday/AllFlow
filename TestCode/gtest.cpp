#include <armadillo>
#include <gtest/gtest.h>
#include <glog/logging.h>

// 初始化glog
class GlogEnvironment : public ::testing::Environment
{
public:
    void SetUp() override
    {
        FLAGS_logtostderr = 1; // 将日志输出到stderr
        google::InitGoogleLogging("test_armadillo_glog");
    }

    void TearDown() override
    {
        google::ShutdownGoogleLogging();
    }
};

// 测试Armadillo矩阵加法
TEST(ArmadilloTest, MatrixAddition)
{
    arma::mat A = {{1, 2}, {3, 4}};
    arma::mat B = {{5, 6}, {7, 8}};
    arma::mat C = A + B;
    arma::mat expected = {{6, 8}, {10, 12}};
    EXPECT_TRUE(arma::approx_equal(C, expected, "absdiff", 1e-12));
    LOG(INFO) << "Matrix addition test passed";
}

// 测试Armadillo矩阵乘法
TEST(ArmadilloTest, MatrixMultiplication)
{
    arma::mat A = {{1, 2}, {3, 4}};
    arma::mat B = {{5, 6}, {7, 8}};
    arma::mat C = A * B;
    arma::mat expected = {{19, 22}, {43, 50}};
    EXPECT_TRUE(arma::approx_equal(C, expected, "absdiff", 1e-12));
    LOG(INFO) << "Matrix multiplication test passed";
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    ::testing::AddGlobalTestEnvironment(new GlogEnvironment);
    return RUN_ALL_TESTS();
}