#include<stdio.h>
#include<stdlib.h>


int main()
{

	//Integer variable (int) for age.
	int age;

	//Character variable for gender (M/F). Char can only handle 1 character. To handle a sentence you 
	//need a string variable.
	char gender;

	//Print a question prompt to the screen asking for user information
	printf("How old are you? \n");

	//%d is for integer input, &age points to its memory location.
	scanf_s("%d", &age);

	printf("What is your gender? m/f \n");
	
	//%c is used when we want to input a character, space skips leftover and creates a new line automatically.
	//"1" is the number of characters allowed in the users input. So either an M or and F. Any more and program will fail
	scanf_s(" %c", &gender);

	//This is left open to line 25 and so will not print this until other conditions are satisfied.
	//That's the power of nested if statements. Everything within the nest will fully execute in the 
	//ordered they are declared.
	if (age >= 18) {

		//Program prints this to screen then goes to next part of if statement.
		printf("You may enter this website.");

		//Below are the nested if statements. Each much fully execute prior  to moving to next
		//step and above execution.

		//If the user enters 'm' this if statement executes and 'm' prints to screen.
		//"==" Means to set something EXACTLY equal to something else.
		if (gender == 'm') {

			printf(" A male has entered the website.\n");

		}

		//This prints if the user enters 'f'.
		if (gender == 'f') {

			printf(" A female has entered the website.\n");

		}

		//This is where we get a print statement and skips over the nested if statements inside the
		//first if statement's codeblock because the person was NOT 18 or older. 

		//That said we still need to test (condition) what the age is in another if statement and execute it's
		//code block where here is to print that they are not 18.
	}
			
			//Allows first statement to be printed. In my opinion an else statement may be more appropriate 
			//here (upcoming lesson).

			if (age < 18) {

//**This is outside the nested if statements {{  because of being outside the first if statements curly braces}Exists here}}*
				//It executes when the first if statement shows underage.
				printf("You may not enter this website\n");
			}

	}
