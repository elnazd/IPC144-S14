#include <stdio.h>

int main(void){
	int i;
	int number;
	FILE* fp=fopen("numbers.txt","r");
	for(i=0;i<10;i++){
		fscanf(fp,"%d",&number);
		printf("%d\n",number);
	}
	return 0;
}