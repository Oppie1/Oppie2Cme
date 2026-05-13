#include<stdio.h>



int main()
{

	//This array holds 20 characters/items
	char movie[20];

	//Whenever you set a pointer to an array don't use the & because the name of your
//array is already a memory address. This is how arrays function vs a variable.
	char* pMovie = movie;

	puts("Enter a movie title");
	//The job of this function is to take input from the keyboard. If they enter more
	//than a certain amount (here 20) it just cuts off. This means store the data in 
	//pMovie with maximum of 20 items. This will just cut off the user input.
	//So this reads (pMovie -> store in pointer variable, 20 - no more than 20 characters
	//stdin - from the standard input which is the keyboard.
	fgets(pMovie, 20, stdin);

	//So when a user enters input but is truncated/cut so that the computer doesn't crash.
	puts(pMovie);
}
//So if you entered the movie title "The Return of the Aten", when printed to the screen
//you would only get "Return of the A" and the rest would be truncated.

//Key point: If user enters a title that has more than 20 characters this could cause
//an overwrite of dta. stdin just means standard output from the keyboard. Could be 
//from file, internet, microphone, ect.

