// Final Group Assignment: To-Do-List
// PROG71985 
// Writes info to file  
// 
// PROG71985 - Winter 2022
// Version 3.0
//
// Group 4:Ryan Tu, Matteo Filippone, Owen Oliveira  
//

#define _CRT_SECURE_NO_WARNINGS
#define CAPACITY 15

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "taskStruct.h"

// Function to read the header files
void fileWriter()
{
	// Initialize fpointer1 and make it write in binary to the listed .dat file
	FILE* fpointer1 = fopen("taskList.dat", "ab");

	int size = sizeof(task);

	// Write the contents of taskArray to the file, and use the other variables to specify fize
	fwrite(taskArray, size, CAPACITY, fpointer1);

	// Close the file
	fclose(fpointer1);
}
