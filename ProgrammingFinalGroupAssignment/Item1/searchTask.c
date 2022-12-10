// Final Group Assignment: To-Do-List
// PROG71985 - Winter 2022
// Version 3.0
//
// Matteo filippone 
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include "searchTask.h"
#include "taskStruct.h"
#include <string.h>

#define MAXLEN 80
#define INTCHECK 1
#define EXITNUMBER -1
#define LOWERLIMIT -2
#define CAPACITY 15

// This function searches for a specific task
void searchTask() 
{
	int* task = (int*)malloc(sizeof(int*));;

	// Get the task number from the user
	printf("Enter a task id:\n");
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
		if (*task != EXITNUMBER && *task >= 0 && *task < CAPACITY)
		{


			for (int i = 0; i < CAPACITY; i++) {

				if (taskArray[i].id == *task && taskArray[i].assigned == true) {
					printf("Task %d:", taskArray[i].id);
					printf("\nTask Number : %d\nMonth : %d Day : %d\nDescription : %s\n", taskArray[i].id, taskArray[i].day, taskArray[i].month, taskArray[i].element);
					return;
				}

			}
			printf("There was no task with that id number\n");

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