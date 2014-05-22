/*Write a program to print all positive even numbers on the screen:
2,4,6,8,….,10000

*/

#include<stdio.h>
int main(){
	int num=2;
	
	while(num <= 10000){
		printf("%d,",num);
		num+=2; //num = num +2;	
	}
	
	
	return 0;
	
}
