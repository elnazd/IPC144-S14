#include <stdio.h>
/*in this version we will ask the user to enter a
  number.  We will then find out if that number
  was in the file or not
*/
int linearSearch(int key,int array[],int size);
 
int main(void){
	FILE* inputFile;
	inputFile=fopen("numbers.txt","r");
	int i=0;
	int numInput;
	int input[100];
	int userInput;
	printf("enter a value you wish to find: ");
	scanf("%d",&userInput);
	while(fscanf(inputFile,"%d",&input[i++])==1);
	//the last read will always fail but i will be one
	//too high so we have to decrease it by 1
	numInput=i-1;
    int rc=linearSearch(userInput,input,numInput);
	if(rc!=-1){
		printf("the number %d was in the file\n",userInput);
	}
	else{
		printf("the number %d was not in the file\n",userInput);		
	}

	return 0;
}
/*this function searches array for key.  If it is found
  function returns index at which it was found, if it
  was not found, function returns -1*/
int linearSearch(int key,int array[],int size){
   int i;
   int rc=-1;
   printf("key: %d\n",key);
   for(i=0;rc==-1 && i<size;i++){
   		printf("%d\n",array[i]);
   		if(key==array[i]){
   			rc=i;
   		}
   }
   return rc;
}






















