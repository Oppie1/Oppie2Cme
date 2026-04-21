#include<stdio.h>
#include<stdlib.h>


//Use else if when you want only one block to execute out of severally  mutually exclusive options.
//Use separate if statements when multiple conditions if all matching blocks need to execute in program.
//In else if control.  Conditions are checked in order. As soon as one condition is true the rest 
//are skipped. Only one block executes, even if multiple conditions could be true.


int main()
{
	//Float variables are used when decimal use is needed.
	float grade1; 
	float grade2;
	float grade3;

	printf("Enter your 3 test grades: \n");
	//%f is what is used for floats to accommodate user entering data.
	scanf_s(" %f", &grade1);

	//floats require this designation in the same way char accepts "%c" or int "%d"
	scanf_s(" %f", &grade2);

	scanf_s(" %f", &grade3);


	//Here we create a new float avg and assign it to the result of an expression.
	float avg = (grade1 + grade2 + grade3) / 3;
	
	//Float defaults to 6 decimal places. %.2f sets the limit at 2 decimal places.
	//Can use %.3, for 3 decimal places, %.4f, for 4 decimal places, ect.
	printf("Average:\n%.2f\n", avg);


	//**We use else if because we want the code to execute when value is found. If we used all 
	//i statements and a person got a 95 all the following would be true. The person would get
	//all the grades A, B, C, D except the final else statement "F"

	if (avg >= 90) {
		printf("Grade: A");
	}

	else if (avg >= 80) {
		printf("Grade: B");
	}

	else if (avg >= 70) {
		printf("Grade: C");
	}

	else if (avg >= 60) {
		printf("Grade: D");
	}

	else {
		printf("Grade: F");
	}
}

//**By using else if the program will read each control statement and execute printf when condition is true
//to next step when condition is satisfied. So say a person got a 75. if(75>=90? False.
//Move on to next else if control staement. Is (75>=80? False, move onto next control. 
//else if.  Is (75>=70, True print out Grade: C