cmake_minimum_required (VERSION 3.5)				# cmake版本最低要求
project (test5)  # 设置工程名称

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)	# 设置可执行文件的输出目录
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)	# 设置库文件的输出目录

include_directories (${PROJECT_SOURCE_DIR}/inc)		# 添加头文件目录，可以添加多个，或多次添加

# refer：https://www.jianshu.com/p/07acea4e86a3
ADD_SUBDIRECTORY(${PROJECT_SOURCE_DIR}/libsrc)		# 先执行这个目录下的cmake生成静态库
ADD_SUBDIRECTORY(${PROJECT_SOURCE_DIR}/src)			# 在生成库后，此时再链接库生成可执行文件

