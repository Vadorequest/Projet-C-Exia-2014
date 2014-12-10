cmake_minimum_required(VERSION 2.8.4)
project(Projet-C-Exia-2014-test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.c)
add_executable(Projet-C-Exia-2014-test ${SOURCE_FILES})