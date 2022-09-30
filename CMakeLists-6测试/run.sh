# 自动化编译和运行的脚本
rm -rf build
mkdir build
cd build/
cmake ..
make -j4
./main