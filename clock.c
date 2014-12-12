/*
 ============================================================================
 Name        : Projet-C-Exia-2014.c
 Author      : Vadorequest
 Copyright   : MIT
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "_include.h"

/**
 * Display the clock.
 * Convert the time into a digital time, digit by digit.
 */
void display_clock(Game* game) {
	double time_spent = (double)(clock() - game->datetime_start) / CLOCKS_PER_SEC;
	printf("Clock: %f", time_spent);
}

/**
 * Display all digits one by one.
 */
void display_digits(int time) {

}

/**
 * Display a single digit.
 */
void display_digit(int digit) {

}
