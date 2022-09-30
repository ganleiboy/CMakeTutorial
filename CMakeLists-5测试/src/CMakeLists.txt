# 发现一个目录下所有的源代码文件并将列表存储在一个变量中
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)  # 设置./src为源文件路径

add_executable (test5 ${SRC_LIST})			# 寻找源文件来编译可执行文件
target_link_libraries(test5 
	${PROJECT_SOURCE_DIR}/lib/libadd.a 
	${PROJECT_SOURCE_DIR}/lib/libmul.a)		# 编译时需要链接的静态库
