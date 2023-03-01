### CMakeLists模板持续更新中，欢迎补充

### 参考资料
- 1，[CMakeLists.txt基本通用模板](https://blog.csdn.net/songchuwang1868/article/details/84774844)
- 2，特别是自定义编译选项部分比较重要，[CMake 入门实战](https://www.hahack.com/codes/cmake/#)
- 3，[CMakeLists.txt 语法介绍与实例演练](https://blog.csdn.net/afei__/article/details/81201039)
- 4，还涉及通配符和递归遍历，[CMakeList模板(二)：编译多个工程](https://blog.csdn.net/lianshaohua/article/details/107783811)
- 5，很全面，可查表，涉及构成CMakeLists的各个基础模块和命令，[CMakeLists.txt 的详解](https://blog.csdn.net/zhangzhikang_zzk/article/details/125681694#t7)
- 6，适合初学者看，通俗易懂，[CMakeList添加库|添加头文件|添加路径|添加编译选项|宏开关](https://blog.csdn.net/bandaoyu/article/details/115165199)
- 7，[在C++中使用openmp进行多线程编程](https://www.cnblogs.com/DWVictor/p/15212008.html)

### ubuntu18.04 基于VSCode的C++环境搭建 
- [参考链接](https://www.cnblogs.com/Alexkk/p/12616485.html)

### 编译

```shell
# 这是最基础的编译命令
mkdir ./build
cd build
cmake ..
make
```


### 运行生成的可执行文件
```shell
# 示例：cd build
./test01
```


### 模板的适用情况

| 案例             | 适用场景                                                     | 备注                                                 |
| ---------------- | ------------------------------------------------------------ | ---------------------------------------------------- |
| CMakeLists-1.txt | 适用于编译同一目录中的多个源文件，且没有调用第三方库，最终编译成一个可执行文件的情况。 |                                                      |
| CMakeLists-2.txt | 适用于编译某一目录中的指定源文件，且没有调用第三方库，最终编译成一个可执行文件的情况。 | 这个模板最简单，多用于单文件的功能测试。             |
| CMakeLists-3.txt | 适用于cpp文件在一个文件夹(src/中)，头文件在另一个文件夹内（include/中），且没有调用第三方库，最终编译成一个可执行文件的情况。 |                                                      |
| CMakeLists-4.txt | 适用于cpp文件在一个文件夹(src/中)，头文件在另一个文件夹内（include/中），且调用了第三方库（比如已经安装在系统中的opencv），最终编译成一个可执行文件的情况。 |                                                      |
| CMakeLists-5.txt | 使用cmake构建一个工程，该工程创建了两个静态库，另外生成一个引用这两个静态库的可执行文件。 | 涉及到使用ADD_SUBDIRECTORY实现多个cmakelists的调用。 |
| CMakeLists-6.txt | 只有一个动态库subadd，另外生成一个引用该库的可执行文件main。 | 涉及到使用ADD_SUBDIRECTORY实现多个cmakelists的调用。 |
| CMakeLists-7.txt | 使用cmake构建一个工程，每个子模块都有自己的cmakelists，该工程创建了两个静态库和一个动态库，另外生成一个调用这些库的可执行文件。 | 涉及到使用ADD_SUBDIRECTORY实现多个cmakelists的调用。 |
| CMakeLists-8.txt | 只使用cmake构建一个工程，包含多个子模块，但没有自己的cmakelists，该工程创建了两个静态库和一个动态库，另外生成一个调用这些库的可执行文件。 | 涉及到使用ADD_SUBDIRECTORY实现多个cmakelists的调用。 |
|                  |                                                              |                                                      |


### 常用命令
```shell
# Note：cmake中不区分大小写。

# 设置变量，方便后面自动配置，进入子模块的cmake时不用再次设置
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)  # 设置可执行文件的输出目录
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)	   # 设置库文件的输出目录

# 设定源码列表,查找指定目录下的所有源文件,并将名称保存到 DIR_SRCS 变量中
aux_source_directory(./src/ DIR_SRC)

# 设定头文件查找路径，可以将所有头文件路径都添加到这里面
include_directories(./include/
                    ./source/sub)

# 查找并添加OpenCV的头文件目录，在target_link_libraries()中需要进行动态链接
find_package(OpenCV REQUIRED) 

# 编译子模块，会自动调用子模块中的Cmakelists.txt进行编译
add_subdirectory(sub)

# 将${ADD_SRC_LIST}中的所有源码编译生成静态库add
add_library(add ${ADD_SRC_LIST})

# 将${SRCS}中的所有源码编译成一个可执行文件，文件名为main
add_executable( main ${SRCS} )
# 编译可执行文件之后，添加动态链接库，会链接静态库subadd和opencv库
target_link_libraries(main subadd ${OpenCV_LIBS})

# 打印一些日志信息
message("PROJECT_SOURCE_DIR=" ${PROJECT_SOURCE_DIR})
```

### 常用变量
```shell
# Note：cmake中不区分大小写。

# 工程顶层目录
${CMAKE_SOURCE_DIR} ${PROJECT_SOURCE_DIR}

# 当前处理的 CMakeLists.txt 所在路径
${CMAKE_CURRENT_SOURCE_DIR}

# 返回Cmakelists.txt开头通过 PROJECT 指令定义的项目名称
${PROJECT_NAME}

# 分别用来重新定义最终结果（可执行文件、动静态库文件）的存放目录
${EXECUTABLE_OUTPUT_PATH} ${LIBRARY_OUTPUT_PATH}

```