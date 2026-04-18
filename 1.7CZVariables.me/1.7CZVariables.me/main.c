#include<stdio.h>


/*A variable is just a place holder like in math/Algebra defining your own variable. */


int main()

{
	int age;
	int currentYear;
	int birthYear;

	//This is how it is done on back wend without user entering anything.
	currentYear = 2026; 
	birthYear = 1983;

	//This is assigning a variable age. When we assign a variable in an expression the syntax is
	//variable1 = variable2 (operator: -,+,/,*,ect.) variable3.
	age = currentYear - birthYear;

	//age = 2026 - 1983; -> age = 43

	printf("Adam is %d years old.", age);

}