#include<stdio.h>
#include<stdlib.h>


int main() {

	//These are the counter variables. "HowMany" is not an accumulation so it just stores one value.
	int i, howMany;

	//Always initialize local variables before using them or your program will not work.
	//Variables like total that are used in accumulation must always be explicitly initialized before use.
	int total = 0;

	//This value is obtained in an expression further down the. It is assigned a value from an expression
	//Remember when assigning a value the variable taking the assignment is on the left hand side.
	float average = 0.0;

	//Creates a pointer variable that points to a memory address when used in the program.
	int* pointsArray;

	printf("How many numbers do you want to average? \n");
	
	//Using & just means "memory address of". So when value is scanned in it is then stored in the variable int howMany.
	scanf_s("%d", &howMany);

	//We need to typecast variable whenever we allocate memory (here int).
	//"malloc" just means get memory from the heap.  So say a user enters 5 and each int is 4 bytes long multiply
	//that  5 and so it is a total of 20 bytes of information so we reserve 20 bytes of memory.
	//So we can store a bunch of stuff in pointsArray. So now the points array is just a normal array.
	//So say pointsArray[0], pointsArray[1], pointsArray[2], ect. It is nice because the user took part in creating it
	//and it is expandable.
	pointsArray = (int*)malloc(howMany * sizeof(int));

	//Now we have space to store a bunch of numbers.

	printf("Go ahead and enter those 3 numbers ;)\n");

	//So loop through and let them enter 3 different numbers. So "howMany" is determined from the initial scan so
	//lets say 3. So we scroll through. First test in for loop is with i = 0, i<3 ->? true. scan in a number and then
	//go to the next step (expression). For example lets say numbers entered are 5, 10, 7.
	for (i = 0; i < howMany; i++) {

		scanf_s("%d", &pointsArray[i]);

		total += pointsArray[i];

		//So first iteration is total = total+pointsArray[i] so total 0 + 5[0]. Then go to increment step i++
		//so 0++ is 0+1 = 1 (start of next (2nd) iteration of for loop). Start next for loop with i = 1 -> 1<3? True.
		//execute code block and scan another value so total = 5 + 10 = 15. Total now = 15. Then increment again
		//1++ = 2. i = 2 to start third iteration. So 2<3? True. Execute code block again. Scan in third number (7)
//total = 15 + 7 = 22. total = 21. Then increment 2++ = 3. Then move to for loop control 3<3? False. Exit codeblock to next step.

	}
	
	//We have to use floats (typecast) because average variable is a float (decimal) and so we type cast 
	//total and how many int variables as floats so it is the same data type as avg.
	average = (float)total / (float)howMany;

	printf("Average is %.2f", average);

}