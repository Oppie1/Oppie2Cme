#include<stdio.h>//standard input output.

//-> Create a header in "solution explorer"
#include"PotatoInfo.h"
//Explanation below AND in header file.
//Open "solution explorer" right click header and name it "ParkerInfo". It will open a new file/tab
//that you can write in. These files will be connected in programing land.
//Don't "have" to use brackets always can use quotes as well.
//The computer knows to look in the header file for any extra information it needs.


//Explanation of header "ParkerInfo.h" is in the tab you just opened in upper left part of the 
//screen. Please tap on that file/tab.


int main() {

	int catAge = (DOGAGE / 2) + 7;

	//Brings in string (%s) from header file. Then since named catName variable can set to
	//the expression using Potato's age / 2 + 7 it drops into that variable.
	//Orders name matters
	printf("%s can hang out with cats %d years or older.\n", DOGNAME, catAge);

	//Use the header file to create another header to store CATNAME
	printf("\nThe cats name so happens to be %s.\n", CATNAME);
}