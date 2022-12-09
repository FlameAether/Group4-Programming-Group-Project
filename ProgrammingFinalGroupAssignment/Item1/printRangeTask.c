
// Group Assignment
// Prints out all tasks header file  
// PROG71985 - 22F - Sec2 - Programming Principles
// Group 4 - Fall November 2022
// Version 1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include "printRangeTask.h"
#include "taskStruct.h"
#define CAPACITY 15

void printRangeTask() {

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
	

	if (counter == 0) // prints out message if no seats are occupied 
	{
		printf("No tasks assigned yet!\n");
	}


}