cmake_minimum_required(VERSION 3.9)
project(refactoring_exercise)

set(CMAKE_CXX_STANDARD 11)

include_directories(test)

add_executable(refactoring_exercise land.cpp land.h  lor.cpp lor.h main.cpp var.cpp var.h lnot.cpp lnot.h base.cpp base.h)

add_executable(refactoring_exercise_test test/catch.hpp land.cpp land.h  lor.cpp lor.h var.cpp var.h lnot.cpp lnot.h test/test.cpp )
