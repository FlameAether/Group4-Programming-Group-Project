// Final Group Assignment: To-Do-List
// PROG71985 - Winter 2022
// Version 3.0
//
// Matteo Filippone
//

#include <stdio.h>
#include <stdbool.h>
#include "printAllTasks.h"
#include "taskStruct.h"
#define CAPACITY 15

// Prints out all the current tasks
void printAllTasksFunction()
{
	int counter = 0;

	// While the loop is less than 15 (Capacity)
	for (int i = 0; i < CAPACITY; i++) 
	{
		// Print out the seats that are occupied
		if (taskArray[i].assigned == true)  
		{
			// Print out the information thats in the array
			printf("\nTask Number: %d\nMonth: %d Day: %d\nDescription: %s\n", taskArray[i].id, taskArray[i].day, taskArray[i].month, taskArray[i].element);
			counter++;
		}
	}

	// Prints out message if no seats are occupied
	if (counter == 0) 
	{
		printf("No tasks assigned yet!\n");
	}
}