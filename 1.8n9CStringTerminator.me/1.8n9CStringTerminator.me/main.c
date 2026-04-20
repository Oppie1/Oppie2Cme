#include<stdio.h>
#include<stdlib.h>


int main() {

	//Declare a char(character) variable called name with 14 elements and initialize it to a name.
	//This lets the computer know to allow 14 spaces in the buffer.
	char name[14] = "Claudia Villa";

	//Use printf() to show a "hello" message and the initialized variable name to the screen.
	//printf() is a blank function prototype tha you can fill in with arguments so the computer
	//know what to do.
	printf("My name is %s \n", name);
	
	//%s adds a string "Claudia Villa" at end of this sentence in place of %s. Function call 
	//printf(arguments) and its arguments lets computer know what string contents are and 
	//storage variable (name).

	//This says replace 2 index spot (3rd character) with 'z'
	name[2] = 'z';

	//This shows that change when printed to the screen. Printf() is a function prototype
	//with empty parameters. Which here are filled in with arguments.
	printf("My name is %s \n", name);

	//Declare and initialize a char (character) variable with 10 elements set equal to a food.
	//The reason why we allow for specific space (here 10) is to not overflow the buffer.
	//and causes errors. If person types more than the 10 character/elements allotted the  
	//output will just get truncated (cut-off) an not shown to screen.
	char food[10] = "soybean";
	printf("The best food in the world is %s\n", food);

	//strcpy() function allows you to overwrite what is in the value that is stored in the 
	//food variable (here soybeans). 
	strcpy(food, "peanuts");
	//He we show that the variable's stored "food" value changed from soybeans -> peanuts. It will 
	//now use "peanuts" in food storage variable instead of soybean from this point fourth in program 
	printf("The best food is %s\n", food);

}