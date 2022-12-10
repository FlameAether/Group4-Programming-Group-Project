// Final Group Assignment: To-Do-List
// PROG71985 - Winter 2022
// Version 3.0
//
// Owen Oliveira/Matteo Filippone
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "updateTask.h"
#include "printAllTasks.h"
#include "taskStruct.h"

#define MAXLEN 80
#define INTCHECK 1
#define EXITNUMBER -1
#define LOWERLIMIT -2
#define CAPACITY 15

void updateTask()
{
	int* task = (int*)malloc(sizeof(int*));
	char newTask[MAXLEN];
	
	printAllTasksFunction();

	printf("Choose a task you would like to update(-1 to exit): ");
	

	// Checks if input is an int
	if (scanf("%d", task) == INTCHECK)
	{
		// Checks if tasknum is null
		if (task == NULL)
		{
			printf("Error using malloc!\n");
			exit(EXIT_FAILURE);
		}

		// Checks if input is within bounds 
		if (*task != EXITNUMBER && *task>= 0 && *task < CAPACITY)
		{

			for (int i = 0; i < ARRAYSIZE; i++) {
				if (*task == taskArray[i].id) {


					// Find the # of the task based on userInput and edit it to what the user wants
					printf("Type a new description for the task:\n");
					fgetc(stdin); // consumes newline so we can use fgets
					fgets(newTask, MAXLEN, stdin);
					

					strcpy(taskArray[*task].element, newTask);

				}

			}

		}

		// If input = -1 (the number to abort operation)
		if (*task == EXITNUMBER)
		{
			printf("\nQuit!\n");
			return;
		}
		
		// If input integer is out of bounds 
		if (*task <= LOWERLIMIT || *task >= CAPACITY)
		{
			printf("\nPlease enter an integer between 0 and 14!\n");
			return;
		}

		free(task);
	}

	// if task number input is invalid, such as char/string
	else
	{
		printf("\nPlease enter an integer between 0 and 14!\n");
		return;
	}

	


	
}