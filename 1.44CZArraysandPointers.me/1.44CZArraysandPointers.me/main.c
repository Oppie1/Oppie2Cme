#include<stdio.h>




int main() {

	//Counter variable.
	int i;
	
	//Declared array with 5 (0 -4) indices that are initialized to 5 elements.
	int meatBalls[5] = { 7,3,18,12,10 };

	printf("Element \t Address \t\t Value \n");

	//We put 0-4 in here [%d], For each element we use %p (= memory address), then each
	//elements value %d. For first use i, &meatValls[i] is memory address then actual
	//element values "meatBalls[i];
	for (int i = 0; i < 5; i++) {

		printf("meatBalls[%d] \t %p \t %d \n", i, &meatBalls[i], meatBalls[i]);
	}

	//Array names are just pointers to the first element (7 here)
	//meatBalls is the memory address of first element meatBalls[0] which is 7 here.
	//Again using * before meatBalls dereferences it from memory address to actual value.
	printf("\nmeatBalls \t %p \n", meatBalls);

	//When we use %d and * we are just using the integer value of the first element in array.
	printf("\n*meatBalls \t\t\t\t %d \n", *meatBalls);

	//So here we are just pointing to the memory address of the 3 element in the array.
	//REMEMBER: The first element is already the 0 position so the third element would
	//be at the 2 index in the array.
	printf("*meatBalls+2 \t %p", (meatBalls + 2));


	//This just moves two spaces from the first position to the third element in the array.
	printf("\n*(meatBalls+2) \t\t\t\t %d", *(meatBalls + 2));

}

//Key concept: For every array the basic name of it without any elements or brackets
//after it, an array name is just a pointer to the first element in the array. Don't need
//to explicitly say (&meatBalls) because that is what it already is. So can just use
//meatBalls on line 24.

//The array name has a special meaning. An array name is just a pointer to the first element
//in that array. Whenever you dereference the array name it goes to the element and gets the
//value of it. So a dereferenced array name is just the value of it. If you want to loop
//through and get other values you just type the array name + however you want to 
//dereference that and it will ive you a value.