// Group Assignment
// Prints out all tasks header file  
// PROG71985 - 22F - Sec2 - Programming Principles
// Group 4 - Fall November 2022
// Version 1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include "printSingleTask.h"
#include "taskStruct.h"

void printSingleTask() {

	printf("Enter the task number of a task\n");
	int input;
	scanf("%d", &input);

	//printf("Error, reinput number!\n");


	for (int i = 0; i < ARRAYSIZE; i++) {

		if ((taskArray[i].id == input) && (taskArray[i].assigned == true)) {

			printf("\nTask Number: %d\nMonth: %d Day: %d\nDescription: %s\n", taskArray[i].id, taskArray[i].day, taskArray[i].month, taskArray[i].element);
			break;
		}

	}

}