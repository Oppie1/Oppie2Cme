#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main()
{
	FILE* fPointer;
	//w+ means open file for writing first and then reading after.

	fPointer = fopen("TestTextFile", "w+");

	//This is a tool for a random access file.
	fputs("I am the 3rd Adam", fPointer);

	//Allows you to go to a specific part anywhere in the file.
	//Can start at any location in your file.
	//First parameter is what file do you want to move around.
	//Second parameter sets the number of spaces you would like to move.
	//SEEK_SET parameter means start at the beginning of the file.
	//So now the file pointer is right after the 3 in the TestTexFile (9 spaces to right)/
	//This will overwrite anything after it with whatever your input is.
	fseek(fPointer, 13, SEEK_SET);

	fputs("Aten ", fPointer);
	//So here the sentence will now read: "I am the 3 I am"

	//Here if we want to go backwards from the end to the middle we use SEEK_END in the parameter.
	//Needs to be a negative number. So it means move back 6 spaces.
	fseek(fPointer, -1, SEEK_END);

	fputs(" s", fPointer);
	//So the final sentence is "Adam, I am"

	fclose(fPointer);
}

//SET_SEEK means start from beginning
//SEEK_END means start from end