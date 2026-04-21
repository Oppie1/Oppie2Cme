#include<stdio.h>
#include<stdlib.h>



int main()
{

	//scanf_s points to this memory location and value is stored here. Int means this stores an integer.
	//%d means we store a digit.
	int age;
	
	//Storage for gender. %c means character. scanf_points to this memory location and stores data.
	char gender;


	printf("How old are you? \n");

	//Takes input and stores in age variable int (%d -> int)
	scanf_s("%d", &age);

	printf("\nWhat's your gender m/f\n");

	//Takes input and stores in age variable char (%c -> char) char is a character.
	//You can provide a parameter to insure only '1' character is read in like this ("%c", gender, 1)
	scanf_s(" %c", &gender);


	//This is an if conditional statement. Then nested if statements to sift data making it more precise. 
	if (age >= 18) {

		//If user inputs 18 or older this prints to screen and goes to next step (another nested if statement)

		printf("\nYou may enter the website.\n");

		//Nested if statement

		if (gender == 'm') {

			printf("A male has entered the website.\n");

		}

		//Nested as well. This is an else statement that prints if 'm' is not entered as a default umbrella 
		//statement since you're either a male or a female generally speaking.
		//Only problem is it could be any character and it would print out. User may not select or be male or female.
		else 
		{
			printf("A female has entered the website.\n");
		}

	}

	//This else statement sits outside the original if statement that contains the nested loops. If a user is 
	//not 18 or older as was the case in the first condition the whole nested sequence is skipped and this else
	//statement executes if{ nested if and else } if the first if is false else{  print me }.
	else {

		printf("\nYou are not old enough to enter the website.\n");
	}
}