//Guessing game: 
// Generate a random number
//Prompt the user to input an integer
//Compare user's number with the randomly generated number and 
//print the right message to the user
//The game ends when a match is found!
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num; //Number entered by the user
	int RandomNumber;//A randomly generated number by the computer
	
	srand(time(NULL));
	RandomNumber = rand() % 100 +1;;
	do{
	printf("Please enter a number:");
	scanf("%d",&num);

	if(num < RandomNumber)
		printf("Sorry! Guess a larger number! Try again!\n");
	else if (num >RandomNumber)
		printf("Sorry! Guess a smaller number! Try again!\n");
		 else
			printf("Correct!");
	}while(num != RandomNumber);


	return 0;


}
