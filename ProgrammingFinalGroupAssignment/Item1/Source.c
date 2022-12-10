// Final Group Assignment: To-Do-List
// PROG71985 - Winter 2022
// Version 3.0
//
// Group 4:Ryan Tu, Matteo Filippone, Owen Oliveira  
// 
// The program your group will write will be one of:
//  1. a calendar / appointment manager
//  2. a to - do / task manager
//  3. a recipe(as in cooking) manager
//  4. (some other) activity manager * *you must get prior approval from
// professor * before * choosing this option * *
// 
// Your program must have the following mandatory features :
//  1. add a new appt / task / recipe / other
//  2. delete an existing appt / task / recipe / other
//  3. update an existing appt / task / recipe / other
//  4. display single appt / task / recipe / other
//  5. display range appt / task / recipe / other
//  6. display all appt / task / recipe / other
//  7. search for appt / task / recipe / other
//  8. friendly / easy to use UI(or menu system)
//  9. save accumulated data to disk
//  10. load accumulated data from disk
//
// Program Organization
//  • modules properly separatedand coded into.hand .c files
//  • modules should be commented according to class practicesand include who
//    authoredand /or the principal editor of the module
//  • build instructions should be included(or obvious(e.g.a single VS solution))
//  • wherever used, tests(unit or otherwise) should be properly documentedand
//    included
//

#include <stdio.h>

// Including Our Header Files
#include "input.h"
#include "taskStruct.h"
#include "newTask.h"
#include "menuPrint.h"
#include "updateTask.h"
#include "printSingleTask.h"
#include "printAllTasks.h"
#include "printRangeTask.h"
#include "deleteTask.h"
#include "availableTasks.h"
#include "searchTask.h"

// FIle read/write Header FIles
#include "fileWrite.h"
#include "fileRead.h"

// Maximum tasks to be accepted
#define CAPACITY 15 

int main(void)
{
	// Read file at startup 
	fileReader();

	printf("^_^ Welcome To Task Manager! ^_^\n\nPlease select from the following menu using the coresponding letter:\n\n");
	menuPrint();

	// Prompt the user for an input
	char userInput;
	userInputFunction(&userInput);

	// will loop until user input = 'z'
	while (userInput != 'z') 
	{ 
		// Use a switch case to take the users input and run different options
		// with their corrisponding functions
		switch (userInput)
		{
		case 'a': 
		case 'A':

		{
			addTask();
			menuPrint();
			break;
		}

		case 'b':
		case 'B':
		{
			printAllTasksFunction();
			menuPrint();
			break;
		}

		case 'c':
		case 'C':
		{
			printEmptyTasks();
			menuPrint();
			break;
		}

		case 'd':
		case 'D':
		{
			deleteTask();
			menuPrint();
			break;
		}

		case 'e':
		case 'E':
		{
			//updateTask();
			menuPrint();
			break;
		}

		case 'f':
		case 'F':
		{
			printSingleTask();
			menuPrint();
		}

		case 'g':
		case 'G':
		{
			printRangeTask();
			menuPrint();
		}
		case 'h': 
		case 'H':
		{
			searchTask();
			menuPrint();
		}
		}
		// Calls user input function
		userInputFunction(&userInput); 
	}

	// Writes task to file 
	fileWriter();
	printf("\nSaved to file\n");

	return 0;
}
