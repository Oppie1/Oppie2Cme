#include<stdio.h>
#include<math.h>




int main()
{
	//Declared uninitialized int counting variable i for the for loops.
	int i;

	//Declared int array with 4 elements that holds each players jersey number.
	int player[4] = { 58, 66, 68, 71 };

	//Declared int array with 4 elements to track how many goals each player scores.
	//It is initialized by the number of goas each player scored. This matches up
	//to the element number from the player jersey number above. REMEMBER, that 
	//the index number of the first element is 0.
	int goals[4] = { 26,39,25,29 };

	//Declared int array with 4 elements that also match up with the index locations and
	//the elements of previous variables. We will later be making an equation that takes
	//the games played (dividend) divided by goals (divisor) to get the quotient 
	//points per game (ppg) for each player.
	int gamesPlayed[4] = { 30, 30, 28, 30 };

	//Declared an uninitialized float array to track how many points per game (ppg) each player
	//scores. We use float because it may be a decimal.
	float ppg[4];

	//Declared float array that is initialized float variable that is set to 0.0 to track
	//which player ends up getting the best average points per game (ppg).
	float bestPPG = 0.0;

	//This holds whoever the best player is during each iteration. This can change
	//depending on if the new/current/iterative player has a better ppg.
	int bestPlayer;


	//Declare a for loop that scrolls through the elements in both the goals[i] array
	//and the gamesPlayed array and uses an equation that gives the average points per 
	//game -> goals/games played. ppg should be assigned to this value. Must use
	//[i] to track each array/variable index location that will be operated on.
	for (i = 0; i <= 3; i++) {

		//Here we must use a type conversion because both the goals and gamesPlayed
		//are int variables an ppg[i] is a float. If we did not we would get an error.
		//Necessary when doing an assignment that is a certain data type (here float). 
		ppg[i] = (float)goals[i] / (float)gamesPlayed[i];
		//First iteration: i = 0; 0<=3;0++
		//ppg[i] -> [i] just represents the index location of the first element
		//ppg[0] = goals[0] / gamesPlayed[0] -> ppg[.87] = goals[26] / gamesPlayed[30]
		//The first iteration the .87 is then stored in float ppg; variable.
		//i++ = 0+1 -> i = 1 (index location) to start the second iteration.
		//Second iteration: ppg[1] = goals[1]/gamesPlayed[1] ->
		//-> ppg[] = goals[39]/gamesPlayed[30]

		//We then print to screen the current players statistics for the given
		//iteration we are on. Remember This program works on one player at a 
		//time. It seems that it is all printed at once but in reality each iteration
		//is handled individually an prints a line and then loops back up to top
		//for another iteration that handles the next player.

		//tab = \t Good to format the output using this rather than spacebar here.
		printf("\t %d \t %d \t %d \t %f \n", player[i], goals[i], gamesPlayed[i], ppg[i]);

		//Now we use an if statement to determine who the best player is. This will change
		//as each iteration is tested unless the first player is the best player.
		//That said each iteration tests the current player with the current best player.

		//First iteration the "bestPlayer" is the first player since there is no other
		//players at that point. Then the second player comes and the first player is
		//tested against the second player. Then the next player (3rd) is tested against
		//the current bestPlayer.
		if (ppg[i] > bestPPG) {
			//So the first iteration: i=0; 0<4;0++
			//ppg[0] = ppg[.87] -> value stored in ppg (decimal)[
			//2nd iteration best player
			//PPG is .87 from 1st iteration now ppg[1.3] for the 2nd iteration (2nd player #66)
			//So 1.3 > .87? True, the if condition is true and so the rest of the codeblock executes
			bestPPG = ppg[i];

			//So now the bestPPG = the ppg[1.3] of the current player.
			//So the best player changes to the current player (66) in second iteration
			bestPlayer = player[i];

			//*Remember after the first player/iteration we go to increment step in for loop:*
			//i++=0++ = 0+1 =1 -> So now i = 1, index location one, which is the 2nd player (66)
		}

	}

	printf("\n The best player is %d\n", bestPlayer);
}

//58       26      30      0.87
//66      39      30      1.30
//68      25      28      0.89
//71      29      30      0.97 -> This line is printed and then the program stops.

//After increment step 1++ = 2 The 3rd iteration is i = 2; 2<4? True, so execute
//codeblock again. So for 3rd iteration ppg=25/28 =.89. Print to screen the row of 
//stats for the 3rd player and then "test" if he is the best player (bestPPG) using
//the if statement. if(.89>1.3)? FALSE, do not execute if statement codeblock and
//move straight to increment step and the for loop (program control flow statement).
//The third player #68 (third iteration) is NOT the best player. We go to the 
//increment step and test again 1 + 2 = 3. Which is the 4th player. This is also false
//and goes back to for loop control and the i counter variable is tested one last time
//because there is only 4 players. Is 4<=3?, False. Programs stops here. 