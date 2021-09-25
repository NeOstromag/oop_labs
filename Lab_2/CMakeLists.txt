   
cmake_minimum_required(VERSION 3.20)
project(lab2)

set(CMAKE_CXX_STANDARD 17)

add_library(hypocycloid STATIC hypocycloid.cpp hypocycloid.h)
add_subdirectory(test)

add_executable(lab2 main.cpp )
target_link_libraries(lab2 PUBLIC hypocycloid)
