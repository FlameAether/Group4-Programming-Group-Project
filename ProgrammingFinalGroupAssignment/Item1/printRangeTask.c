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
#include <ctype.h>
#include "printRangeTask.h"
#include "taskStruct.h"

#define INTCHECK 1
#define EXITNUMBER -1
#define LOWERLIMIT -2
#define CAPACITY 15


void printRangeTask() 
{
	int* input1 = (int*)malloc(sizeof(int*));
	int* input2 = (int*)malloc(sizeof(int*));
	int counter = 0;
	printf("Enter a range of tasks you would like to print out\n");
	printf("Enter the task number (-1 to exit):");



	
	// Checks if input is an int
	if ((scanf("%d", input1)) == INTCHECK)
	{
		if (input1 == NULL) {

			printf("Error using malloc\n");
			exit(EXIT_FAILURE);
		}


		printf("From task %d, to task..(-1 to exit)", *input1);
		if (scanf("%d", input2) == INTCHECK) {


			// Checks if tasknum is null
			if (input2 == NULL)
			{
				printf("Error using malloc\n");
				exit(EXIT_FAILURE);
			}


			// Checks if input is within bounds 
			if ((*input1 != EXITNUMBER && *input1 >= 0 && *input1 < CAPACITY) || (*input2 != EXITNUMBER && *input2 >= 0 && *input2 < CAPACITY))
			{

				for (int i = 0; i < CAPACITY; i++) {
					if (((taskArray[i].assigned == true) && (*input1 <= taskArray[i].id) && taskArray[i].id <= *input2))
					{
						printf("\nTask Number: %d\nMonth: %d Day: %d\nDescription: %s\n", taskArray[i].id, taskArray[i].month, taskArray[i].day, taskArray[i].element);
						counter++;
					}
				}

				if (counter == 0) // prints out message if no tasks are occupied 
				{
					printf("No tasks assigned yet!\n");
				}


			}

			// If input = -1 (the number to abort operation)
			if (*input1 == EXITNUMBER || *input2 == EXITNUMBER)
			{
				printf("\nQuit!\n");
				return;
			}

			// If input integer is out of bounds 
			if ((*input1 <= LOWERLIMIT || *input1 >= CAPACITY) || (*input2 <= LOWERLIMIT || *input2 >= CAPACITY))
			{
				printf("\nPlease enter an integer between 0 and 14!\n");
				return;
			}

			free(input2);
			free(input1);
		}
	}

	// if task number input is invalid, such as char/string
	else
	{
		printf("\nPlease enter an integer between 0 and 14!\n");
		return;
	}

	


}