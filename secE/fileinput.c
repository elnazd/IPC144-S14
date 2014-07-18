#include <stdio.h>

int main(void){
	FILE* inputFile;
	inputFile=fopen("numbers.txt","r");
	int i;
	int input;
	for(i=0;i<10;i++){
		//read number from file
		fscanf(inputFile,"%d",&input);

		//print out the number
		printf("%d\n",input);
	}
	return 0;
}