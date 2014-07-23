#include <stdio.h>
struct Fruit{
	char name[20];
	char colour[20];
	char taste[15];
	int quantity;
	double price;
};
void printFruit(struct Fruit* fruitPtr);
int main(void){
	FILE* fp=fopen("fruits.txt","r");
	struct Fruit myfruit[5];
	if(fp){
		int i=0;
		int j;
		while(fscanf(fp,"%[^;];%[^;];%[^;];%d:%lf\n",
			myfruit[i].name,myfruit[i].colour,myfruit[i].taste,
			&myfruit[i].quantity,&myfruit[i].price)==5){
			i++;
		}
		for(j=0;j<i;j++){
			printFruit(&myfruit[i]);
		}

	}
}
void printFruit(struct Fruit* fruitPtr){
	printf("Name: %s\n",fruitPtr->name);
}




