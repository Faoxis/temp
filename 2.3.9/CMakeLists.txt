cmake_minimum_required(VERSION 3.5)
project(2_3_9)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp example.cpp)
add_executable(2_3_9 ${SOURCE_FILES})