#include<stdio.h>
#include<stdlib.h>

//Functions allow you to break program into smaller pieces.
//Can write a bunch of code as a function and then you can use that function whenever you want.

//Void data type means that it will return nothing to main. Main will call this function and it will execute.
//This is a function prototype with no parameters. It is before the main program to let C know that it exists
//This is called prototyping a function.
void printSomething();


//main is a function itself. A program is made up of one or more functions. main is the one that is the window
//to the entire program. It is the one function that has to be present in order for the program to run.
//C first looks to main and addresses anything inside the curly braces first.
int main() {

	//In order to use a function like this just copy and paste the function prototype into main. This is called
	//"calling" a function. main is the director of the program in that when it calls a function like void printSomething()
	//it is just telling the function to run and then return control back to main to do the next thing in the
	//program. You can call/reuse the function as many times as you like into the program. Here we call it 3 times.
	//You do not need to include the "void"/datatype in function call.
	printSomething();
	printSomething();
	printSomething();

	printf("\nCongratulations, you ran a function 3 times!\n");
	//This is just used to see if the program runs with no errors. Technically you don't need to write it as
	//the program will put it in by default.
	return 0;
};

//Outside the curly braces this is where we create the functions that main can call on to run in the program.
//main calls/tells the function to run and then control is returned and goes the next step (here a printf statement) in program.

//This is called the function definition. It is where you give the prototype its functionality. 
void printSomething() {
	printf("This is the output of the definition of the prototype of the function.\n");

	//I am done with this function now move onto (return) next step in your program
	return;
}

//*Again, anything we want function to do do goes into curly braces*.
//"return" means we are done with program return back to program from codeblock { printf }


