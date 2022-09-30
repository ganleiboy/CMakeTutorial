refer：
- [cmake创建库和使用库工程示例（多个cmakelists）](https://blog.csdn.net/hhl_work/article/details/120670486)
- [cmake : add_library详解：](https://blog.csdn.net/LaineGates/article/details/108242803)
- [linux编译命令——make -j8](https://blog.csdn.net/clarkness/article/details/86633681)

使用cmake构建一个工程，该工程创建了两个静态库，另外生成一个引用这两个静态库的可执行文件。

涉及到使用ADD_SUBDIRECTORY实现多个cmakelists的调用。