#include<stdio.h>


//Key point: Dereferencing means go to the memory address of variable and get the 
//value of it.

int main()
{
	int tuna = 19;

	int* pTuna = &tuna;

	printf("Address \t\t Name \t Value \n");
	printf("%p \t %s \t %d \n", pTuna, "tuna", tuna);

	//Understand that pTuna itself has its own memory address that can be accessed
	//using &. When only using the pointer variable "pTuna" it carries the same
	//memory address as tuna variable.
	printf("%p \t %s \t %p \n", &pTuna, "pTuna", pTuna);

	//This prints out the value of 19. Using * before the pointer variable this is 
	//called dereferencing a pointer. It goes to the variable that it points to 
	//(the memory address) and gives you a value instead. So this *pTuna = 19
	//So we have 2 ways to access the value of tuna.
	//We can access the value of the memory location where pTuna is 19 and overwrite
	//another value.
	*pTuna = 71;

	printf("\nThe new value of *pTuna is now:");
	printf("\n*pTuna %d \n", *pTuna); 
}