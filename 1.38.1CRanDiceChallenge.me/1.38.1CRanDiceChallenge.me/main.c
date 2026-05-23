#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {

	//These are variables where information is stored (memory variables)
	//Declare 4 int uninitialized variables to hold each dice roll value. (diceRoll1, diceRoll2, ect.).
	//These will be assigned to the function that uses rand % 6 (dice has 6 side) and + 1 since computers count from 0.
	int diceRoll1, diceRoll2, diceRoll3, diceRoll4;

	//Declare 2 int variable total and average that will be assigned their values through an expression using
	//the dice roll variables.
	int total, average;

	//Declare a char variable to hold a character that represents the user option.
	char userOption;

	//This seeds the following rand functions with time to get truly unique results.
	srand(time(NULL));

	//Introduction/instructions. When you do a program start sketching this in an outline so you roughly know what the
	//rest of the program will look like. Good place to sketch "comments" before in an outline at top of program or
	//on paper. Give instructions on the betting game that will sum three dice rolls and then the average of the
	//three dice (dice rolls total / 3 = avg). The write sentence where you say the user needs to guess whether the 4th
	//dice is higher, lower or the same as the average of the 3. Use "puts to write the sentences - the nice thing about
	//puts() function over printf() is that it automatically adds a new line after each puts("sentence").
	puts("Betting game.");
	puts("In this game, three dice are rolled and their total is computed.");
	puts("The average of these three dice (total divided by 3) tells you a number between 1 and 6.");
	puts("Then you will guess if the next dice roll (4th dice) is higher (h), lower(l) or the same (s) as that average");

	//Roll the 3 dice by assigning. Here we will assign each dice roll to a function that contains rand() in parenthesis
	//(rand()) since we want the result of the rand function itself, % 6 since a dice has 6 sides and we are taking not
	//the whole random number but just the remainder 0-5 we add (+) 1 at the end because if 6 goes into the random
	//number exactly with no remainder we need to "humanize" it by adding 1 since a dice is 1-6 not 0-5.
	diceRoll1 = (rand()) % 6 + 1;
	diceRoll2 = (rand()) % 6 + 1;
	diceRoll3 = (rand()) % 6 + 1;

	//Here we write the expression for the total of the 3 dice and store it in the total variable.
	total = diceRoll1 + diceRoll2 + diceRoll3;
	//Now we take the average of that total by dividing it by 3
	average = total / 3;

	//Now use a printf() function to display each of the 3 dice rolls to the screen in a sentence.
	printf("Dice1 : %d, Dice 2: %d, Dice 3: %d\n", diceRoll1, diceRoll2, diceRoll3);
	//Use another printf() function to write a sentence  and display the total of the 3 dice is... to the screen.
	printf("Total of the 3 dice: %d\n", total);
	//Print a sentence to the screen that take the approx average of the 3 dice.
	printf("Average(approx) of three dice: %d\n\n", average);

	//Prompt user using puts to guess if the next dice roll is higher(h), lower(l) or the same(s) as the average: 
	puts("Guess if the next dice roll is higher (h), lower(l) or the same (s) as the average: ");
	//Use scanf_s() function to bring in the users selection (char -> %c) and store it in the memory/variable address userOption
	//Reads in char variable and points to userOption variable store data in memory.
	scanf_s(" %c", &userOption);

	//Write code/expression (like the ones you already did) that rolls the 4th dice. Seed (rand() % 6) + 1
	diceRoll4 = (rand() % 6) + 1;
	//Print value of fourth dice to screen using printf() -> %d
	//Prints value of 4th dice to screen from variable "diceRoll4"
	printf("\nFourth dice: %d\n", diceRoll4);

	//Use if statement plus and(&&)/or(||) operators to determine what to say to user.
	//If user enters higher and the dice rolled is higher than average print out if statement codeblock to screen (puts).
	if ((diceRoll4 > average && userOption == 'h') ||
		//If Rolled4 < than average AND the user option == 'l' if statement is true and print out the put statement. So
		//if roll is less than the average AND the user entered 'l' (lower) do this (which is print out if statement) codeblock.
		(diceRoll4 < average && userOption == 'l') ||
		//If dice roll is the same as the average AND the user input (userOption) is 's' same then "put" out if statement.
		(diceRoll4 == average && userOption == 's'))
		//So if any of the guesses on the roll are correct print (puts) a message to screen letting them know they guessed right.
		{
			puts("Good job, you guessed right!");
	}

	//Make an else statement that is a catch all other that lets the user know they guessed incorrectly.
	else {

		puts("Sorry you guessed wrong :(");
	}

}
