#include<stdio.h>
#include<stdlib.h>



//Two types of scopes of variable one local and one global.
//Global = located outside function (main or other functions in program)
//Local = located outside function.
//Local = local inside function.
//Whenever you make a variable ABOVE your functions any function in the program can use it.
//Here we make a function prototype.
void printSomething();

//Here because the function is outside main and other function ANY function (even printSomething).
//can use it. This is a GLOBAL variable.
int tortillasOutsideMain = 3;

int main() {

	//Only main can use this variable. Functions (like printSomething() here) outside of main cannot use
	//this variable. It is local to the main function. The same goes for other functions outside of main.
	//They can have their own local variables too. This is a LOCAL variable.
	int tortillasInsideMain = 23;
	
	//Inside main example of a local variable.
	printf("I have %d tortillas\n", tortillasInsideMain);
	
	//Inside main example of a global variable.
	printf("I have %d tortillas\n", tortillasOutsideMain);

		//A call to use the function outside of main.
	printSomething();

	//printf("Cannot use variable in function outside main? It is that functions local variable:\n");
	//printf("variableInFunction = %d -> would get an error and program would not run.",variableInFunction);

}

//So if printSomething() function wanted to use the tortillasInsideMain variable it could not because it is local
//to the main function. The program would get an error.
void printSomething() {

	int variableInFunction = 7;

	printf("Check, can function use global variable? Yes, I have %d tortillas.\n", tortillasOutsideMain);

	printf("The local variable to printSomething() function shows the value of the variable: %d", variableInFunction);

	return;

}

//int main(){ If printSomething() wanted to use tortillasInsideMain variable it could not. ONly functions
//inside main could use that variable.