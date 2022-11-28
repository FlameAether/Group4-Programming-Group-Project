// Group Assignment
// Stores our task structs  
// PROG71985 - 22F - Sec2 - Programming Principles
// Group 4 - Fall November 2022
// Version 1.0

#pragma once

#include <stdio.h>
#include <stdbool.h>

#define MAXLEN 80 // max length of task description 
#define ARRAYSIZE 15 // size of array - program can hold max 15 tasks

typedef struct task {
	int id;
	int day;
	int month;
	bool assigned;
	char element[MAXLEN];
}task;

task taskArray[ARRAYSIZE];



