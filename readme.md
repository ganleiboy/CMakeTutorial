### CMakeLists模板持续更新中，欢迎补充

### 参考资料
- 参考资料一：https://blog.csdn.net/songchuwang1868/article/details/84774844
- 参考资料二：https://www.hahack.com/codes/cmake/#
- 参考资料三：https://segmentfault.com/a/1190000005954337
- 参考资料四：https://blog.csdn.net/afei__/article/details/81201039

	
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



