# 添加头文件路径，会检索目录中的所有头文件
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../add
                    ${CMAKE_CURRENT_SOURCE_DIR}/../sub
                    ${CMAKE_CURRENT_SOURCE_DIR}/../mul
                    ${CMAKE_CURRENT_SOURCE_DIR}/../main)

# 把源码编译成一个可执行文件
add_executable(main ./main.cpp)
# 添加链接库，动态和静态都行
target_link_libraries(main add sub mul)