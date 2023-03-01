# 编译成静态库, libadd.a
# 方法一：逐个添加cpp源文件，适用于文件数量少的情况
# add_library(add ${CMAKE_CURRENT_SOURCE_DIR}/add.cpp ${CMAKE_CURRENT_SOURCE_DIR}/add3.cpp)

# 方法二：搜索有的cpp源文件，并将列表存储在一个变量中，适用于文件多的情况
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC_LIST)
add_library(add ${SRC_LIST})

# 方法三：递归遍历目录，获取所有的CPP文件，适用于多级目录的情况
# file(GLOB_RECURSE cpp_files  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)  # GLOB是不递归
# add_library(add ${cpp_files})