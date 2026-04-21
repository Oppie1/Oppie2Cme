#include<stdio.h>
#include<stdlib.h>	



int main()

{
	//Declares variable "age" where information can be stored (memory location)
	//It is not initialized to any value as we need it to be "empty" for user input.
	int age;

	//Prints a prompt to the user while adding a new line (\n) at the end.
	printf("How old are you?\n");

	//Scan in input from the user and use a &(pointer) to send input to variable age.
	//in memory. Technically you are sending a number the user input to the memory address 
	//of age using &. Order matters! "&" tells computer go to memory address and store in age.
	scanf_s("%d", &age);

	//This is an if statement. More broadly a conditional statement. "if" (this is true)
	//than execute the code block { code block } below. If not, skip code block and go
	//to next step in code. Use "\n" to make sure prompts are on second line.
	if (age >= 18) {

		printf("\nYou may enter this website.\n");
	}

	//if that is false and the user input an age less than or equal to 18 then the above
	//if statement would be false and skipped. It would move to next if condition here.
	//Now we display what's in the code block when the user input is less than 18.
	//Here a simple message that they are not allowed to enter website.

	if (age < 18) {

		printf("\nYou are not old enough to enter this website.\n");

	}

}