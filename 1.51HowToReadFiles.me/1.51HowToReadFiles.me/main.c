#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main()
{
	//Lets computer know you are going to look for a file with a pointer
	FILE* fPointer;
	//"r" just means read it back to me.
	fPointer = fopen("TestReadFile.txt", "r");
	//Check if file opened successfully
	if (fPointer == NULL) {

		//Return 1 just means true. That program did not open successfully.

		return 1;
	}
	
	//Need character array to store everything you're going to read (150 is max)
	char singleLine[150];

	while (!feof(fPointer)) {
		//singleLine just means read it line by line.
		fgets(singleLine, 150, fPointer);
		//Outputs the line/prints it out to the screen.
		puts(singleLine);
	}

	//Closes out program. It will close TestTextFile after it print what's in it to the screen. 
	fclose(fPointer);
}

/*
The reason why it comes out as double spaces is that although in notepad(text -> .txt) it is one space.
The computer sees it as a new line character after each line
*/