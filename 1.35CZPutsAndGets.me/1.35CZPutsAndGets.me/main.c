#include<stdio.h>
#include<string.h>



int main() {


	//Provide a buffer for the catsName array with 50 uninitialized elements (index locations).
	char catsName[50]; 

	//Buffer for catsFood array of 25 uninitialized elements.
	char catsFood[25];

	//A buffer for a final sentence variable with 75 slots.
	//Remember, any characters beyond 75 allotted the program would crash/not work. It  would not
	//just be truncated (cut off) from the sentence.
	char sentence[75] = " ";


	//Ask for cat's name.
	//This is the same as printf but automatically adds a newline (\n) after it.
	puts("What's the cat's name?");

	//The difference here vs scanf is that with scanf it does not recognize a string with a space so if user inputs
	//information say "Adam Tindall" would. It would view the space between Adam _ Tindall as the end of the string.
	//Takes on parameter "catsName". "gets" can read in the whole string. Like cats name "bean the keen" the whole
	//string would be read in.
	gets(catsName);

	
	//Ask for the cat's favorite food
	puts("What does he eat?");

	//Again can read in space if user put something like "keen is the  bean"
	gets(catsFood);

	//Build the sentence using the secure version of strcat.
	//This just means use the sentence variable to store your sentence, the sizeof(sentence) as a character limit to that
	//sentence and to store that info in the variable catsName.
	strcat_s(sentence, sizeof(sentence), catsName);

	//This says start sentence with cat's name (Bean Tindall), the "sizeof(sentence) there 75 open spaces available for
	//your sentence, any more will be truncated. The counting is done by computer behind the scenes.
	//This takes place second so is just he middle of the sentence you are creating and so string of characters.
	strcat_s(sentence, sizeof(sentence), " loves to eat ");

	//Again, says store in sentence variable, the maximum size of the sentence and to store in catsFood variable.
	strcat_s(sentence , sizeof(sentence), catsFood);
	
	//Important, in each step you are building a little more of the "sentence" each time a bit more is stored in char sentence variable.


	//Output that sentence to the screen. If over the buffer size 75 the program will crash/not work because we are 
	//using the secure version of strcat -> strcat_s. NOT truncate gracefully.-
	//We use the parameter sentence to show all that we have stored in it to the screen. 
	puts(sentence);

	return 0;

}