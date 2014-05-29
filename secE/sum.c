/*Write a program to calculate the sum of all positive integers
1+2+3+4+....+10000

*/

#include<stdio.h>
int main(){
	int counter=1;
	int sum =0;

	while(counter <=10000){

		sum = sum + counter;
		counter++;

	}

	printf("The sum is: %d\n",sum );

	return 0;

}
