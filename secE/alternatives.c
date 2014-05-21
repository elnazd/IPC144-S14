/*
There are 3 items in a store:
Item 1 costs $10.
Item 2 costs $7.
Item 3 costs $12.
Prompt the user to input an item, 
display the price for the item to the user
*/

#include<stdio.h>
int main(){
	int itemNumber; //Item number
	printf("Please enter an item number:");
	
	scanf("%d",&itemNumber);
	
	switch (itemNumber){
	
	case 1:
		printf("The item is $10.\n");
		break;
	
	case 2:
		printf("The item is $7.\n");
		break;
	
	case 3:
		printf("The item is $12.\n");
		break;
	
	default:
		printf("Invalid input! The number has to be 1,2, or 3!");
	}
	
	/*if(itemNumber == 1)
		printf("The item is $10.\n");
	if(itemNumber == 2)
		printf("The item is $7.\n");
	if(itemNumber == 3)
		printf("The item is $12.\n");*/
		



}
