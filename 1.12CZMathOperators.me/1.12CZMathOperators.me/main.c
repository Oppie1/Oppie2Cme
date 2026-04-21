#include<stdio.h>
#include<stdlib.h>


int main()

{
	//Integer/int data type used when dealing with data that have no decimals.
	//In expressions these are whole numbers and there for the solution will be truncated if a decimal is present.
	int a = 86;
	int b = 21;
	int e = -81;
	int weight = 605;


	//Int will discard the fraction/decimal.
	printf("%d\n", a / b);
	//Int will again discard the faction and the decimal. The result of this expression will stay negative.
	printf("%d\n", e / b);

	//Here we use "float" so that in expressions the solution can carry a decimal.
	float c = 86.0;
	float d = 21.0;

	//%f alone by default goes to 6 decimal places.
	printf("%f \n", c / d); //Goes %f by default goes to 6 decimal places.

	//When written like this (or .3, .4, ect). Then it will go to 2, 3, 4, ect. decimal places respectively.
	printf("%.2f \n", c / d);

	//The % is the modulo/modulus operator. It does normal division but only gives your the remainder of the operation of the result.
	//So here it will be weight 605 divided by 3 which 201 with 2 left over.
	printf("If I eat too many watermelons I will weigh %d more pounds! \n", weight % 3);
}