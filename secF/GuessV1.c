#include<stdio.h>
int main(){

	int num;
	//Prompy the user:
	printf("Please enter an integer:");;
	scanf("%d",&num);
	
	//Comparisons:
	if(num<100)
		printf("Sorry… Guess a larger number! Try again later!");
	else if(num>100)
		printf("Sorry… Guess a smaller number! Try again later!");
	else
		printf("Correct!");



	return 0;
}
