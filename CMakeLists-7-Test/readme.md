refer:
- [CMakeList模板(二)：编译多个工程](https://blog.csdn.net/lianshaohua/article/details/107783811)
- [CMake——CMakeLists.txt 的详解](https://blog.csdn.net/zhangzhikang_zzk/article/details/125681694#t5)

使用cmake构建一个工程，每个子模块都有自己的cmakelists，该工程创建了两个静态库和一个动态库，另外生成一个调用这些库的可执行文件。

涉及到使用ADD_SUBDIRECTORY实现多个cmakelists的调用。

