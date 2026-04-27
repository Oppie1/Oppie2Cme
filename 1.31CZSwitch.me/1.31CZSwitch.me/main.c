#include<stdio.h>



int main() {

	//When done like this where we don't request the users input it is like a backend
	//test of the program.
	//Declare a char variable and initialize it to a letter grade A-F
	char grade = 'B';


	//The switch function with the parameter of the char variable grade. Here since
	//we set char to 'B' it's like saying switch('B'). So 'B' will be tested against
	//the case conditions.
	switch (grade) {

		//Here we use ":" meaning if the case is true run this code. Here a function and a
		//break; keyword. "break;" just means to break out of/end program from running right
		//there since we don't want to fall through all the other grade possibilities when 
		//we dont have to.  Computer "sees" case 'B' after case 'A' and prints to the screen.
		//So it is unnecessary to test C,D,F.

	case 'A': printf("You got an A");
		break;

	case 'B': printf("You got a B");
		break;

	case 'C': printf("You got a C");
		break;

	case 'D': printf("You got a D");

	case 'F': printf("You got an F");

	//The default keyword is a statement at the end that works like an umbrella catch
	//any other keystrokes and display a message to the screen.
	default:printf("You have pressed an incorrect key/letter/grade");
	}
}