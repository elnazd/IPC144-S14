/*
Write a program to prompt the user to input an integer. 
Your program should specify if the input value is an even or an odd number. Then, print a suitable message.
An even number is divisible by 2. An odd number is not divisible by 2. 
*/

#include<stdio.h>
int main(){

	int num;
	printf("Please enter an integer:");
	scanf("%d",&num);
	
	if(num%2 == 0)
		printf("It is an even number!");
	else
		printf("It is an odd number");


	return 0;
}
