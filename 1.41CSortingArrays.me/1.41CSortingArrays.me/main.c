#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main() {

	//Seeding the random number generator with srand() function with time() function as
	//its parameter which caries an argument of NULL (basically "0").
	srand(time(NULL));

	//Storage variables
	int i, temp, swapped;
	//const integer array howMany that sets total number of elements in the array.
	int howMany = 3;

	//This is the storage to hold the random goal count from array. e.g.23,26,25
	int goals[3];

	//This for loop scrolls through the array's 3 index locations and sets them equal
	//to a random value (here we just of pretend output of 23, 26 and 25)
	for (i = 0; i < howMany; i++) {
	//1st pass/iteration starts with "0"
//1st iteration i = 0 <3. Execute next line of code (assign goals[i] (current index/element a value)
//2nd iteration i=1 < 3. Execute next line of code (assign goals[i] (current index/element a value)
//3rd pass i = 2 > 3. Execute line of code that assigns goals[i] current value.
//4th iteration i = 3 3<3? False, end for control loop and move onto next step of code (next code block)
		goals[i] = (rand() % 25) + 1;
//1st iteration. Divide take remainder add 1. 1st number 23 (store 23) in 1st element (human 1) ->
	//-> Index (computer 0). put 23 in index array "int goals[howMany] -> [23, i,i]. increment 0++ ->
	//-> 0 + 1 -> 2nd iteration/pass starts with i = 1. 2nd element/value e.g. is 26. 
	//Store 26 in 2nd element (human 2 -> computer/index 1). Puts 26 in index array 
//"int goals[howMany] -> [23,26,i]. Increment i++ -> 1 + 1= 2 -> Third iteration starts with i = 2.
//3rd pass/iteration divide and take remainder and add 1. 1st number 25 (store 25) in
	//3nd element/2nd index location -> Now array looks like this:
//int goals[howMany] -> [23, 26, 26]. Then increment 2++ = 3 So 4th iteration i = 3. 3<3? False. Stop
		//here and move onto next codeblock the for loop has fully executed.

	}

	printf("Original List\n"); 

	//For loop to scroll through the goals contained in storage variable and print them to screen.
	for (i = 0; i < howMany; i++) {
	//Scroll though 0-2 (computer) 1-3(human) and execute code until 3<3? False
	//print #of goals to the screen from #'s stored in "goals[i(howMany)" [23, i, i] array.
//Print out one line at a time and rerun so: i = 0 -> 0 < 3-> print index 0 from howMany array ->
//[23, i, i]. After that increment i++ = 0 + 1 -> i = 1 to start next (2nd) iteration. So i = 1
//and proceed to i < 3 true execute rest of codeblock. Print out 2nd number in array (index 1) to 
//the screen -> output: 23, 26, ?. On final pass where i < 3 25 is printed to the screen in the
//the 3rd position from the storage variable howMany -> Output: 23, 26, 25. Then we move onto 
		//next codeblock where we will demonstrate how to order the  output sequentially using
		//the bubble sort method.

		printf("%d \n", goals[i]);

	}
//"1" measures "true". So starts out true. Move to nested for loop and nested if conditional statements
	while (1) {
	
		//This starts out as nothing/0 as nothing was swapped on first iteration. Clears buffer.
		swapped = 0;

		for (i = 0; i < howMany - 1; i++) {
//1st iteration/pass = 0 < 3 - 1 0> 0<2? True. Proceed to nested if statement.
//1st pass/iteration - Now increment step i++ = 0+1 = 1 in 2nd iteration is 1. 2nd pass i = 1 < 2. True.

	//Nested if conditional statement to sort the date from each loop.
			if (goals[i] > goals[i + 1]) {
	//1st pass (goals[0,23]> goals[0+1, 26) True - Another way to look at it is -> 23[0] > 26[1].
				//2nd pass compare i = 1>i+1(2nd spot human computer index 1). This compares
				//vales/elements and index spots. So compare 2nd spot (26) with third spot 25 so
				//23<26? False. If control stops and moves to next step.
//Put 23 in temp variable for safe keeping while we do the swap from index 0
				temp = goals[i];
//Now take whats in index 0(26) and make it equal to index 1. Overwrites 23.
				goals[i] = goals[i + 1]; 
//goals[i+1] -> says move to index 1 (2nd spot) in array.
				//Now array looks like this [26, 26, 25]
		//Replace spot in array goals[0+1] (index 1) with temp variable.
				goals[i + 1] = temp;

//Now we retrieve the value in the temp variable(memory) and put back in array 2nd spot. i is array spot
//When if statement has executed the array looks like this [23, 25, 26].
			//Was a swap performed? (1 means true/is a flag) if so rerun. If not move to next block.
	//Which is the outer while loop that is set to "1" from here. This tells the outer while
				//loop to execute the code within again. If the swap = 0, the while loop is skipped.
	//And the program moves onto next piece of code (if conditional) with swapped = 0.

			}
		}
//This if statement/codeblock resides outside of the while loop and is the next step in program.
//Because above if statement fails and is skipped the swapped storage variable stays at 0.
//Just means nothing swapped and to execute the if condition which is to run a break statement 
//That breaks out of the original for loop using "break" statement to next bit of code where
		//we print final sorted list to screen now that all the variables are now in order.
		if (swapped == 0) {

			break;
		}
	}

	//Print out the sorted list under the unsorted list.
	printf("\nSorted List\n");

//This loops through the 3 now sorted elements and prints them out line by line from the 
//storage variables that contain the array. -> goals[howMany] -> goals[23,25,26]
	for (i = 0; i < howMany; i++) {

		//Prints out line, adds line and then prints out line/next element in the array.
		printf("%d \n", goals[i]);
}


}