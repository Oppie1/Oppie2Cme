#include<stdio.h>
#include<stdlib.h>



int main()
{
	//You can declare variables like this. Having data type first and then use comma (,) separated variables
	//to declare as well as initialize (set equal to)
	int a = 5, b = 10, answer = 0;

	//Increment BEFORE expression is evaluated.
	//So answer = 6 * 10 = 60 (++a -> 1 + 5 = 6)
	//So this works because a is incremented before anything else happens. Does not follow order of operations.
	answer = ++a * b;

	//%d is placeholder for digit type. "answer" is where the solution is stored.
	printf("Answer: %d\n\n", answer);


	a = 5, b = 10, answer = 0;

	//Increment AFTER expression is evaluated.
	//So answer = a++ * b -> 5 * 10 = 50. Since we do the multiplication first and add 1 to a after. Because
	//of order of operations.
	answer = a++ * b;

	//This should show the answer is 50
	printf("Answer: %d\n", answer);
	
	//A has now incremented to 6 (a++ = a + 1 = 5 + 1 = 6 following the assignment/expression.
	printf("Now a equals: %d\n", a);


	int tuna = 20;

	//tuna starts at 20.
	printf("\n%d\n", tuna); 
	
	//Increments by 1. (tuna = tuna + 1 -> 20+1 = 21) -> tuna now equals 21.
	++tuna;

	//Prints 21 to screen
	printf("%d\n", tuna);

	//Increments by 1 and shows 22 to screen.
	++tuna;
	printf("%d\n", tuna);
	
	//This will  increment tuna by 1 before * by 2 So 23 * 2 = 46
	tuna = ++tuna * 2;
	
	printf("%d\n", tuna);

	//This will take that 46 and times by 2 and then add 1.
	//46*2= 92 -> then incrment (++) tuna by 1 so tuna will = 93
	tuna = tuna++ * 2;

	printf("%d\n", tuna);

}