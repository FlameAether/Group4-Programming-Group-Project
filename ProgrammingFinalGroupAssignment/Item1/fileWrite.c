// Writes info to file  
// PROG71985 - 22F - Sec2 - Programming Principles
// Ryan Tu - Fall November 2022
// Version 1.0

#define _CRT_SECURE_NO_WARNINGS
#define CAPACITY 15

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "taskStruct.h"

void fileWriter()
{

	FILE* fpointer1 = fopen("taskList.dat", "ab");

	int size = sizeof(task);

	fwrite(taskArray, size, CAPACITY, fpointer1);

	fclose(fpointer1);

}
