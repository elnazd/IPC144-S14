/*Write a function that takes two integers 
and calculates the sum of the integers.*/

#include<stdio.h>
int sum(int num1, int num2);
int main(){

	int input1,input2,answer;
	printf("Input two integers:");
	scanf("%d",&input1);
	scanf("%d",&input2);
	
	//Calling sum
	answer = sum(input1,input2);
	printf("The sum is:", answer);	
	
	return 0;
}

int sum(int num1, int num2){
	int sumResult;
	sumResult = num1 + num2;
	return sumResult;

}
