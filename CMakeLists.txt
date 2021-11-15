cmake_minimum_required(VERSION 3.20)
project(simple_blockchain)

set(CMAKE_CXX_STANDARD 20)

add_executable(simple_blockchain main.cpp inc/block.h)
