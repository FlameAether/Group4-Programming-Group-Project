// Group Assignment
// Prints out all tasks on board  
// PROG71985 - 22F - Sec2 - Programming Principles
// Group 4 - Fall November 2022
// Version 1.0

#include <stdio.h>
#include <stdbool.h>
#include "printAllTasks.h"
#include "taskStruct.h"
#define CAPACITY 15

void printAllTasksFunction()
{
	int counter = 0;

	for (int i = 0; i < CAPACITY; i++) {
		if (taskArray[i].assigned == true) // print out the seats that are occupied 
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