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
 * Display the main menu and wait for user choice.
 */
void display_menu() {
	int choix;

	shell_clear();
	printf("1 - Jouer\n");
	printf("2 - Charger une partie existante\n");
	printf("3 - Options\n");

	scanf("%d", &choix);
	shell_clear();

	switch(choix) {
		case 1:
			display_level();

			break;
		case 2:
			select_save_to_load();
			break;
		default:
			display_error_scanf();
			display_menu();
		break;
	}
}

/**
 * Display the difficulty level sub menu.
 */
void display_level(){
	int choix;

	shell_clear();
	printf("1 - Facile\n");
	printf("2 - Moyen\n");
	printf("3 - Difficile\n");

	scanf("%d", &choix);
	shell_clear();

	if(choix == 1 || choix == 2 || choix == 3){

	}else{
		display_error_scanf();
		display_level();
	}
}

/**
 * Display text to select the name of the save to load.
 */
void select_save_to_load() {

}
