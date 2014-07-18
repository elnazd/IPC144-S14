#include <stdio.h>
/*this program is modified from fileinput1.c so that we 
can read an unlimited number of values from the file*/
int main(void){
	int number;
//	FILE* fp=fopen("numbers.txt","r");
	FILE* fp=fopen("badnumbers.txt","r");
	//feof is a function of stdio.  It
	//returns true if the file pointer has encountered
	//the end of file marker
	while(fscanf(fp,"%d",&number)==1){
		printf("%d\n",number);
	}
	return 0;
}