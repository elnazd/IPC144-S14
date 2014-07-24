#include <stdio.h>
struct Bacon{
	char name[100];
	double price;
	int quantity;
};
int main(void){
	struct Bacon baconArray[6];
	FILE* baconFile;
	baconFile=fopen("bacon.txt","r");
	int i;
	for(i=0;i<6;i++){
		fscanf(baconFile,"%[^;];$%lf:%d\n",
			baconArray[i].name,
			&baconArray[i].price,
			&baconArray[i].quantity);
	}
	for(i=0;i<6;i++){
		printf("name: %s\n",baconArray[i].name);
		printf("price and quantity: %.2lf - %d\n",
			baconArray[i].price, baconArray[i].quantity);
	}


	return 0;


}