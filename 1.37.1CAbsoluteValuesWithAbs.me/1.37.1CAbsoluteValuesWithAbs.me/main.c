#include<stdio.h>
#include<stdlib.h>	
#include<ctype.h>
#include<string.h>
#include<math.h>


//"abs" is a function that just takes a negative number and converts it to a positive number.
//So here if a person starts with the higher number for instance me at 2026 and then enters the 
//lower number 1983 it outputs a positive "42" which makes sense. That said if I enter the lower 
//number first like 1983 and then the higher number the program will spit out a negative
//number. Since we understand the context we know regardless what numbers are put in by user
//we want the positive number.

int main()
{

	//Declare three uninitialized int variables to hold, year 1 and 2 as well as age.
	int year1;
	int year2;
	int age;

	//Call a print() to prompt user for a year.
	printf("Enter a year: \n");
	
	//Call scanf_s to bring in user data.
	scanf_s("%d", &year1);

	//Prompt for another year.
	printf("Enter another year: \n");

	//Scan in next piece of user data.
	scanf_s("%d", &year2);

	//Assign var age to year 1 minus year 2.
	age = year1 - year2;

	//Print the age out to the screen.
	printf("%d\n", age);

	//Use abs() (absolute value) function in the same way you used floor() and ceil() from <math.h>
	//inputting age as the arg to get the positive number value.
	//Assign age to the absolute value of age using abs() with arg age as parameter.
	age = abs(age);

	//Print the result out to the screen.
	printf("The absolute value of age is: %d\n", age);

	//**Make sure you play around with user entries to see the relationship.
	//Example: 1983 - 2026 = -43 -> This automatically gets converted when using the abs() function.
	//If you were to input 2026 - 1983 = 43. Which just stays the same since it is already a positive 
	//number (absolute value.
}