#include <stdio.h>
struct Bacon{
    char name[50];
    double price;
    int quantity;	
};
int main(void){
	struct Bacon allBacon[30];
	int used=0;
	FILE* fp=fopen("bacon.txt","r");
	while(used < 30 && fscanf(fp,"%[^;];$%lf:%d\n",
		allBacon[used].name,&allBacon[used].price,
		&allBacon[used].quantity)==3){
		used++;
	}
	int i;
	for(i=0;i<used;i++){
		printf("name: %s - price: %.2lf quantity: %d\n",
			allBacon[i].name,allBacon[i].price,allBacon[i].quantity);
	}

}