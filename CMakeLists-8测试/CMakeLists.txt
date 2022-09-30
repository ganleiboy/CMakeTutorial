cmake_minimum_required(VERSION 3.5)
project(test8)

set(CMAKE_CXX_STANDARD 11)  # 指定为 C++ 版本
set(CMAKE_BUILD_TYPE Release)  # Debug模式可以调试，Release模式运行速度快

message("${PROJECT_SOURCE_DIR}=" ${PROJECT_SOURCE_DIR})

# 这里设置好路径后，进入子模块的cmake时不用再次设置
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)  # 设置可执行文件的输出目录
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)	   # 设置库文件的输出目录

# 编译add，生成静态库
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/source/add ADD_SRC_LIST)
add_library(add ${ADD_SRC_LIST})

# 编译sub，生成静态库
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/source/sub SUB_SRC_LIST)
add_library(sub ${SUB_SRC_LIST})

# 编译mul，生成动态库
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/source/mul MUL_SRC_LIST)
add_library(mul SHARED ${MUL_SRC_LIST})

# 添加头文件路径，用于编译可执行文件
include_directories(./source/add
                    ./source/sub
                    ./source/mul)

# 编译main，生成可执行文件
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/source/main/main.cpp)
target_link_libraries(main add sub mul)  # 链接所有库
