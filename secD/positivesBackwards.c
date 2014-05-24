/*Write a program to print all positive numbers backwards 
on the screen:
10000,9999,9998,...,3,2,1
*/
#include<stdio.h>
int main(){

	int counter=10000;
	while(counter=>1){
		printf("%d,",counter);
		counter--;
	}
		
	return 0;


}
