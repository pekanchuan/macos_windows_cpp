cmake_minimum_required(VERSION 3.26)
project(macos_windows_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(macos_windows_cpp main.cpp
        primer/Sales_data.cpp
        primer/Sales_data.h
        primer/Sales_item.h)
