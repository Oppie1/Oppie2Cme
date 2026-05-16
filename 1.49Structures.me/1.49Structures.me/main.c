#include<stdio.h>
#include<stdlib.h>
#include"EmployeeInfo.h"//This links the header file to the main file so the information can be accessed to and from main.


int main()
{
	//keyword that tells computer to use the user structure you created in the header.
	struct user copilot; 
	struct user claude;

	//"." dot operator and is used in accessing individual items/members inside your structure.
	//So this line will store the userID value in the .h (header file) to 1
	copilot.userID = 1;
	claude.userID = 2;

	//in this case claude and copilot are structure variables (or structure instances) based on the 
	//blueprint defined in the header file as struct user.

	puts("Enter the first name of user 1");
	gets(copilot.firstName);
	puts("Enter the first name of user 2");
	gets(claude.firstName);

	printf("User 1 id is %d\n", copilot.userID);
	printf("User 1 first name is %s\n", copilot.firstName);

	printf("User 2 id is %d\n", claude.userID);
	printf("User 2 first name is %s\n", claude.firstName);

}

//A structure is a way that you can group variables together and they don't need to be the same the same data type.
//Can create a blueprint for a person and store/keep the types of information int, char, float together..
//Whenever you make a structure you make it in a different file. They can be made in the same file but this is
//cleaner to do and is preferred for readability to be in a separate file. Programmer typically just create a file
//specifically for their structures. Making them in the header file is just a convenient way of doing it.