#include<stdio.h>
#include<stdlib.h>


/*Order of Operations: Put what you want to do in parenthesis (" ") if you want to dictate the order of an expression.
ex. PEDMAS, Foil, etc.*/

int main()
{
	int a = 4 + 2 * 6;//2*6 first = 12 + 4 = 16.

	//Take that int a (just a since already defined data type above) and print to screen.
	printf("Result: %d \n", a);

	//You can redefine "a" (int) mid program like this without having to declare "int" a. Just "a" will do.
	//Using parenthesis allows you to dictate "4+2" happens before the multiplication ->So (4+2) = 6 * 6 = 36/
	a = (4 + 2) * 6; 

	printf("Result is now: %d\n", a);


}