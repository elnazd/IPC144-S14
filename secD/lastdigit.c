#include <stdio.h>
int main(void){
	int userInput;
	int lastDigit;
	int scanfOk;   //variable to test result of scanf
	printf("Please enter a number: ");
	//scanf will return a value equal to number of variables
	//properly read.  we are reading 1 variable so if it was 
	//read properly, it would return 1
	scanfOk = scanf("%d",&userInput);

	if(scanfOk == 1){
		lastDigit = userInput % 10;
		printf("The last digit of %d is %d\n",userInput,lastDigit);
	}
	else{
		printf("could not read number\n");
	}
	return 0;
}