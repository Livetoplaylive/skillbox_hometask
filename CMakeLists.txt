cmake_minimum_required(VERSION 3.19)
project(c__)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(11.6)
include_directories(12)
include_directories(empty_app)

add_executable(c__
        11.6/Caesar_cipher/main.cpp
        11.6/comparison_numbers/main.cpp
        11.6/email_correct/main.cpp
        11.6/ip_validation/main.cpp
        11.6/tic_tac_toe/main.cpp
        "12/Average number of storeys/main.cpp"
        "12/Self-isolation level/main.cpp"
        12/task_1/main.cpp
        empty_app/main.cpp)
