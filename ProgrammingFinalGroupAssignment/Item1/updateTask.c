// Final Group Assignment: To-Do-List
// PROG71985 - Winter 2022
// Version 3.0
//
// Group 4:Ryan Tu, Matteo Filippone, Owen Oliveira  
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

void updateTask()
{
	int task;
	char newTask[MAXLEN];
	
	printAllTasksFunction();

	printf("Choose a task you would like to update: ");
	scanf("%d", &task);

	for (int i = 0; i < ARRAYSIZE; i++) {
		if (task == taskArray[i].id) {


			// Find the # of the task based on userInput and edit it to what the user wants
			printf("Type a new description for the task:\n");
			fgetc(stdin); // consumes newline so we can use fgets
			fgets(newTask, MAXLEN, stdin);
			newTask[strlen(newTask) - 1] = '\0';

			strcpy(taskArray[task].element, newTask);
			
			return;

		}

	}

}