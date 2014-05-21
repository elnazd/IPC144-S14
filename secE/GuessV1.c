#include<stdio.h>
int main(){
	int num; //Number entered by the user
	//Prompt the user:
	printf("Please enter a number:");
	
	scanf("%d",&num);
	
	if(num < 100)
		printf("Sorry… Guess a larger number! Try again later!");
	else if (num >100)
		printf("Sorry… Guess a smaller number! Try again later!");
	else
		printf("Correct!");
		
		
	return 0;


}
