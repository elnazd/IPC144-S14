#include <stdio.h>
/*in this version we make no assumptions about how many
  values are in numbers.txt*/
int main(void){
	FILE* inputFile;
	inputFile=fopen("numbers.txt","r");
	int i=0;
	int numInput;
	int input[100];
	while(fscanf(inputFile,"%d",&input[i++])==1);
	//the last read will always fail but i will be one
	//too high so we have to decrease it by 1
	numInput=i-1;
	for(i=0;i<numInput;i++){
		//print out the number
		printf("%d\n",input[i]);
	}

	return 0;
}