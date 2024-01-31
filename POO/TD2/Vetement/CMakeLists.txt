cmake_minimum_required(VERSION 3.27)
project(Vetement)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(Vetement
        inventaire.cpp
        inventaire.h
        main.cpp
        vetement.cpp
        vetement.h)
