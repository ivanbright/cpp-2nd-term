cmake_minimum_required(VERSION 4.0)
project(CPP_2nd)

set(CMAKE_CXX_STANDARD 20)

add_executable(CPP_2nd main.cpp
        queues/builtin.cpp
        mathematics/geometric-series/example1.cpp
        queues/linkedlists/doubly.cpp
        queues/linkedlists/circular.cpp)
