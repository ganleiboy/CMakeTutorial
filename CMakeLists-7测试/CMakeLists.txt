cmake_minimum_required(VERSION 3.5)
project(test7)

set(CMAKE_CXX_STANDARD 11)  # 指定为 C++ 版本
set(CMAKE_BUILD_TYPE Release)  # Debug模式可以调试，Release模式运行速度快

message("${PROJECT_SOURCE_DIR}=" ${PROJECT_SOURCE_DIR})

# 这里设置好路径后，进入子模块的cmake时不用再次设置
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)  # 设置可执行文件的输出目录
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)	   # 设置库文件的输出目录

ADD_SUBDIRECTORY(${PROJECT_SOURCE_DIR}/source/add)     # 会调用该目录中的CMakeLists.txt进行编译生成静态库
ADD_SUBDIRECTORY(${PROJECT_SOURCE_DIR}/source/sub)     # 会调用该目录中的CMakeLists.txt进行编译生成静态库
ADD_SUBDIRECTORY(${PROJECT_SOURCE_DIR}/source/mul)     # 会调用该目录中的CMakeLists.txt进行编译生成动态库
ADD_SUBDIRECTORY(${PROJECT_SOURCE_DIR}/source/main)    # 会调用该目录中的CMakeLists.txt进行编译生成可执行文件
