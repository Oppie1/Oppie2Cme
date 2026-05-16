

//Tells c we are making a structure. Then have to name structure.  May have multiple structures
//with different names. Structures are groups of variables and individual variables called members.
struct user{

	//Here we create some storage variables and arrays that can be used in the main file.
	int userID;
	//Makes space for 25 elements in an array for first name.
	char firstName[25];
	//Makes space for 25 elements in an array for the last name.
	char lastName[25];
	int age;
	float weight;
};

//Structures are useful with groups of people, employees, team, etc. to display all information at once. Like a table.