cmake_minimum_required(VERSION 3.9)
project(refactoring_exercise)

set(CMAKE_CXX_STANDARD 11)

add_executable(refactoring_exercise
        land.cpp
        land.h
        lnot.cpp
        lnot.h
        lor.cpp
        lor.h
        main.cpp
        var.cpp
        var.h lnot.cpp lnot.h)
