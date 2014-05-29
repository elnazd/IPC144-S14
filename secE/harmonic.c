/*1/1 + 1/2 + 1/3 +...+ 1/10000*/
#include<stdio.h>
int main(){

	int counter=1;
	float sum=0.0;
	while(counter<10000){

		sum=sum+ (1.0/counter); 
		counter++;

	}

	printf("The sum is: %.2f",sum);

	return 0;

}
