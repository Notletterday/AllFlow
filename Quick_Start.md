# 快速入手

## 环境配置

首先我们先检查gcc版本，我们这里需要支持c++ 17的版本(gcc从版本7开始支持c++ 17)。

```bash
gcc --version
```

如果输出下面这种，就证明已经安装gcc。

```bash
gcc.exe (GCC) 14.1.0
Copyright (C) 2024 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

如果没有安装gcc，需要通过下面命令去安装。

```bash
apt install gcc
```

然后安装其他依赖库

```bash
sudo apt update
sudo apt install libopenblas-dev liblapack-dev libarpack2-dev libsuperlu-dev

sudo apt install libgoogle-glog-dev
sudo apt install libarmadillo-dev
#这个需要手动编译一下
sudo apt install libgtest-dev
cd /usr/src/gtest
mkdir build 
cd build
sudo cmake ..
sudo make
```
然后测试gtest:
```bash
mkdir build
cd build
sudo cmake ..
sudo make
#运行gtest的测试代码
./gtest_exe
```

vscode的扩展(选择性使用)
- C/C++
- C/C++ Extension Pack
- clangd
- CMake
- CMake Tools

