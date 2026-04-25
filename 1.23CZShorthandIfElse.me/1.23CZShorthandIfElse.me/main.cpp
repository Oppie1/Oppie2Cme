#include <stdio.h>
#include<stdlib.h>


/*Write a program that provides 20 character buffer space for last name. Ask a persons last name. 
Based on input determine whether person is on blue or red team. Alphabet less than 'M' starting at
A[0] going to Z	*/

int main() {

	//Declare a char variable for last name and set aside 20 spots in memory/buffer for user to type last name into
	//20 should cover the last name but if their last name is longer than 20 characters it will just get truncated (cut-off).
	char lastName[20];

	printf("Enter your last name: \n");

	//Use %s to read a full word (string) into lastName
	//We do not use %c because %c reads only one character.
	//lastName is a char array (20 slots), so it can store multiple characters plus '\0' (null terminator at end)
	//null terminator just means the computer knows the end point and nothing else will be entered. Ends the string.
	//scanf_s requires the buffer size for %s to help prevent overflow.
	scanf_s(" %s", lastName, sizeof(lastName));

	//Ternary operator.
	//This just says if last name which starts at the '0' element of the array is less than 'M' to print Blue Team
	//to the screen. The computer knows the logic behind < 'any letter'. It is just saying anything A all the way to 
	//L (right before M) is within  the condition and to execute the next thing. Again here it's print to screen Blue Team.
	// The '?' is just an 'if' condition with the if to the right of the condition -> "if lastName[0]<'M'" -> same thing.
	//But if the first letter of the last name is M or any letter all the way to Z then print Red Team. The ":" = else.
	// So same as saying "else Red Team"
	(lastName[0] < 'M') ? printf("Blue Team") : printf("Red Team");

}