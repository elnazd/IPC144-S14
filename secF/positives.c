/*Write a program to print all positive numbers on the screen:
1,2,3,4,5,….,10000
*/

#include<stdio.h>
int main(){
	int num = 1;
	
	while(num <= 10000){
		printf("%d,",num);
		num++;
	}
	
	
	return 0;
	
}
