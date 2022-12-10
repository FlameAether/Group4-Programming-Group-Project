// Final Group Assignment: To-Do-List
// PROG71985 - Winter 2022
// Version 3.0
//
// Group 4:Ryan Tu, Matteo Filippone, Owen Oliveira  
//

#define _CRT_SECURE_NO_WARNINGS
#define MAXSIZE 80

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "input.h"
#include "taskStruct.h"

#define INTCHECK 1
#define EXITNUMBER -1
#define LOWERLIMIT -2
#define CAPACITY 15
#define MONTHSINYEAR 12
#define DAYSINAMONTH 31


// Function to add a task to the file 
void addTask()
{
	int* taskNum = (int*)malloc(sizeof(int*));
	int length = 0; 

	// Asks for task number requested + first/last name from user 
	printf("Enter Task Number (or -1 to quit): ");

	// Checks if input is an int
	if (scanf("%d", taskNum) == INTCHECK) 
	{
		// Checks if tasknum is null
		if (taskNum == NULL)
		{
			printf("Please enter an integer!\n");
			exit(EXIT_FAILURE);
		}

		// Checks if input is within bounds 
		if (*taskNum != EXITNUMBER && *taskNum >= 0 && *taskNum < CAPACITY) 
		{
			// If task is not occupied
			if (taskArray[*taskNum].assigned != true)  
			{
				// task number assignment
				taskArray[*taskNum].id = *taskNum; 


				// get day and month of task

				printf("Enter Month Of Task: ");
				scanf("%d", &taskArray[*taskNum].month);
				while (taskArray[*taskNum].month > MONTHSINYEAR || taskArray[*taskNum].month <= 0) {
					printf("Invalid month, please enter a valid month: ");
					scanf("%d", &taskArray[*taskNum].month);
				}

				printf("Enter Day Of Task: ");
				scanf("%d", &taskArray[*taskNum].day);
				while (taskArray[*taskNum].day > DAYSINAMONTH || taskArray[*taskNum].day <= 0) {
					printf("Invalid day, please enter a valid day: ");
					scanf("%d", &taskArray[*taskNum].day);
				}
				

				// Consumes newline so we can use fgets
				fgetc(stdin); 

				// Removes newline from fgets
				printf("Enter Task Description: ");
				fgets(taskArray[*taskNum].element, MAXSIZE, stdin);
				length = strlen(taskArray[*taskNum].element);
				taskArray[*taskNum].element[length - 1] = 0; 

				taskArray[*taskNum].assigned = true;


				printf("Succesfully assigned task.\n");
			}

			// If user tries to get a task that is already taken
			else if (taskArray[*taskNum].assigned == true) 
			{
				printf("\nSorry, task number taken already!\n");
				return;
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
	}

	// if task number input is invalid, such as char/string
	else 
	{
		printf("\nPlease enter an integer between 0 and 14!\n");
		return;
	}
}