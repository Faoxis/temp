cmake_minimum_required(VERSION 3.5)
project(2_4_8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(2_4_8 ${SOURCE_FILES})