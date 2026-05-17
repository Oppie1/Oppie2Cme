#include<stdio.h>
#include<stdlib.h>




int calculateBonus(int yearsWorked);

//A function can do one of two things.  It can run lines of code that lay inside of it like print to screen.
//Or it can calculate a bunch of numbers and give back the answer/result.

int main() {

	//This is setting Kanopi's bonus to whatever the result of the calculated bonus is.
	int kanopisBonus = calculateBonus(14);
	
	//calculateBonus "returns" bonus to main in replace of itself.
	int petrasBonus = calculateBonus(3);

	//That is why the numerical value is printed to the screen not "calculateBonus()"

	printf("Kanopi gets $%d\n", kanopisBonus);

	printf("Petra gets $%d \n", petrasBonus);

	//OR could do like this.
	//This is just showing it is the result of "calculateBonus()" is the answer.
	printf("Kanopi gets $%d \n", calculateBonus(14));
	printf("Petra gets $%d \n", calculateBonus(3));

	return 0;

}

//Rather than "void" where the function does its action outside of main here we are returning an integer to main()
//that will replace the call "calculateBonus()" with a value.
int calculateBonus(int yearsWorked) {

	//Here we are assigning the variable "bonus" to a value through an expression. When we assign a variable a
	//value it is on the left hand side and what it is set equal to is on the right.
	int bonus = yearsWorked * 250;

	//Based on the condition in the if statement Kanopi would be the only one to get a bonus.
	if (yearsWorked > 10) {

		bonus += 1000;

	}

	//Whenever you return anything other than void you can't just right "return;"
	//You need to write what you are returning. Here we are returning the bonus (bonus variable).
	return  bonus;

	//**int calculateBonus(int yearsWorked) = bonus -> Just the number is returned in the calls place to main**

}

//Key point: Whenever you return a value it returns/trades the function call for that value.
//bonus here represents a value. Because we are using an "int" data type the computer knows to
//return a value. "bonus" is just a placeholder for that value.