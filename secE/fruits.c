#include <stdio.h>

int main(void){
	FILE* fp=fopen("fruits.txt","r");
	if(fp){
		char fruitName[25];
		char colour[25];
		char taste[25];
		int quantity;
		double price;
		fscanf(fp,"%[^;];%[^;];%[^;];%d:%lf\n"
			,fruitName,colour,taste,&quantity,&price);
		printf("name: %s\n",fruitName);
	}
}