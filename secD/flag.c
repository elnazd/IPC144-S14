/*Write a program to input 10 integers from the user. 
The user must input ‘0’ to exit.
*/
#include<stdio.h>
int main(){

	int counter,num;
	int done =1;
	for(counter =0;counter<10 && done /*done==1*/;counter++){
		printf("Enter an integer, press 0 to exit!");
		scanf("%d",&num);
		
		if (num ==0)
			done=0;
	}
	


	return 0;
}
