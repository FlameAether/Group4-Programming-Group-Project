// Assignment 4 - Question 2 New Seat File
// Adds a customer to a seat number using user input 
// PROG71985 - 22F - Sec2 - Programming Principles
// Ryan Tu - Fall November 2022
// Version 1.0

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



void addTask()
{
	int* taskNum = (int*)malloc(sizeof(int*));
	int length = 0; 

	// asks for seat number requested + first/last name from user 
	printf("Enter Task Number (or -1 to quit): ");

	if (scanf("%d", taskNum) == INTCHECK) // checks if input is an int
	{
		// checks if tasknum is null
		if (taskNum == NULL)
		{
			printf("Please enter an integer!\n");
			exit(EXIT_FAILURE);
		}

		if (*taskNum != EXITNUMBER && *taskNum >= 0 && *taskNum < CAPACITY) // checks if input is within bounds 
		{
			if (taskArray[*taskNum].assigned != true) // if seat is not occupied 
			{
				taskArray[*taskNum].id = *taskNum; // seat number assignment


				// get day and month of task
				printf("Enter Day Of Task: ");
				scanf("%d", &taskArray[*taskNum].day);
				printf("Enter Month Of Task: ");
				scanf("%d", &taskArray[*taskNum].month);

				fgetc(stdin); // consumes newline so we can use fgets

				printf("Enter Task Description: ");
				fgets(taskArray[*taskNum].element, MAXSIZE, stdin);
				length = strlen(taskArray[*taskNum].element);
				taskArray[*taskNum].element[length - 1] = 0; // removes newline from fgets

				taskArray[*taskNum].assigned = true;


				printf("Succesfully assigned task.\n");


			}
			else if (taskArray[*taskNum].assigned == true) // if user tries to get a task that is already taken
			{
				printf("\nSorry, task number taken already!\n");
				return;
			}
		}
		if (*taskNum == EXITNUMBER) // if input = -1 (the number to abort operation)
		{
			printf("\nQuit!\n");
			return;
		}
		if (*taskNum <= LOWERLIMIT || *taskNum >= CAPACITY) // if input integer is out of bounds 
		{
			printf("\nPlease enter an integer between 0 and 14!\n");
			return;
		}

		free(taskNum);
	}

	else // if task number input is invalid, such as char/string
	{
		printf("\nPlease enter an integer between 0 and 14!\n");
		return;
	}


}