#include<stdio.h>



//"break" allows you to break out of loop after condition has been met and skip
//iteration over other pieces of information in the codeblock.


int main()
{
	 //Declare 3 uninitialized integer variables to store data.
	int a; 
	
	int howMany;

	int maxAmount = 10; //This variable is set to 10 to provide the control condition in
	//the for loop. Remember computers count starting at "0" not 1. So if in the for loop
	//you want to change the value of say "a" you will have to do that in loop.

	printf("How many times do you want this loop to loop? (up to 10)\n");

	//This tells the computer we are allowing the user to input a digit and then points
	//to the memory address (&) of howMany and to store the information there.
	scanf_s(" %d", &howMany);

	printf("\n");

	//Lets say the user inputs that they want the loop to loop 3 times.
	//So first a is initialized (starting value) to 1. Not necessary to put int in
	//front since you already declared the variable. So first iteration:
	//a = 1-> maxAmount = 10 so is 1 less than 10 1<10? It is so now we execute the rest
	//of the codeblock. So the next step would be the print statement that shows the current
	//value of a to the screen. Then there is an if statement test if a equals how many. If 
	//it doesnt that codeblock is skipped and program goes back to top for another iteration
	//of the loop. 

	//So second iteration is 2<=10? True, execute codeblock.
	//Third iteration is 3<=10? True.  This will go on until a = 10. But here is the key
	//point because we add an if statement that tests for a == a specific amount, here 3,
	//when the loop reaches that point where a = 3 so -> 3 == 3, the if block with the
	//break; statement executes and so the program ends there before getting to 10.
	for (a = 1; a <= maxAmount; a++) {

		//Each iteration prints a new value to the screen 1, 2 and 3 on separate lines.
		printf("%d\n", a);

		//So in first iteration does where a = 1 here you are comparing if 1 equals 3.
		//3 = howMany (pretend user input)
		//If not then skip this if condition. So 1(a)==3? False, skip this codeblock.
		//Second iteration a = 2 -> 2 == 3? False, skip below codeblock.
		//Third iteration where a = 3 -> 3(a) == 3? True, execute the codeblock below
		//which is a break keyword so the program stops here and exits. The values
		//That printed to the screen (one at a time each iteration) are 1, 2, 3
		if (a == howMany) {

			//This break statement stops the program here in the if codeblock.

			break;

		}

	}
}