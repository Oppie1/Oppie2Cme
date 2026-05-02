#include<stdio.h>
#include<math.h>




int main()
{
	//Declare an uninitialized storage variables to hold the counter variable for the for loop.
	int i;
	//Declare an uninitialized variable to hold the number of the dice roll 1-6.
	int diceRoll;


	printf("Print a Random Number Example (5 random numbers in total): \n");

	//Declare a for loop with i initialized to 0. We left int i uninitialized because we are going to use it as a counter
	//in the two for loops of this program.
	for (i = 0; i < 10; i++) {

		//i=0, i<10?, true go to next step - print to screen "random" number (uses time and some large number in 10s of thousands).
		//Then we iterate i++ -> 0 + 1 = i -> i=1 to start the next iterations. Each iteration a new random number prints
		//out until i<10 fails. It is not printed all at once. Each time the for loop iterates a new value prints.
		//The for loop must fully execute prior to going onto next step.

		//2nd iteration: i = 1; i < 10? True, print random number to screen and move onto iteration step -> i = 1 + 1
		//i = 2 to start third iteration -> i = 2; 2<10? True, print number to screen move to iteration step i=2++=2+1 i= 3.

		//We keep scrolling and printing random numbers in the for loop so long as i < 10 in the control. When i = 10 
		//it fails the control of the for loop -> 10<10? False, the for loop stops right there and the program goes to next part.
		//rand() is just a function that provides us with a random number to fill it %d.
		printf("%d \n", rand());
	}

	
	printf("\n\nPrint a Random Dice Roll to the Screen (1-10 total rolls):\n");

	//Again, in a for loop the program keeps iteration until the control condition is not met (i<10). Here we 
	//set i to 5 again. This i has nothing to do with the i in the first for loop. It is just a placeholder to 
	//be initialized to whatever value we need. Here because we initialize it to 5 it is telling the computer 
	//"Hey, start counting starting at 5 rather than starting from 0. So the first iteration i would equal 5
	//So when the iteration step comes it would look like this -> i++ = 5++ = 5+1 = 6. So i would equal 6 to start 
	//the second iteration. Remember i is just a counter variable. So rather than having 10 numbers that print out 
	//to the screen in the first for loop we will only have 5 numbers (dice rolls) print out here.
	for (i = 5; i < 10; i++) {
		
		//Takes any random number and divides by 6 and only takes the remainder (% modulus operator). We add 1
		// to the end to account for instances where there is no remainder and so the diceroll would just be 1.
		// e.g. 12/6 = 2 with "0" remainder. So we add 1 to it. 0 + 1 = 1 would be that dice roll.
		//Again, rand() is just a function that gives us a random number.
		diceRoll = (rand() % 6) + 1;

		//Prints out 5 numbers 1-6 rather than very large numbers.
		printf("%d \n", diceRoll);


	}

}