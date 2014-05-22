/*Write a program to print all positive numbers backwards on the screen:
10000,9999,....,3,2,1
*/

#include<stdio.h>
int main(){
	int num = 10000;
	
	while(num => 1){
		printf("%d,",num);
		num--;
	}
	
	
	return 0;
	
}
