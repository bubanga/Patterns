cmake_minimum_required(VERSION 3.21)
project(Patterns)

set(CMAKE_CXX_STANDARD 20)

add_executable(Patterns main.cpp CyclicBuffer.cpp CyclicBuffer.h Integer.cpp Integer.h)
