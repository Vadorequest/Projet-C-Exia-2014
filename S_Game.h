/*
 ============================================================================
 Name        : Projet-C-Exia-2014.c
 Author      : Vadorequest
 Copyright   : MIT
 ============================================================================
 */

#include <time.h>

#ifndef S_GAME_H
#define S_GAME_H

typedef struct game
{
    int level;// Difficulty level
    clock_t datetime_start;// When the game started.
    int type;// Type of the game.
    //int[][] grid;// Contains the grid of the game.

}Game;

#endif
