// Final Group Assignment: To-Do-List
// PROG71985 - Winter 2022
// Version 3.0
//
// Matteo Filippone
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "printSingleTask.h"
#include "taskStruct.h"

#define MAXLEN 80
#define INTCHECK 1
#define EXITNUMBER -1
#define LOWERLIMIT -2
#define CAPACITY 15


// Function to print out a single task selected by the user
void printSingleTask() 
{

	int* taskNum = (int*)malloc(sizeof(int*));

	// Asks for task number requested + first/last name from user 
	printf("Enter Task Number (or -1 to quit): ");


	// Checks if input is an int
	if (scanf("%d", taskNum) == INTCHECK)
	{
		// Checks if tasknum is null
		if (taskNum == NULL)
		{
			printf("Error using malloc\n");
			exit(EXIT_FAILURE);
		}
		

		// Checks if input is within bounds 
		if (*taskNum != EXITNUMBER && *taskNum >= 0 && *taskNum < CAPACITY)
		{
			

			// While the count is less than arraysize
			for (int i = 0; i < ARRAYSIZE; i++) {

				// If the task has been stored and is not empty,
				if ((taskArray[i].id == *taskNum) && (taskArray[i].assigned == true)) {

					// Print the contents of the struct
					printf("\nTask Number: %d\nMonth: %d Day: %d\nDescription: %s\n", taskArray[i].id, taskArray[i].day, taskArray[i].month, taskArray[i].element);
					break;
				}

			}


		}

		// If input = -1 (the number to abort operation)
		if (*taskNum == EXITNUMBER)
		{
			printf("\nQuit!\n");
			return;
		}

		// If input integer is out of bounds 
		if (*taskNum <= LOWERLIMIT || *taskNum >= CAPACITY)
		{
			printf("\nPlease enter an integer between 0 and 14!\n");
			return;
		}

		free(taskNum);
		fgetc(stdin);
	}

	// if task number input is invalid, such as char/string
	else
	{
		printf("\nPlease enter an integer between 0 and 14!\n");
		fgetc(stdin);
		return;
	}
}

