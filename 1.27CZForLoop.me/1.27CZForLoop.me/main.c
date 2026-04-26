#include <stdio.h>




int main() {

	//Declare two integer variables to store int data for each loop iteration.
	//Do not initialize them to any values those will be assigned in the for loop.
	int peanuts;
	int soybeans;


		//Here we initialize peanuts to 0. This just means we start counting from 0.
		for (int peanuts = 0; peanuts <= 100; peanuts += 8) {
			//During the first iteration peanuts is set to 0 so, 0<=100? True, condition satisfied. Proceed on with codeblock.
			//Second iteration peanuts = 9. So is 8<= 100?, true. Condition satisfied. Proceed with codeblock. Third iteration
			//peanuts = 16. So it 16<=100? True, proceed with codeblock. When loop reaches 104 and is tested against the control
			//statement 104<=100? which is false and the loop ends and so does not perform the iteration. So the final value
			//printed will be 96.

			printf("There are %d peanuts!\n", peanuts);

		}

		printf("\nAnd now for the second example\n");

		//Here we start the count from 1. Can start the count from whatever value makes sense for you program.
			for (int soybeans = 1; soybeans <= 10; soybeans++) {

				printf("There are now %d soybeans!\n", soybeans);
		}
}