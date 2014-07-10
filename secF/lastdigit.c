/*This program will ask the user to enter a number.
  it will then print out what the last digit of that number is.*/
#include <stdio.h>

int main(void){
	int number;
	int lastDigit;
	printf("please enter a number: ");
	scanf("%d",&number);
	lastDigit = number % 10;
	printf("The last digit of %d is %d\n",number,lastDigit);
	return 0;
}