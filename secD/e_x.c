/*e(x)=1 + x/1! + X^2 / 2! + x^3/3! + ...+ x^n/n!*/

#include<stdio.h>
int factorial(int number);
int power(int base,int exp);


int main(){
	
	int x,n,e_x=1/*the result*/;
	int i;//counter
	printf("Please enter X:");
	scanf("%d",&x);

	printf("Please enter n:");
	scanf("%d",&n);
	
	for(i=1;i<n;i++){
	
		e_x = e_x + (power(x,i)/factorial(i));
	
	}
	
	printf("e_x is %d",e_x);
	return 0;


}


int factorial(int number)
{

	int i,result=1;
	for(i=number;i>0;i--)
		result = result * i;

	return result;
}

int power(int base,int exp)
{
	int i,result=1;
	
	for(i=0;i<exp;i++)
		result = result * base;
		
	return result;
}
