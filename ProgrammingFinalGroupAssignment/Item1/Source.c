// Group Assignment
// Main Source File
// Program that manages tasks with file input and output capabilities  
// PROG71985 - 22F - Sec2 - Programming Principles
// Group 4 - Fall November 2022
// Version 1.0

#include <stdio.h>

// function header files
#include "input.h"
#include "taskStruct.h"
#include "newTask.h"
#include "menuPrint.h"

#include "printAllTasks.h"
#include "deleteTask.h"
#include "availableTasks.h"

// file input/output files
#include "fileWrite.h"
#include "fileRead.h"


#define CAPACITY 15 // can hold up to 15 tasks 

int main(void)
{
	// read file at startup 
	fileReader();

	printf("^_^ Welcome To Task Manager! ^_^\n\nPlease select from the following menu using the coresponding letter:\n\n");
	menuPrint();

	// ask user for input
	char userInput;
	userInputFunction(&userInput);


	while (userInput != 'z') { // will loop until user input = 'z'

		switch (userInput)
		{

		case 'a': // add task
		{
			addTask();
			menuPrint();
			break;
		}
		case 'b':
		{
			printAllTasksFunction();
			menuPrint();
			break;
		}
		case 'c':
		{
			printEmptyTasks();
			menuPrint();
			break;
		}
		case 'd':
		{
			deleteTask();
			menuPrint();
			break;
		}

		}

		userInputFunction(&userInput); // calls user input function
	}

	fileWriter(); // writes task to file 
	printf("\nSaved to file\n");

	return 0;
} // testing commit function
