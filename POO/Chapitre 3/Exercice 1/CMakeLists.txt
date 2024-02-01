cmake_minimum_required(VERSION 3.27)
project(Exercice_1)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(Exercice_1
        Article.cpp
        Article.h
        ArticleEnSolde.cpp
        ArticleEnSolde.h
        main.cpp)
