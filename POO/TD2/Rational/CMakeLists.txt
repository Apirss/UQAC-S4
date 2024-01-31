cmake_minimum_required(VERSION 3.27)
project(Rational)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(Rational
        rational.cpp
        rational.h)
