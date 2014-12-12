cmake_minimum_required(VERSION 2.8.4)
project(Projet_C_Exia_2014)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    _include.h
    clock.c
    clock.h
    hanjie.c
    hanjie.h
    history.c
    history.h
    main.c
    menu.c
    menu.h
    S_Cell.h
    S_Game.h
    S_Player.h
    utilities.c
    utilities.h)

add_executable(Projet_C_Exia_2014 ${SOURCE_FILES})