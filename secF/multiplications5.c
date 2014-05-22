/*Write a program to print all positive multiplications of 5:
5,10,15,20,25,...,10000

*/

#include<stdio.h>
int main(){
	int num=5;
	
	while(num <= 10000){
		printf("%d,",num);
		num = num + 5; //num +=5;
	}
	
	
	return 0;
	
}
