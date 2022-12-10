// Final Group Assignment: To-Do-List
// PROG71985 - Winter 2022
// Version 3.0
//
// Group 4:Ryan Tu, Matteo Filippone, Owen Oliveira  
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "taskStruct.h"
#include "deleteTask.h"

#define INTCHECK 1
#define EXITNUMBER -1
#define LOWERLIMIT -2
#define CAPACITY 15
#define LOWESTTASK 0

// This function is used to delete a pre-existing tast
void deleteTask()
{
	// Ask the user for a task number to delete
	printf("Please enter task number to be deleted (or -1 to quit): ");

	// Allocate storage to taskNum
	int* taskNum = (int*)malloc(sizeof(int));

	// Check return value to see if an int was entered
	if (scanf("%d", taskNum) == INTCHECK) 
	{
		// Checks if seatnum is null
		if (taskNum == NULL)
		{
			printf("Please enter an integer\n");
			exit(EXIT_FAILURE);
		}

		// If the user input is not equal to our exit number and is within our seat number count (seats 0-11)
		if (*taskNum != EXITNUMBER && *taskNum >= LOWESTTASK && *taskNum <= CAPACITY)
		{
			// Checks if seat is occupied
			if (taskArray[*taskNum].assigned == true) { 

				// Resets all values to NULL
				char* reset = "\0";
				taskArray[*taskNum].day = reset;
				taskArray[*taskNum].month = reset;
				strcpy(taskArray[*taskNum].element, reset); 

				// Deassign the seat
				taskArray[*taskNum].assigned = false; 

				// Confirm to the user that the task has been deleted
				printf("\nTask has been successfully deleted.");
			}

			// If the user tries to delete seat that is already empty
			else if (taskArray[*taskNum].assigned != true) 
			{
				printf("\nTask is already empty!\n");
				return;
			}
		}

		// If user input is equal to -1 (the number to quit)
		if (*taskNum == EXITNUMBER) 
		{
			printf("\nQuit!\n");
			return;
		}

		// If user input is out of bounds 
		if (*taskNum <= LOWERLIMIT || *taskNum > CAPACITY) 
		{
			printf("\nPlease enter an integer between 0 and 14!\n");
			return;
		}
		free(taskNum);
	}

	// Any other input that is an invalid seat number, such as a char/string 
	else 
	{
		printf("\nPlease enter an integer between 0 and 14!\n");
		return;
	}

}
