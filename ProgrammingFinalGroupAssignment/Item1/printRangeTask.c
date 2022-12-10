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
#include <ctype.h>
#include "printRangeTask.h"
#include "taskStruct.h"
#define CAPACITY 15


void printRangeTask() 
{

	int counter = 0;
	printf("Enter a range of tasks you would like to print out\n");
	printf("Enter the task number:");
	int input1;
	scanf("%d", &input1);
	printf("From task %d, to task..", input1);
	int input2;
	scanf("%d", &input2);
	
		for (int i = 0; i < CAPACITY; i++) {
			if ((taskArray[i].assigned == true) && ((input1 <= taskArray[i].id) && taskArray[i].id <=input2)) 
			{
				printf("\nTask Number: %d\nMonth: %d Day: %d\nDescription: %s\n", taskArray[i].id, taskArray[i].day, taskArray[i].month, taskArray[i].element);
				counter++;
			}
		}
	

	if (counter == 0) // prints out message if no tasks are occupied 
	{
		printf("No tasks assigned yet!\n");
	}


}