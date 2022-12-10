// Final Group Assignment: To-Do-List
// PROG71985 - Winter 2022
// Version 3.0
//
// Group 4:Ryan Tu, Matteo Filippone, Owen Oliveira  
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include "printSingleTask.h"
#include "taskStruct.h"

// Function to print out a single task selected by the user
void printSingleTask() 
{
	// Ask for the Task number
	printf("Enter the task number of a task\n");
	int taskNum;
	scanf("%d", &taskNum);

	// While the count is less than arraysize
	for (int i = 0; i < ARRAYSIZE; i++) {

		// If the task has been stored and is not empty,
		if ((taskArray[i].id == taskNum) && (taskArray[i].assigned == true)) {

			// Print the contents of the struct
			printf("\nTask Number: %d\nMonth: %d Day: %d\nDescription: %s\n", taskArray[i].id, taskArray[i].day, taskArray[i].month, taskArray[i].element);
			break;
		}

	}

}