#include <stdio.h>
#include<stdlib.h>


//Program to determine whether a person likes bagels. Based off the answer
//write if statement whether they answer yes or no correctly.
// ** "||" This is the "or" operator -> This OR that.**


int main() {

	printf("---This program demonstrates the '|| -> or' operator.---\n");

	//He we declare a char variable to hold one character variable stored in "answer".
	//answer is uninitialized meaning it acts like a placeholder with no (garbage) value.
	//the term "garbage" just means contents left over in memory (if any). and can be 
	//written over.
	char answer;

	//Here we ask the user to input a piece of character information (y/n).
	printf("Do you like bagels y/n ? \n");

	//Here we take the users input and store it in answer. Again, & prior to answer just
	//tells computer 'memory address of' answer. So it knows what piece of memory to right 
	//to. IMPORTANT: When working with characters " %c" the space before %c is important.
	//Putting a blank space before insures we write over all contents that were left over in
	//memory garbage value mentioned earlier.
	scanf_s(" %c", &answer);


	//This or (||) that if condtion. Either can be true and the if statement will run.
	if ((answer == 'y') || (answer == 'n')) {

		printf("Good job, you input correctly either y or n. ");

		if (answer == 'y') {

			printf("\nYou like bagels");

		}
		else
		{
			printf("\nYou do not like bagels.");
		}
	}

	else {
		//We use else here because it can capture any other key pressed on the keyboard.
		printf("You pressed the wrong key (y or n). Please exit program and try again.");

	}

	printf("\n\n---Second part of program using integers, less than and greater than.---");
	printf("Write a backend program with no user input measuring two sets of if conditions.\n\n");

	if ((5 > 90) || (10 == 9)) {

		printf("\nWell 5 may not be greater than 90 but 10 DOES equal 10 so or condition is true!\n");

	}

	else {
		printf("\nWell both conditions must of been false hence this message.\n");
	}
}