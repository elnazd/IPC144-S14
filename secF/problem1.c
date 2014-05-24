/*
Write a program to 
Prompt the user to input an integer.
Read the integer.
Prompt the user to input another integer, greater than the first one.
Read the integer.
Print all decimal numbers between the two read integers.
*/
#include<stdio.h>
int main(){

	int num1,num2,counter;
	
	printf("Enter the first integer:\n");
	scanf("%d",&num1);

	printf("Enter the second integer:\n");
	scanf("%d",&num2);
	
	for(counter=num1;counter<=num2;counter++)
		printf("%d,",counter);


	return 0;
}
