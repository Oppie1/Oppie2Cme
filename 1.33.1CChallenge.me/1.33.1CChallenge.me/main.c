#include<stdio.h>
#include<ctype.h>


int main()

{
	//Declares a character (char) an array to hold a password with 10 elements in it and initializes
	//the array to 0;
	char password[10] = { 0 };

	//Declares uninitialized variables to track user input.
	int lowerCase = 0, upperCase = 0, digit = 0;


	printf("Please enter a strong password! \n");
	printf("Must contain Uppercase and lowercase letter as well as digits. No more than 10 characters in length. No symbols!\n");
	printf("Make your password:\n");

	//We collect user data and use "%s" because the password is a string of characters. Then we store that info in 
	//password variable whos contents will be tested later on in the tutorial.
	scanf_s("%9s", password,  sizeof(password));

	//The for loop starts the counter i at 0, tests that i is less than (<) the length of the password using the strlen() 
	//function. And then iterates the counter i by 1. strlen() is a function that can carry an array as its parameter
	//and so runs so that the user cannot input more characters than the array has (here [10].
	for (int i = 0; i < strlen(password); i++)
	{
		//This if statement and function checks to see if the current element of the password is a lower case letter.
		//if it is then we execute the if statement print a letter in the current index location and go back to for
		//loop to iterate i by 1 AFTER going through the other if statement since we are not using the break; keyword.
		//So if a was entered on first pass (i = 0) -> a prints to screen in the 0 index and then returns
		//to for loop increment step -> i++ = 0++ = 1. i = 1 to start the next iteration.  for(int i = 1; i<strlen(password); i++)
		//And a would be stored in password under the current element interaction -> password[i].
		if (islower(password[i])) {
			//if it is, sets lowerCase to 1 and moves on to next codeblock. The variable "lowerCase" 
			//Goes from set to 0 to being set to 1.
			lowerCase = 1;//**This will come into play during next step after for loop when whe "check" the password for matching criteria*.
		}
		//Checks to see if password has uppercase letters. In this instance the if lowerCase if statement failed and so 
		//it was skipped. So if uppercase B was input by user on second user input it would first be tested by the islower 
		//if statement which would fail and then move to this if statement. Because it true this statement would execute
		//and skip the next if statement and would input the letter into the password in the index location it is currently at.
		//Then the program would return tot he for loop and increment i so current password is aB.
		if (isupper(password[i])) {

			//So because the user input an uppercase piece of data (uppercase B) the uppercase variable is set to 1.
			upperCase = 1;
		}

		//Checks to see if password has digits in it. In this instance the lowerCase and upperCase if statements failed and so 
		//were skipped. So if 3 was input by the user on the third user input it would first be tested by islower,
		//than by isupper which would both fail and then move to this if statement. Because it is true this statement would
		//execute and go back to for loop increment step -> i++ = 1++ = 1 + 1 = 2. So i now would equal 2 to start the next iteration.
		//The password would now be at ab3
		if (isdigit(password[i])) {

			//So because the user input a digit piece of data (3) the digit variable is set to 1.
			digit = 1;
		}

	}

	//Checks whether all criteria (at least 1 lowercase, uppercase and digit) are met/satisfied.
	//lowerCase AND uppercase AND digit.
	if (lowerCase && upperCase && digit) {

		printf("\nYou have entered a strong password.\n");
	}
	else {

		printf("\nYou have entered a weak password. Make sure all criteria is met. ");
	}
}