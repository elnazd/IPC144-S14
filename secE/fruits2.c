#include <stdio.h>
struct Fruit{
	char name[20];
	char colour[20];
	char taste[15];
	int quantity;
	double price;
};
int main(void){
	FILE* fp=fopen("fruits.txt","r");
	struct Fruit myfruit;
	if(fp){
		fscanf("");
	}
}