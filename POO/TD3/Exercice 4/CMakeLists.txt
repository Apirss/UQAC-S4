cmake_minimum_required(VERSION 3.27)
project(Exercice_4)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(Exercice_4
        main.cpp
        Tableau.cpp
        Tableau.h
        TableauBorne.cpp
        TableauBorne.h)
