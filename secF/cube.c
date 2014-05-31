/*Write a function to calculate the cube of a number.*/
/*Write a function that takes two integers 
and calculates the sum of the integers.*/

#include<stdio.h>
int cube(int num);
int main(){

	int input,answer;
	printf("Input an integer:");
	scanf("%d",&input);
	
	answer = cube(input);
	printf("The cube is:%d",answer);
	
	return 0;
}

int cube(int num){
	
	return num*num*num;
}
