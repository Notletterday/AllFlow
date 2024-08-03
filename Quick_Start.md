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

wget https://sourceforge.net/projects/arma/files/armadillo-14.0.1.tar.xz
tar -xf armadillo-14.0.1.tar.xz
rm armadillo-14.0.1.tar.xz
cd armadillo-14.0.1
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
make -j8
sudo make install
```
