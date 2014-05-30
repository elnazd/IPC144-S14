/*Write a function to print positive integers from 1 to 100. 
Call the function from the main function!*/

#include<stdio.h>
void display();
int main(){

	display();

	return 0;
}

void display(){

	int i;
	for(i=1;i<=100;i++)
		printf("%d,",i);

}
