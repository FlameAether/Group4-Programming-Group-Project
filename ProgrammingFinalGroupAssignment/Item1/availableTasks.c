// Group Assignment
// Prints out available task numbers  
// PROG71985 - 22F - Sec2 - Programming Principles
// Group 4 - Fall November 2022
// Version 1.0

#include <stdio.h>
#include <stdbool.h>

#include "taskStruct.h"
#include "availableTasks.h"

#define CAPACITY 12

void printEmptyTasks()
{
	// print out seats that are not occupied 

	printf("\nList Of Available Task Numbers :\n\n");

	for (int i = 0; i < CAPACITY; i++) {
		if (taskArray[i].assigned != true) // not true = empty 
		{
			printf("Task #%d\n", i);
		}
	}


}