cmake_minimum_required(VERSION 3.27)
project(Exercice_2)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(Exercice_2
        Application.h
        Connectivite.h
        main.cpp
        Smartphone.h
        SmartphonePremium.h)
