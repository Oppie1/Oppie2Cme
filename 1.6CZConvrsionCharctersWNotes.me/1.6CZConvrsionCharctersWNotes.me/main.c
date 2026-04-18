#include <stdio.h>



int main() {


	//Use printf(" sentence %d ", digit) prints sentence to the screen. Using %d is a placeholder of a digit and the number after
	//the , is the digit you want to replace %d with. Use \n to add lines to output.

	printf("Adam ate %d corn dogs last night\n", 3);

	//You can use %s as a placeholder for a string of characters (sentence) in same way you use %d and digits. Must use " "
	// around characters/strings "like this"
	printf("%s will be a good c++ %s\n", "Adam", "eventually");


	//Use %.f to determine how many decimals to use use %.#
	//%.f goes to 6 decimal places. %.2 is two %.4 is 4 and so one.

	printf("Pi is %f \n", 3.1415826535);
	
	printf("Now pi is %f.4 \n", 3.1415826535);

	printf("Finally, pi is now %f.4 \n", 3.1415826535);

	return 0;

}