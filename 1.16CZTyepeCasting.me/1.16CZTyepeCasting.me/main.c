#include <stdio.h>
#include<stdlib.h>


int main()

{
	//Variables work like storage. Variables store data. and their types determine the
	//kind of data they can hold (e.g. float for decimals, int for integers, char, for
	//characters, string for sentences, ect.)
	
	//We use float because it could be a decimal.
	float avgProfit;
	int priceOfPumpkin = 10;
	int sales = 17;
	int daysWorked = 20;

	//Here we first assign average profit a value which in this case comes from 
	// an expression.
	//Type casting to float ensures the calculation uses float point arithmetic.
	//This prevents integer division, which would truncate (cut off) the decimal part
	//of the result. Because the file variable could be a decimal and is a float we 
	//"type cast" what the variables represent so the computer is not confused since
	//we declared them as int variables at the top.

	avgProfit = ((float)priceOfPumpkin * (float)sales) / (float)daysWorked;

	//The print statement uses a .2f to provide a decimal output to 2 places.
	printf("Average daily profit: %.2f", avgProfit);

}