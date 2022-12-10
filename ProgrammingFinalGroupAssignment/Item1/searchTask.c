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
#include "searchTask.h"
#include "taskStruct.h"
#include <string.h>

#define ARRAYSIZE 15
#define MAXLEN 80

// This function searches for a specific task
void searchTask() 
{
	char task[MAXLEN];

	// Get the task number from the user
	printf("Enter a task description:\n");

	// consumes newline so we can use fgets
	fgetc(stdin); 
	fgets(task, MAXLEN, stdin);
	task[strlen(task) - 1] = '\0';
	
	// While the count is less than arraysize
	for (int i = 0; i < ARRAYSIZE; i++) {
		
		// Use strcmp to compare what the user typed for their description and cross reference with the elements in the task struct
		if (strcmp(task, taskArray[i].element) == 0) 
		{
			// Print the findings
			printf("The task with that description is task %d", taskArray[i].id);
			return; 
		}
	}
}