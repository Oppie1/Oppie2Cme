#include<stdio.h>
#include<stdlib.h>


//continue keyword is a jump statement used exclusively inside loops (for, while and do-while.
//Here we use a do-while loop to demonstrate behavior.


int main()
{
	//Declare an uninitialized integer variable and num it num.
	int num;

	//This will be our counter variable that is automatically set to 1.
	//This will be tested against whatever num ends up being after user selection.
	int i = 1;

	//Basically an upside down while loop. Do this while this is occurring logic.
	printf("Please enter a value from 1-10:\n");

	//Bring in user input and store that value in num storage variable.
	scanf_s("%d", &num);

	printf("%d was selected.\n\n",num);

	do {

		//Here we use i to test if 6, 8, or the users entry is equal to 1.
		//So if the user enters a number and it is 6 or(||) 8 then the codeblock below
		//it will execute. If the user enters any other number number the if codeblock
		//is skipped and we move to next step. If the user input num is 6, 8 or 1 the 
		//if codeblock executes. It increments i by 1 and then continues printing all 
		//the available numbers to the screen
		if (i == 6 || i == 8 || i == num){

			//So first if the selection is 8 or 9 we just want the program to
			//skip over them. So all that is happening is that when if is true
			//6 is incremented by 1 and we go to next with num = 7. If 1 is
			//selected it is incremented by 1 and then goes to next step.
			//By incrementing 1++ we signal that since 1 has been selected it
			//is no longer an option.
			i++;

				continue;
		}

		//This prints whatever is still available to the screen (2,3,4,5,7,9,10
		//But REMEMBER that these are being printed out 1 value at a time and then
		//gets tested by the while condition and repeats until i is no longer less than
		//10. When i is 11 the program stops.
		printf("%d is available. \n", i);
		
		//So say the user selected 3, because it was incremented inside the if statement
		//the i value would be 3 here, So ->i++=3++ so now i = 4 which is tested in the 
		//while(i<=10) condition which it is so that while it is so the loop runs again.
		i++;

	} while (i <=10);			

}