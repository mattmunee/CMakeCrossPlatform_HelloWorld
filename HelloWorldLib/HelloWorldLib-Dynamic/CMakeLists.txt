cmake_minimum_required(VERSION 3.10)
project(hellolib)
add_library (${PROJECT_NAME} SHARED "../Source/hellolib.cpp")
target_include_directories (${PROJECT_NAME} PUBLIC "../Include")
install(TARGETS ${PROJECT_NAME} DESTINATION lib)

