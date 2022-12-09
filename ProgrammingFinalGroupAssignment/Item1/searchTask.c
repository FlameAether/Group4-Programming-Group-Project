
// Group Assignment
// Prints out all tasks header file  
// PROG71985 - 22F - Sec2 - Programming Principles
// Group 4 - Fall November 2022
// Version 1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include "searchTask.h"
#include "taskStruct.h"
#include <string.h>

#define ARRAYSIZE 15
#define MAXLEN 80

void searchTask() {

	char task[MAXLEN];

	printf("Enter a task description:\n");
	fgetc(stdin); // consumes newline so we can use fgets
	fgets(task, MAXLEN, stdin);
	task[strlen(task) - 1] = '\0';

	for (int i = 0; i < ARRAYSIZE; i++) {
		
		if (strcmp(task, taskArray[i].element) == 0) {
			printf("The task with that description is task %d", taskArray[i].id);
			return; 
		}
	}
}