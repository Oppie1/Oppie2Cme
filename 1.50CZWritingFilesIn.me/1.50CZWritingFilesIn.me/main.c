#include<stdio.h>
#include<stdlib.h>


int main()
{
	//Declare a file pointer. FILE is a struct defined in <stdio.h>
	//fPointer is a pointer to a FILE struct.
	FILE* fPointer;

	//Try to open the "TestTextFile.txt" in write mode using fopen_s
	//"w"means:create a new file or overwrite if it exists
	//fopen_s returns 0 on success, so we check for non-zero (failure)
	//fopen_s (...)!=0 means the file didn't open successfully, not that the file doesn't exist.
	//It's checking for error not file absence,
	//It the if statement is then an example of that would be a wrong path such as one that is not within
	//this folder. Such as "C:\\Windows\\system32//test.txt or something similar.
	if (fopen_s(&fPointer, "TestTextFile.txt", "w") != 0) {
		//Print system generated error
		perror("Error opening file");
		//Return an error code if the file opening fails.
		return 1;
	}
	//Write a line of text to the file.
	fprintf(fPointer, "I am the test text file.\n");

	//Close the file to save changes and free resources.
	fclose(fPointer);

	printf("If you're seeing this message you correctly wrote to a file. Go check it out in folder.\n");
}

//sequential access as it implies is in sequence/order (files).
//random access files. can store data all over.