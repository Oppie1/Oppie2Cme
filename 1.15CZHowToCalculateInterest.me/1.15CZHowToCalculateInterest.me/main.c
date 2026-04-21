#include<stdio.h>
#include<stdlib.h>


int main() {
	
	//Here we declare an integer (int) variable "pageViews" and initialize it to 0. Can be any  value you want.
	int pageViews = 0;

	//Using the "=" and an expression to assign pageViews to a new value -> pageViews is now equal to 1. Which is
	//then stored in the variable's memory location for use in program. So int will be 1 from this point in program onwards 
	//unless changed again.
	pageViews = pageViews + 1;

	//Prints our to screen then moves to next step.
	printf("pageViews:%d\n", pageViews);

	//This adds another 1 to the current page views which currently sits at 1. So page views now = 2.
	pageViews = pageViews + 1;

	//Now "2" prints out to screen.
	printf("pageViews:%d\n", pageViews);

	//This again adds one more to current "pageViews" brining the total page views to 3.
	pageViews = pageViews + 1;
	//Prints that most recent value to the screen.

	//This is your principle/starting balance. We declare balance a float variable
	//an initialize the starting value to 100.00.
	float balance = 100.00;

	//This is how we calculate 10% interest on the balance.
	//This is like saying balance = balance * 1.1. Which equals: 100*1.1 = 110.
	//Lets just say we earned %10 interest on day 1.
	balance *= 1.1;
	printf("\nbalance:%.2f\n", balance);

	//Now on day 2 we make another %10 interest which will have to be calculated off the
	//interest we already earned on day 1. So,
	//balance*= 1.1 -> balance = balance * 1.1 -> current balance = 110 x interest %1.1 = 121.
	balance *= 1.1;
	printf("balance:%.2f\n", balance);

	//Next on day 3 we repeat the step but here we get a decimal and so it fits us using %.2f so in 
	//shows the decimal places needed for an exact output. So,
	//balance*=1.1 -> balance = balance * 1.1 ->current balance = 110 x interest %1.1 = 133.10
	balance *= 1.1;
	printf("balance:%.2f\n", balance);

	return 0;
	
}

/*
Output
-----------
pageViews:1
pageViews:2

balance:110.00
balance:121.00
balance:133.10
*/