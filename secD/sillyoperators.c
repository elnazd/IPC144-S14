#include <stdio.h>

int main(void){
	int x=5;
	//don't do this!!!!!!!!!!
	x=x++;
	printf("%d\n",x);
	return 0;
	
}