cmake_minimum_required(VERSION 3.27)
project(Exercice_3)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(Exercice_3
        CompteBancaire.cpp
        CompteBancaire.h
        CompteCourant.cpp
        CompteCourant.h
        CompteEpargne.cpp
        CompteEpargne.h
        main.cpp)
