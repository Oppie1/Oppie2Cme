#include<stdio.h>


//How to make a table program.

int main()
{

	//Declare an uninitialized integer (int) variable named row to hold the horizonal values.
	int row;

	//Declare an uninitialized integer (int) variable named column to hold the vertical values.
	int column;


	//To start the row we now initialize it (starting value) to 1. So first row -> row<3? -> 1<3? True.
	//proceed to next part of codeblock. Which is where we determine how many columns we will have. 
	//So as is we are on the first row. We must now use a nested for loop to get columns in that row.
	//After the inner loop has fully executed we will end back in the "row" for loop. This for loop
	//wil run three times but during each will have to print out the columns within that row first prior
	//to moving onto the next row.

	for (row = 1; row <= 3; row++) {

		//This is the nested inner for loop and must fully execute prior to moving back to the outer (row) loop.
		//So for first iteration column = 1 -> 1<=3? True, print out the value 1 and go back to for loop to iterate
		//to next value (column++ -> 1++ ->1+1 = 2). So then in that second column slot a 2 will be printed since
		//2>=3. Then will move to next slot 3 and print 3 in the third iteration of the loo. Important to know this
		//is all happening in the first row. 1  2  3.

		for (column = 1; column <= 3; column++) {

			printf("%d", column);
			//First iteration of nested inner loop prints out to screen "%d" (digit) in row 1 column 1.
			//Then goes on to increment step. column = column + 1. So column = 1 + 1 = 2. So for second iteration
			//of inner/nested loop column = 2. Prints our to screen then goes to increment step. 
			//column++ column = 2 +1 = 3 column now = 3 for third iteration. After third iteration column increments to 4
			//--> column = 3 + 1. Prints to screen returns to control statement with column = 4 which is false an the loop 
			//stops because 4 is NOT less than or equal to 3.

			//Important: Each loop prints one value to the screen. It just happens super fast so it seems that it all prints at 
			//once. An example of the 2nd iteration of the program would look like this:
			//1 2
			//1 2
		}

		printf("\n");

	}

}