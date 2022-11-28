// Group Assignment
// Takes in user input to delete task
// PROG71985 - 22F - Sec2 - Programming Principles
// Group 4 - Fall November 2022
// Version 1.0

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


void deleteTask()
{
	printf("Please enter task number to be deleted (or -1 to quit): ");

	int* taskNum = (int*)malloc(sizeof(int));

	if (scanf("%d", taskNum) == INTCHECK) // check return value to see if an int was entered
	{
		// checks if seatnum is null
		if (taskNum == NULL)
		{
			printf("Please enter an integer\n");
			exit(EXIT_FAILURE);
		}

		// if the user input is not equal to our exit number and is within our seat number count (seats 0-11)
		if (*taskNum != EXITNUMBER && *taskNum >= LOWESTTASK && *taskNum <= CAPACITY)
		{
			if (taskArray[*taskNum].assigned == true) { // checks if seat is occupied

				char* reset = "\0";
				taskArray[*taskNum].day = reset;
				taskArray[*taskNum].month = reset;
				strcpy(taskArray[*taskNum].element, reset); // resets names to null 

				taskArray[*taskNum].assigned = false; // deassign the seat

				printf("\nTask has been successfully deleted.");

			}
			else if (taskArray[*taskNum].assigned != true) // if the user tries to delete seat that is already empty
			{
				printf("\nTask is already empty!\n");
				return;
			}
		}
		if (*taskNum == EXITNUMBER) // if user input is equal to -1 (the number to quit)
		{
			printf("\nQuit!\n");
			return;
		}
		if (*taskNum <= LOWERLIMIT || *taskNum > CAPACITY) // if user input is out of bounds 
		{
			printf("\nPlease enter an integer between 0 and 14!\n");
			return;
		}
		free(taskNum);
	}

	else // any other input that is an invalid seat number, such as a char/string 
	{
		printf("\nPlease enter an integer between 0 and 14!\n");
		return;
	}

}
