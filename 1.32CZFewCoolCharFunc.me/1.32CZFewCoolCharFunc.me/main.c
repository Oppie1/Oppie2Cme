#include<stdio.h>
#include<ctype.h> //This is a library needed for character types (here isalpha() and isdigit()


//For character functions we declare a int variable and set it equal an int (integer), a char (character) or a symbol.
//Go ahead and change int exampleDataType to show behavior when you make changes to variable.


int main()

{

	//This syntax works for showing any other key besides a letter or a digit.
	int exampleDataType = '$';


	//"isalpha()" function is part of library that can test for characters in the alphabet even though using 
	// "int" data type (exampleDataType). isalpha(parameter here);
	if (isalpha(exampleDataType)) {

		//if int tuna was a letter this would print out so long as it is only one character (%c)
		printf("%c is a letter", exampleDataType);
	} 
	else {//This clumps together an instance where two other things can be possible and so can use another if statement.

		//This is a nested if statement. "isdigit() function" is part of a library that looks for a digit (exampleDataType) is a 
		//parameter of that function . 
		if (isdigit(exampleDataType)) {

			//This would print out if int exampleDataType was a digit.
			printf("%c is a number", exampleDataType);
		}

		//This else statement is an umbrella of the remaining keystroke possibilities and so
		//this statement prints to screen.
		else {
			printf("%c is not an letter or a digit", exampleDataType);
		}

	}
}