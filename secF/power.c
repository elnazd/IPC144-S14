/*Write a function that takes two integers: 
base, and power. 
Then, the function calculates the result of 
raising the base to the power. */


#include<stdio.h>
int power(int base, int exp)
{
	
	int result=1,i;
	for(i=0;i<exp;i++)
		result= result * base;
	
	return result;

}
int main(){

	int base,exp,answer;
	printf("Input the base:");
	scanf("%d",&base);
	
	printf("Input the exponent:");
	scanf("%d",&exp);
	
	answer = power(base,exp);
	printf("The answer is:%d",answer);
	
	
}

