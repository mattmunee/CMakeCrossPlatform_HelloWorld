cmake_minimum_required(VERSION 3.10)
project(hellousebothlib)

if(NOT TARGET hellolib)
    add_subdirectory("../HelloWorldLib" "HelloWorldLib")
endif()

if(NOT TARGET hellouserlib)
    add_subdirectory("../HelloWorldUserLib" "HelloWorldUserLib")
endif()

add_library(${PROJECT_NAME} SHARED "Source/hellousebothlib.cpp")
target_include_directories(${PROJECT_NAME}  PUBLIC "Include")

target_link_libraries(${PROJECT_NAME} LINK_PUBLIC hellolib hellouserlib) 
install(TARGETS ${PROJECT_NAME} DESTINATION lib)
