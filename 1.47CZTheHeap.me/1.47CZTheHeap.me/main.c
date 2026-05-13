#include<stdio.h>
#include<stdlib.h>



//The heap is leftover memory that your computer isn't using when it runs operating
//system and whatever you are doing. Can access this memory to perform a function and
//then give it back when you are done with it.


int main() {

	//Creates integer pointer and points to the first integer in the heap.
	int* points; 

	//malloc -> get memory from the heap. Only parameter "()" that takes how much
	//memory do you need as a parameter.
	//(sizeof(int)) saves you the time from having to figure out how many bytes each
	//integer is. So here it is just saying go into the memory and reserve a space
	//for 5 integers. int* is a int typecast pointer. Means treat this as an int point.
	//Need to use it whenever storing ints from heap. When storing float use float 
	//typecast pointer *float.
	points = (int*)malloc(5 * sizeof(int));

	//Only need to borrow from the heap for duration of our program. Whenever we want
	//to give back to the heap just format like this. As is we are giving "points"
	//variable back to the heap.
	free(points);

	return 0;
}