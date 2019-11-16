cmake_minimum_required(VERSION 3.10)
project(hellolib)
include_directories ("Include")
add_library (${PROJECT_NAME} SHARED "Source/hellolib.cpp")
install(TARGETS ${PROJECT_NAME} DESTINATION lib)

