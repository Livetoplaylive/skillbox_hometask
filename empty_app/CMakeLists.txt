cmake_minimum_required(VERSION 3.20)
project(empty_app)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(empty_app
        main.cpp)
