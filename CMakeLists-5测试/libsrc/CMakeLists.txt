# refer：cmake : add_library详解：https://blog.csdn.net/LaineGates/article/details/108242803
# 生成静态库，name属性必须全局唯一
add_library(add STATIC ${PROJECT_SOURCE_DIR}/libsrc/add.cpp)
add_library(mul STATIC ${PROJECT_SOURCE_DIR}/libsrc/mul.cpp)
