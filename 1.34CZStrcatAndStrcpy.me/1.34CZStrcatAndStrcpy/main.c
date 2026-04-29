#include<stdio.h>
#include<string.h>
#include<ctype.h>



//Here we learn the strcat_f. it's purpose is to concatenate (append) one string to the end of another while
//providing built in safeguards to prevent buffer overflows.

//Do this tutorial in stages. First do the first part in segments until you reach system("cls"); Run the program and 
//then do second part where you print "Adam is a person" out to the screen.

//Lastly, do the third section where we describe how toupper() function works.

int main()
{
	//This allows for 100 characters 99 + null terminator(0). The string array is initialized to 
	//Hey just means first thing in string is hey.
	char soy[100] = "Hey ";

	//This is the second piece of the array strung in after the first part (Hey)
	//The "sizeof()" (function) is used to tell the computer the size of the char string of characters.
	//It carries a parameter of soy since we are dealing with the char soy variable. A string of [100] elements.
	strcat_s(soy, sizeof(soy), "Adam ");

	//This is the third piece of information. Each one is dropping in a line to the next index location/element.
	strcat_s(soy, sizeof(soy), "you ");

	//So you probably already guessed it but we are just stringing char variables together to make a sentence.
	//Same concept here. Just stringing in elements one at a time one after another.
	strcat_s(soy, sizeof(soy), "program.");

	//Now we just print the char variable contents to the screen.
	printf("%s \n", soy);

	//Without this line both statements, above and below are printed to the screen.
	system("cls");

	//Clears buffer/memory after closing.
	memset(soy, 0, sizeof(soy));

	//Although we could just write the string below over the other this takes care of any extra characters from slipping though.
	//String in this sentence into place other string was.
	strcpy_s(soy, sizeof(soy), "Adam is a person!");

	//This is written on a freshly emptied buffer.
	//Prints the new "soy" sentence to the screen.
	printf("%s \n", soy);

	printf("\ntoupper() example.\n");

	char a = 'b';
	char b = 'F';
	char c = '7';


	//The toupper() function just takes the variable set in the parameter () and if it is a lower case letter changes it to uppercase.
	//This is changed to an upper case letter "B"
	printf("%c \n", toupper(a)); 

	//This just stays the same because it is already uppercase.
	printf("%c \n", toupper(b));

	//This does not change either as it is a number.

	printf("%c ", toupper(c));

}