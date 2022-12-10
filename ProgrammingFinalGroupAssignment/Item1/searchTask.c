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
	int counter = 0;
	int* taskday = (int*)malloc(sizeof(int*));
	int* taskMonth = (int*)malloc(sizeof(int*));

	// Get the task number from the user
	printf("Enter a task day: ");
	// Checks if input is an int
	// Checks if input is an int
	if ((scanf("%d", taskday)) == INTCHECK)
	{
		if (taskday == NULL) {

			printf("Error using malloc\n");
			exit(EXIT_FAILURE);
		}


		printf("\nEnter a task month: ");
		if (scanf("%d", taskMonth) == INTCHECK) {


			// Checks if tasknum is null
			if (taskMonth == NULL)
			{
				printf("Error using malloc\n");
				exit(EXIT_FAILURE);
			}


			// Checks if input is within bounds 
			if ((*taskday != EXITNUMBER && *taskday >= 0 && *taskday < CAPACITY) || (*taskMonth != EXITNUMBER && *taskMonth >= 0 && *taskMonth < CAPACITY))
			{

				for (int i = 0; i < CAPACITY; i++) {
					//print the tasks between the range given by the user
					if (((taskArray[i].assigned == true) && (*taskday == taskArray[i].day) && taskArray[i].month == *taskMonth))
					{
						printf("\nTask Number: %d\nMonth: %d Day: %d\nDescription: %s\n", taskArray[i].id, taskArray[i].month, taskArray[i].day, taskArray[i].element);
						counter++;
					}
				}

				if (counter == 0) // prints out message if no tasks are occupied 
				{
					printf("No tasks assigned yet!\n");
				}


			}

			// If input = -1 (the number to abort operation)
			if (*taskday == EXITNUMBER || *taskMonth == EXITNUMBER)
			{
				printf("\nQuit!\n");
				return;
			}

			// If input integer is out of bounds 
			if ((*taskday <= LOWERLIMIT || *taskday >= CAPACITY) || (*taskMonth <= LOWERLIMIT || *taskMonth >= CAPACITY))
			{
				printf("\nPlease enter an integer between 0 and 14!\n");
				return;
			}

			free(taskMonth);
			free(taskday);
		}
	}

	// if task number input is invalid, such as char/string
	else
	{
		printf("\nPlease enter an integer between 0 and 14!\n");
		return;
	}

	
}