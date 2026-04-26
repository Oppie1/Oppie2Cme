#include <stdio.h>
#include<stdlib.h>


int main() {

	//Using floats to hold values since we are going to be dealing with percentages.  All the variables that need
	//to use floats also need to match the data type of the other variables.
	float grade = 0;
	float scoreEntered = 0;
	float numberOfTests = 0;
	float average = 0;


	//This is a control variable because we dont know how many tests are going to be entered. Programmers will use
	//do while loops infrequently byt they are sometimes used to make sure the code executes fully at least one time.
	printf("Press 0 when complete \n\n");

	//do this... -> lines of code...
	do {
		//This will be printed at the top of the screen and updated each loop.
		printf("Number of tests: %f -- Average: %.1f\n", numberOfTests, average);

		//Prompt user for test score.
		printf("\nEnter test score: ");

		//User inputs test scores and value is stored in "scoreEntered" so it can be used in equations/expressions below to do
		// other calculation (grade and average) Again, & in front of variable just means memory address of.
		scanf_s("%f", &scoreEntered);

		//This just says grade equals whatever the grade is plus the new score entered plus the new score entered.
		//For example in first iteration lest just say first score entered is 90 -> grade = 0 + 90. Grade = 90. This will be used 
		//in following expressions and will print to top of screens codeblock executes. and that grade is incorporated into
		//the average below. second iteration lets say is 100 which will be evaluated in the following expression and printed to screen.
		//Third iteration lets say they get a 95.

		grade += scoreEntered;


		//So first iteration is 0 + 1 = Number of tests = 1
		//Second iteration number of tests = 1+1=2
		//Third iteration number of test = 2+1=3
		numberOfTests++;

		//average = 90 / 1 = 90 -- > 100 + 90 = 190 / 2. And so on...
		//third iteration  = 285/3 = 95 and so on...
		average = grade / numberOfTests;
	}//The program will keep looing as long as its any other number. When user enters 0 the program stops.
	//It is printing to the screen during each iteration. It does not print all at once when user presses 0.
	while (scoreEntered != 0);

}