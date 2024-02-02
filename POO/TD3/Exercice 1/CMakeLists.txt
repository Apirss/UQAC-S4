cmake_minimum_required(VERSION 3.27)
project(Exercice_1)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(Exercice_1
        Base.h
        Derived1.h
        Derived2.h
        main.cpp)
