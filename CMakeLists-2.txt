# 这个模板适用于编译某一目录中的指定源文件，且没有调用第三方库，最终编译成一个可执行文件的情况

# 1,设置工程名称，叫“Demo2”，在Linux下可以随便设置
project( Demo2 )

# 2,设置 CMake 最低版本号，我电脑装的是3.5
cmake_minimum_required( VERSION 2.8 )

# 3,设定编译参数
set(CMAKE_CXX_STANDARD    11)  # C++11标准
set(CMAKE_BUILD_TYPE "Release")  # 也可以是Debug

# 4，把源码编译成一个可执行文件，文件名为test02（可以随便取名），会保存在当前目录下
add_executable( test02 test02.cpp )
