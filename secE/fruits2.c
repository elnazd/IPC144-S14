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
	struct Fruit myfruit;
	if(fp){
		fscanf(fp,"%[^;];%[^;];%[^;];%d:%lf\n",
			myfruit.name,myfruit.colour,myfruit.taste,
			&myfruit.quantity,&myfruit.price);
		printFruit(&myfruit);
	}
}
void printFruit(struct Fruit* fruitPtr){

}




