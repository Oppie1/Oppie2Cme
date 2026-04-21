#include<stdio.h>
#include<stdlib.h>


int main()
{
	//Integer storage variables (int)
	int a;
	int b;
	int c;


	//Computer reads from left to right. Setting variables equal to each other like this just means
	// there value is the same. Remember once declared a data type like "int" here you do not need
	//to declare a variable again. It carries that data type throughout the program.
	a = b = c = 100;

	//Computer points to variable/values and order in which the variables are to be displayed.
	printf("%d, %d, %d", a, b, c);

	//float storage variables allow for decimal places. You don't always have to declare with a float on new lines
	//and saying "float". This works as well (This is the same for integers (int) as well.
	float age1, age2, age3, average; 
	age1 = age2 = 10.0;

	//Ask/prompt user for age/info.
	printf("\nEnter your age.\n");

	//scanf_s takes the user information and  uses %f to tell computer the data type to see in is a float. Then in the
	// next space & points to the age3 variable and stores information there.
	scanf_s("%f", &age3);

	//This expression assigns "average" variable a value adding all three ages together and divide them by 3.
	average = (age1 + age2 + age3) / 3;

	//This sentence uses %f to know where to put the float variable and then in the variable "average" for the value
	//stored from the expression above.
	printf("The average age ot the group is %.f\n", average);
}