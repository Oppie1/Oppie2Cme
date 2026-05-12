#include <stdio.h>



//%p means we are printing out a memory address -- printf("%p", &tuna)
//& just means "memory address of"


int main() {

	int tuna = 19;


	printf("Address \t\t Name \t\t Value \n");

	//First we get the actual address. Then we string in a name "tuna", Then we give it a
	//value(19). The computer sees the address space/alphanumeric. There's not just some
	//random slot named tuna. That is what we see. So we need a variable to store these 
	//addresses. These are called "pointers".
	printf("%p \t %s \t\t %d\t", &tuna, "tuna", tuna);

	
	printf("\n\nUsing pointers to demonstrate setting a pointer to a memory address\n");

	//In pointers always put "p" in front of it for readability. * is required syntax.
	//* is saying we want to store the memory address of the variable. Can name pointers
	//anything we want but common practice is "p". followed by identifier.
	//This will hold the actual integer it will hold the memory address of the variable.
	int* pTuna = &tuna; 

	printf("Address \t\t Name \t\t Value \n");

	//This line prints out what's on line 13 and is essentially the same thing.
	printf("%p \t %s \t\t %d\n\n", pTuna, "tuna", tuna);

	//This prints out the information for the pointer of tuna. The value of pTuna
	//is the memory address of tuna. So on each line we print the memory address of 
	//tuna somewhere either through &tuna or the pointer pTuna that points to it.
	printf("%p \t %s \t\t %p\n", &pTuna, "pTuna", pTuna);

}