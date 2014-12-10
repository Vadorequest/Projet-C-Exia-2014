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
 * Change the screen size of the shell.
 */
void change_shell_size() {
	system("MODE con cols=170 lines=60");
}

/**
 * Clear the buffer to ensure it is empty.
 */
void clear_buffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}

void shell_clear() {
	system("clear");
}
