#include <stdio.h>
#include<stdlib.h>


int main()
{
	//Integer variable to store the hours studied throughout the program
	int hoursStudied; 

	//Integer variable to store the ranking for poor behavior (0-5). 0 = good. 1-5 = bad
	int poorBehavior;

	printf("---Scoring of students in a class for their study time and behavior---\n\n");

	//Prompt user for information.
	printf("How many hours did they study:\n");

	//Input that information into program. Use %d to tell computer to store digit and
	//&hoursStudied to show it where it is to be stored (& prior just means memory address of)
	scanf_s("%d", &hoursStudied);

	//Prompt user (probably a teacher) to rate their behavior.
	printf("\nHow would you rate their behavior on a scale of 1-5 (0=good, 1-5 bad)\n");

	//Input that information into program. Use %d to tell computer to store digit
	//and &poorBehavior to show it where to store it. (& prior just means memory address)
	scanf_s("%d", &poorBehavior);

	//Here we make an if statement that solves for two conditions/statements. When we use "&&"
	//operator we are just saying This (first condition/statement) AND (&&) that 
	//(second expression/statement) must be true to satisfy the if condition.
	//If it is true we execute the if statement code block to let student know they
	//did well. If either condition is false the if condition fails and we move to else 
	//statement to gently let the student know they could use some improvement.
	if ((hoursStudied > 7) && (poorBehavior == 0)) {

		printf("\nYou've been a great student!\n");
	}

	//Here we use an else statement since the if condition was false and therefore
	//it's code block was skipped.
	else {
		
		printf("\nYou either need to study more or improve behavior please.\n");
	}
}