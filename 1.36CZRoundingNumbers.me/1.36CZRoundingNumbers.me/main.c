#include <stdio.h>//printf
#include<math.h>//floor, ceil


//What you dont see but is occurring behind the scenes when you use the math.h library is that the
//floor() function has parameters like this -> double floor(double x) {  }. The float gets converted
//to a double. We will cover why in a later tutorial why this happens.

int main() {


	//float is a data type that allows variables that store/have decimal places. It an double
	//are necessary when decimals are being used or program will not work.
	float bacon1 = 9.65234;
	float bacon2 = 3.3;

	//This sets the output to 2 decimal places. The "floor" function (floor(argument)) just means round down no 
	//matter what. It is different from what we are used to doing like rounding down if decimals below .5.
	printf("bacon1 is %.2f \n", floor(bacon1));

	//So here again just round down. It also makes sense in terms of what we traditionally learn but hte main point
	//here is that "floor" means round down no matter what.
	printf("bacon2 is %.2f\n", floor(bacon2)); 

	//Same concept as floor() but on the way up. So ceil means round up no matter what the decimal is.
	printf("bacon1 is %.2f\n", ceil(bacon1));

	//These examples show that if there is a decimal to use default functions from <math.h> library.
	printf("bacon2 is %.2f\n", ceil(bacon2));
}

/*
ceil() and floor() are mathematical function defined in the <math.h> (header). Their job is to transform
a floating-point object into another number (a whole number).
These are not conditional statements - They don't check for something and make a decision like an if statement would.
//They just apply a fix rule to the output.
Final output:

When using floor()
bacon1 = 9.00
bacon2 = 3.00

When using ceil()
bacon1 = 10.00
bacon2 = 4.00
*/