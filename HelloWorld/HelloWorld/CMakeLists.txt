cmake_minimum_required(VERSION 3.10)
project(helloworld)

if(NOT TARGET hellolib)
    add_subdirectory("../../HelloWorldLib/HelloWorldLib-Dynamic" "HelloWorldLib-Dynamic")
endif()

if(NOT TARGET hellouserlib)
    add_subdirectory("../../HelloWorldUserLib/HelloWorldUserLib-Dynamic" "HelloWorldUserLib-Dynamic")
endif()

if(NOT TARGET hellousebothlib)
    add_subdirectory("../../HelloWorldUseBoth/HelloWorldUseBoth-Dynamic" "HelloWorldUseBoth-Dynamic")
endif()

add_executable(${PROJECT_NAME} "../Source/helloworld.cpp")
target_include_directories(${PROJECT_NAME}  PUBLIC "../Include")

target_link_libraries(${PROJECT_NAME} LINK_PUBLIC hellolib hellouserlib hellousebothlib i2c) 
install(TARGETS ${PROJECT_NAME} DESTINATION bin)
