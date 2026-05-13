#include<stdio.h>




int main()

{
	char movie1[] = "The return of the Aten.";

	puts(movie1);
	//This pointer will point to the first element in that address.
	char* movie2 = "Aten only beholden to Anubis.";

	//The reason that it is able to print this out to screen even though the above is a pointer is because
	//what puts does is takes a string and starts printing it out to the screen until it gets to the NULL 0.
	//The 0 terminator is what's at the end and so computer knows when to stop. So what's going 
	//to happen is this movie2 is not storing characters or strings. It is storing the address where the string
	//begins. It says start here and print letters out until program gets to the NULL 0.
	puts(movie2);


	movie2 = "New movie title.";

	//Since movie2 is a variable as well we can set movie movie2 to new movie title. Because the computer reads
	//from top down it will still print out the first statement to the screen and then the second.
	puts(movie2);
	
}

//Key concept from this tutorial is that whenever you make a variable array of characters it's hard to change because the name of
//the array is a constant. And you cant easily change the constants. However, whenever you make a pointer to a string the pointer
//can be a variable (char * (pointer) movie2). So when we put the variable (here movie2) on the left hand side we can change it in
//the program. The variable is just storing the address of something so we can treat it like a string saying start at this address
//movie2 and start printing on the screen until you get to NULL 0. 