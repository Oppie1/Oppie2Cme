#include<stdio.h>
#include<math.h>



int main() {

	//Declare integer variable to be used as a counter in for loops.
	int i;

	//Declare an integer array named meatBalls with 5 uninitialized elements.
	int meatBalls[5];

	//Declare an integer variable totalMeatBalls and initialize it to "0"
	int totalMeatBalls = 0;

	
	//for loop with i initialized to 0. Scrolls though the 5 elements of the meatBall[5] array so long as i > 5
	// and increments by 1 after each iteration.
	for (i = 0; i < 5; i++) {

		//Prompt the user to enter how many meatballs they ate on a particular day. This will print
		//out during each iteration. We use "i + 1" so we get day 1 instead of day 0. We don't just say
		//i = 1 since we are scanning through an array of 5 elements and computers count from 0 not 1 like humans.
		printf("How many meatballs did you eat on day %d:\n", i + 1);

		//Takes information user inputs during each iteration and places it in the meatBalls array at index [i]
		//All i is is the index location at a given iteration. So for the first iteration i = 0, 2nd i = 1, 3rd i =2...
		//So on the first iteration the first element (element 0) is the users first input. So if the user input 7 then:
		// {7,0,0,0,0,}, Lets say the user inputs 3 for the 2nd iteration -> {7,3,0,0,0} and so on.
		scanf_s("%d", &meatBalls[i]);

		//The for loop must fully execute before moving to next block of code. When i = 5 the condition i < 5 fails.
		//5 < 5? FALSE. Exits for loop and moves onto next part of program (another for loop here).
	}

	printf("\n\nLets say the user enters 7 on first day, 3 on 2nd , 1 on 3rd, 0 on 4th and 9 on 5th. So...\n");

	//After user enters the data and the values are stored in the integer variables we now can access the array "meatBalls"
	//to retrieve data in memory to be computed next step through assignment and equation below.
	for (i = 0; i < 5; i++) {

		//Here we assign the integer variable totalMeatBalls  to an expression of adding all the meatBalls together
		//over 5 iterations of the loop.
		//First iteration: totalMeatBalls = 0 (starting value) + 7 (first value user input) -> totalMeatBalls = 7.
		//2nd iteration: totalMeatBalls = 7 (from day 1) + 3 (from day 2) = totalMeatBalls = 10.
		//3rd iteration: totalMeatBalls = 10 (day 1 and 2) + 1 (3rd day) = 11 on day 3.
		//4th iteration: totalMeatBalls = 11 + 0 (no meatBalls entered on day 4) totalMeatBalls = 11 (no change
		//5th iteration: totalMeatBalls = 11 + 9 = 20 -> totalMeatBalls = 20. 
		//Again, important to know  that meatBalls[i] just means what index location you are currently on. 
		//Array = [0,1,2,3,4] There are 5 elements. REMEMBER computers count from 0 not 1!
		totalMeatBalls += meatBalls[i];
		
	}

	//Declare an uninitialized variable named avg that will that will be assigned a value through an expression.
	//So from out example totalMeatBalls = 20. 20/5(elements/user inputs) = 4 meatballs should be your output.
	int avg = totalMeatBalls / 5;
	
	//Print to the screen %d that matches up with totalMeatBalls as well as %d and the avg.
	//Again, totalMeatBalls has been storing the user inputs and the int avg is a variable we created and 
	//assigned an expression to. Now we can access that information a print it to the screen.
	printf("\nYou ate %d meatballs total, that's an average of %d meat balls per day!\n", totalMeatBalls, avg);
	
		//To reiterate:The 1st %d looks to totalMeatBalls variable where that "total" info is stored.
		//The 2nd %d looks to the avg variable with the solution to that equation is stored.
}