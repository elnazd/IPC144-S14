#include <stdio.h>
/*in this version we make no assumptions about how many
  values are in numbers.txt*/
int main(void){
	FILE* inputFile;
	inputFile=fopen("numbers.txt","r");
	int i;
	int input;
	//fscanf returns number of variables properly read
	//since we are reading just one, then a good read
	//will result in a return value of one
	while(fscanf(inputFile,"%d",&input)==1){
		//print out the number
		printf("%d\n",input);
	}

	return 0;
}