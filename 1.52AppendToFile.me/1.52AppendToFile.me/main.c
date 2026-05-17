#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>


int main()
{
	FILE* fPointer;
	//a = append mode. Takes your file pointer and puts it at the end of your file.
	//Where cursor is when you open up the file.
	fPointer = fopen("TestAppendToAFile.txt", "a");
	
	//Check if file opened successfully
	if(fPointer == NULL) {
		printf("Error: Could not open file!\n");
		return 1;
	}

	//Adds this to the end of the file
	fprintf(fPointer, "\n-A warning from the 3rd Adam ");
	fclose(fPointer);

	printf("Test successfully appended\n");

	return 0;
}