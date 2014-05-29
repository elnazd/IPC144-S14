//factorial= n * (n-1) * (n-2) * ... * 3 * 2 *1
#include<stdio.h>
int main(){
	int i,factorial=1,n;

	printf("Please enter a number:\n");
	scanf("%d",&n);

	for(i=n;i >=1 ;i-- ){
		factorial = factorial * i;	
	}

	printf("Factorial= %d",factorial);


	return 0;

}
