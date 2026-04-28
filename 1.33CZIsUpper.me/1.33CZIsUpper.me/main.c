#include<stdio.h>
#include<ctype.h>



int main()

{
	int exampleDataType = 'g';

	//First checks if int exampleDataType is a letter. If it is not the program
	//does not execute any of the if/nested if/else statements
	if(isalpha(exampleDataType)){
	
		//Checks if exampleDataType is lower case. If this is not the case if being "false" skip following codeblock
		// and move on to next step.
		if(isupper(exampleDataType)){

			printf("%c is an uppercase letter", exampleDataType);
	}

		//This else statement is like a fallback and captures whatever falls out of the if statement when 
		//it is not an uppercase letter "isupper"
		else {

			printf("%c is a lowercase letter", exampleDataType);
		}

		}//This is the outter if statement that test for if the character is a letter. If it is then the nested if/else
	//statement inside of it execute(run). If not then the if statement and its nested contents are totally skipped.

	//We dont use another "if" statement because if we did the program would evaluate both if statements when we
	//want to exit if exampleDataType were not a letter.
	//If this were just an if statement the computer would show two outputs rather than just the one we want.
	//for a lower case letter g it would show the message that g is a lower case letter AND g is NOT a letter or a number.
	//Which is false logically but also wrong programing wise as well.
	else if (isdigit(exampleDataType)) {

		printf("%c is a number", exampleDataType);

	}

	else {
		printf("%c is not a letter or a number", exampleDataType);
	}
}