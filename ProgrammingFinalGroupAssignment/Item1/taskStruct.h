// Final Group Assignment: To-Do-List
// PROG71985 
// 
// PROG71985 - Winter 2022
// Version 3.0
//
// Group 4:Ryan Tu, Matteo Filippone, Owen Oliveira  
//

#pragma once

#include <stdio.h>
#include <stdbool.h>

#define MAXLEN 80			// Max length of task description 
#define ARRAYSIZE 15		// The maximum tasks the program can hold

typedef struct task {		// Create a struct for the creation of a task
	int id;					// Take the id number of the task
	int day;				// Take the day for the task
	int month;				// Take the month for the task
	bool assigned;			// Check if the task has been assigned yet (Y || N)
	char element[MAXLEN];	// Take in text as element for what the task is
}task;

task taskArray[ARRAYSIZE];	// Create taskArrray and set it to store 15 tasks



