// Final Group Assignment: To-Do-List
// PROG71985 - Winter 2022
// Version 3.0
//
// Group 4:Ryan Tu, Matteo Filippone, Owen Oliveira  
//

#include <stdio.h>
#include <stdbool.h>

#include "taskStruct.h"
#include "availableTasks.h"

// Capacity of the maxiumun tasks
#define CAPACITY 15

// This function will show what tasks are available 
void printEmptyTasks()
{
	// print out tasks that are not occupied 
	printf("\nList Of Available Task Numbers :\n\n");

	// While the loop is less than CAPACITY, 
	for (int i = 0; i < CAPACITY; i++) 
	{
	// If the task array is not true (meaning its empty, print 
	// all tasks that are available
		if (taskArray[i].assigned != true) 
		{
			printf("Task #%d\n", i);
		}
	}


}