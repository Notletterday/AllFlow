enable_testing() # 开启测试，否则无法执行make test
add_executable(gtest_exe ../TestCode/gtest.cpp) # 添加可执行程序
target_link_libraries(gtest_exe PRIVATE gtest pthread glog armadillo) # 链接gtest库

add_test(gtest_exe ${CMAKE_BINARY_DIR}/gtest_exe) # 添加测试，保证make test可以执行该测试用例

