/*Write a program to input 10 integers from the user. 
The user must input ‘0’ to exit.*/
#include<stdio.h>
int main(){

	int num,counter=0;
	
	do{
		printf("Enter an integer:\n");
		scanf("%d",&num);
		counter++;
		
	}while(counter<10 && num !=0);

	


	return 0;
}
