cmake_minimum_required(VERSION 3.10)
project(hellouserlib)

if(NOT TARGET hellolib)
    add_subdirectory("../../HelloWorldLib/HelloWorldLib-Dynamic" "HelloWorldLib-Dynamic")
endif()

add_library(${PROJECT_NAME} SHARED "../Source/hellouserlib.cpp")
target_include_directories(${PROJECT_NAME}  PUBLIC "../Include")

target_link_libraries(${PROJECT_NAME} LINK_PUBLIC hellolib) 
install(TARGETS ${PROJECT_NAME} DESTINATION lib)
