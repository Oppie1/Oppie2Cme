#include<stdio.h>
#include<stdlib.h>



//Prints to screen but is outside main due to function definition. Does not impact main.
void passByValue(int i);

//Does not print to screen we did not tell int int in function definition (below main())
void passByAddress(int* i);


int main() {

	int tuna = 20;

	//Passes the value of 20 into the function.
	passByValue(tuna);
	printf("Passing by value, tuna is now %d \n", tuna);

	//This uses the memory address. So function actually changes the variable.
	passByAddress(&tuna);
	printf("Passing by address, tuna is now %d\n", tuna);

	return 0;
}

//Here we are passing in a variable.
void passByValue(int i) {
	//It doesn't change the original variable. If you want to run some calculations in this function
	//it wont change the original. Just what is in the void function.

	//So when main calls this function it is printed outside of main but does not change the actual value in main
	//when main gets control back after the function runs.
	printf("Inside passByValue, i is now %d\n", i); 
	
	return;
}

//This is a pointer to the memory address of i. 
void passByAddress(int* i) {

	//So now since we hard coded it into memory it actually changes the variable inside the main() program
	*i = 64;

	return;

}