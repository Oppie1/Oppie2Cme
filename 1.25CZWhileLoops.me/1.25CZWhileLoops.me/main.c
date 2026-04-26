#include<stdio.h>
#include<stdlib.h>


int main()
{
	//Declare an integer variable and initialize it to 1. This is the starting point for day.
	int day = 1;

	//Declare a Float variable. floats can take a decimal. Here the initialization just
	//means the starting value of amount is one cent.
	float amount = 0.1;

	//This states as long as day is less than 31 do this...First iteration day < 31?
	//True, move on to next step in codeblock.  Second iteration 2<21? True, move to next
	//step in codeblock.  The last iteration is 30<31 the loop runs it's last time.
	//When that is done executing and returns to the control condition where 
	//while(31<31)?. is False. So the loop does not iterate. It ends and the codeblock does
	//not execute it simply moves to the next step after the codeblock.

	while (day < 31) {

		//Within this codeblock is like a mini program. It goes to each line, does an action,
		//Then moves to next line in iteration/code does that action, then to next line and so on.
		//The print statement runs during each iteration. Prints one thing. Then moves on.
		//Does this one thing during EACH iteration. Does not print everything all at once.
		//First iteration Day : 1 -- > Amount $.01
		//Second iteration Day: 2 --> Amount: $.02
		printf("Day: %d -- Amount %.2f \n", day, amount);
		
		//This does the calculation of doubling the amount which will be shown in day 2
		//amount after day 2 is .02 but wont be printed to the screen until next iteration.
		//It just sits in the variable "amount" until called to print. As programmers we "call"
		//functions. printf() is a function -> printf(parameters/what is in () above)
		amount *= 2;
		
		//So first iteration increment step day = 1. So day++ = day = day + 1;
		//Second iteration day now equals 2 (this is stored in the ind day variable)
		//day now equals day = 1 + 1 = 2. The second iteration now the day equals 2.
		//Each iteration is tested in the while loop like this:
		//while(day<31). So this keeps going until day = 31.
		//So the last iteration day++ = day = day + 1 -> day = 30 + 1 (This is tested against
		//control loop. while (31<31)? False, stop loop and exit program.
		day++;

	}
}