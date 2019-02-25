cmake_minimum_required(VERSION 3.13)
project(pizza_hashcode)

set(CMAKE_CXX_STANDARD 14)

add_executable(pizza_hashcode main.cpp Pizza.cpp Pizza.h Slice.cpp Slice.h Cell.cpp Cell.h Pos.cpp Pos.h)