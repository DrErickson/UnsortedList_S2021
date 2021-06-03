cmake_minimum_required(VERSION 3.17)
project(unsortedlist)

set(CMAKE_CXX_STANDARD 14)

add_executable(fancy_test TestDriver.cpp UnsortedList.cpp UnsortedList.h)

add_executable(basic_test Basic_Driver.cpp UnsortedList.cpp UnsortedList.h)