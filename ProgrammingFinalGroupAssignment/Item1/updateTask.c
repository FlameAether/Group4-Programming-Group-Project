// Group Assignment
// Stores our task structs  
// PROG71985 - 22F - Sec2 - Programming Principles
// Group 4 - Fall November 2022
// Version 1.0

#define MAXINPUT	100 // not sure if we have a define for max char
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "updateTask.h"
#include "printAllTasks.h"
#include "userInputFunction.h"


void updateTask(char* userInput)
{
	char newTask[MAXINPUT];
	char confirmation[1];
	printAllTasksFunction();

	printf("Select from which task you would like to update: ");
	userInputFunction(char* userInput); //not sure how to call this function or if i should just make a new char for it

	// Find the # of the task based on userInput and edit it to what the user wants
	printf("Type below the contents of your new task: \n");
	scanf("%s", newTask);
	
	//print the user the changes they are making
	printf("Here are the changes you want to make:");
	printf("%s\n %s\n", userInput, newTask);
	
	//ask for confirmation
	printf("Is this correct? Enter [n/N] to abort or any other key to continue.");
	scanf("%s", confirmation);

	// scan to see if the user input was y or n
	if ((confirmation = getchar()) != '\n')
		while (getchar() != '\n') continue;
	if (confirmation == 'n' || confirmation == 'N')
	{
		puts("Canceling changes.");
		return;
	}
	//print changes saved and end of function
	printf("Changes saved!\n");

	// I think I need a file io type line of code to save the change but not sure


}