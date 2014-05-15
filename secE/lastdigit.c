/*This program will ask the user to enter a whole number and
display the last digit of that number back echoing input*/
#include <stdio.h>
int main(void){
	int number;
	int lastDigit;
	printf("please enter a number: ");
	//& is the address of operator
	scanf("%d",&number);
	lastDigit = number % 10;
	printf("The last digit of %d is %d\n",number,lastDigit);
}