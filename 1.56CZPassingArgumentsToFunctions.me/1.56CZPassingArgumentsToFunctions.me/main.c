#include<stdio.h>
#include<stdlib.h>



//Passing arguments into functions means function needs an extra piece of info in order to work.
//The argument is paired with a function prototype/definition.

//Here in the parameter we have a type of variable "float" and the placeholder "euro" that will accept
//a piece of information from the argument when this function is called.
void convertToDollars(float euro); 

int main() {

	//These are float variables being declared and initialized to actual numbers.
	//We will pass this variables into arguments within main() which will then be
	//passed to the function definition which will execute with the numerical values.
	float euroPrice1 = 1.00;
	float euroPrice2 = 5.50;

	//Below we pass the argument into the parameter "()". So convertToDollars(parameter) -> (1.00).
	//So here main "calls" the convertToDollars function which is defined below main ->*provides behavior*
	//The function outside main executes it code/codeblock and returns nothing but control to main. It's
	//"action" happens outside the main program.

	//This is a function. Look at how it resembles the void function.
	//"euroPrice1" acts like a placeholder for "float euro". It is also attached to the value from the storage 
	//variable in main (set to 1.00). 
	convertToDollars(euroPrice1);

	//These fit into float placeholder(variable) "euro" -> euroPrice2 = 5.50.
	convertToDollars(euroPrice2);

	//The computer knows these arguments (like an exact number here) fit into the parameter of "(float euro)"
	convertToDollars(21.30);

	return 0;
	
}

void convertToDollars(float euro) 
{
	//Not returning anything back to the function/main. Just going to take the euro price from the main() call
	//and use the definition below to perform calculation and print to screen. Just gets info from main.
	//This is the equation for the usd variable to convert euro's to dollars. We must match the data type "float"
	//when doing the equation since it is receiving variables that are themselves float data type.
	//**So for convertToDollars(1) -> float usd = (1) * 1.37 dollars
	//**For convertToDollars(5.5) -> usd = (5.5)1.37 = 7.53. 5.5 euro = 7.53 USD
	//convertToDollars(euro) -> euroAmount-> USD

	float usd = euro * 1.37;

	//Here is the output:
	printf("%.2f Euros = %.2f USD\n", euro, usd);

	//Just means return to main for next step/code/codeblock etc.
	return;
}

/*
Arguments and parameters are related but not the same thing.
Parameter: A parameter is a variable in the function definition. It acts as a placeholder for the value
that will be provided when the function is called. Example:
In void convertToDollars(float euro). euro is a parameter.
Argument: An argument is the actual value or variable you pass to the function when you call it. Example:
In convertToDollars(euroPrice1); euroPrice1 is an argument.
Summary: Parameters are used in function definitions. Arguments are used in function calls.
They work together: arguments fill the parameters when function runs.
*/