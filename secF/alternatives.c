#include<stdio.h>
int main(){

	int item;
	//Prompy the user:
	printf("Please enter an item number:");;
	scanf("%d",&item);
	
	switch(item){
	
	case 10:
			printf("Item 1 costs $10.");
			break;
	
	case 20:
			printf("Item 2 costs $7.");
			break;
			
	case 30:
			printf("Item 3 costs $12.");
			break;
			
	default:
			printf("Error! Item not found!");
		
	}
	
	/*if(item == 1)
		printf("Item 1 costs $10.");
		
	if(item == 2)
		printf("Item 2 costs $7.");
	
	if(item == 3)
		printf("Item 3 costs $12.");*/



	return 0;
}
