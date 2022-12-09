// Final Group Assignment: To-Do-List
// PROG71985 
// // Reads info from file into program - creates new file if non-existent  
// 
// PROG71985 - Winter 2022
// Version 3.0
//
// Group 4:Ryan Tu, Matteo Filippone, Owen Oliveira  
//

#define _CRT_SECURE_NO_WARNINGS
#define CAPACITY 15
#define SIZE 1

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "taskStruct.h"


void fileReader()
{
	FILE* fpointer1;

	// create file if it doesn't exist 
	if ((fpointer1 = fopen("taskList.dat", "rb")) == NULL) {
		printf("\nNew File Created!\n");
		fpointer1 = fopen("taskList.dat", "ab");
	}

	// copy contents from file into task struct 
	task tmp;
	int size = sizeof(task);

	for (int i = 0; i < CAPACITY; i++)
	{
		taskArray[i].id = i;
	}

	while (fread(&tmp, size, SIZE, fpointer1) == SIZE)
	{
		taskArray[tmp.id] = tmp;
	}

	fclose(fpointer1);
}
