### CMakeLists模板持续更新中，欢迎补充

### 参考资料
- 1，[CMakeLists.txt基本通用模板](https://blog.csdn.net/songchuwang1868/article/details/84774844)
- 2，[CMake 入门实战](https://www.hahack.com/codes/cmake/#)
- 3，[CMakeLists.txt 语法介绍与实例演练](https://blog.csdn.net/afei__/article/details/81201039)
- 4，还涉及通配符和递归遍历，[CMakeList模板(二)：编译多个工程](https://blog.csdn.net/lianshaohua/article/details/107783811)
- 5，很全面，可查表，涉及构成CMakeLists的各个基础模块和命令，[CMakeLists.txt 的详解](https://blog.csdn.net/zhangzhikang_zzk/article/details/125681694#t7)
- 6，适合初学者看，通俗易懂，[CMakeList添加库|添加头文件|添加路径|添加编译选项|宏开关](https://blog.csdn.net/bandaoyu/article/details/115165199)
- 7，[在C++中使用openmp进行多线程编程](https://www.cnblogs.com/DWVictor/p/15212008.html)


### 编译

```shell
mkdir ./build
cd build
cmake ..
make
```


### 运行生成的可执行文件
```shell
# cd build
./test01
```


### 模板的适用情况
- CMakeLists-1.txt，适用于编译同一目录中的多个源文件，且没有调用第三方库，最终编译成一个可执行文件的情况。
- CMakeLists-2.txt，适用于编译某一目录中的指定源文件，且没有调用第三方库，最终编译成一个可执行文件的情况。这个模板最简单，多用于单文件的功能测试。
- CMakeLists-3.txt，这适用于cpp文件在一个文件夹(src/中)，头文件在另一个文件夹内（include/中），且没有调用第三方库，最终编译成一个可执行文件的情况。
- CMakeLists-4.txt，适用于cpp文件在一个文件夹(src/中)，头文件在另一个文件夹内（include/中），且调用了第三方库（比如已经安装在系统中的opencv），最终编译成一个可执行文件的情况。
- CMakeLists-5.txt，使用cmake构建一个工程，该工程创建了两个静态库，另外生成一个引用这两个静态库的可执行文件。涉及到使用ADD_SUBDIRECTORY实现多个cmakelists的调用。
- CMakeLists-6.txt，只有一个动态库subadd，另外生成一个引用该库的可执行文件main。涉及到使用ADD_SUBDIRECTORY实现多个cmakelists的调用。
- CMakeLists-7.txt，使用cmake构建一个工程，每个子模块都有自己的cmakelists，该工程创建了两个静态库和一个动态库，另外生成一个调用这些库的可执行文件。涉及到使用ADD_SUBDIRECTORY实现多个cmakelists的调用。
- CMakeLists-8.txt，只使用cmake构建一个工程，包含多个子模块，但没有自己的cmakelists，该工程创建了两个静态库和一个动态库，另外生成一个调用这些库的可执行文件。涉及到使用ADD_SUBDIRECTORY实现多个cmakelists的调用。


#### ubuntu18.04 基于VSCode的C++环境搭建 
- [参考链接](https://www.cnblogs.com/Alexkk/p/12616485.html)