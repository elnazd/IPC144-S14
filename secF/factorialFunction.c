/*
Write a function to calculate factorial of a number.
 A factorial of n is defined as:
n! = n*(n-1)*(n-2)*(n-3)....3*2*1
8! = 40320

*/

int factorial(int number){

	int i,result=1;
	for(i=number;i>0;i--)
		result = result * i;

	return result;
}
