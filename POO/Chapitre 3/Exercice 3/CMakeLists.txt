cmake_minimum_required(VERSION 3.27)
project(Exercice_3)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(Exercice_3
        Couleur.h
        main.cpp
        Masse.h
        Point.h
        PointColMasse.h
        PointCouleur.h
        PointMasse.h)
