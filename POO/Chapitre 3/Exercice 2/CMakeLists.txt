cmake_minimum_required(VERSION 3.27)
project(Exercice_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Exercice_2
        main.cpp
        Point.cpp
        Point.h
        PointCouleur.cpp
        PointCouleur.h)
