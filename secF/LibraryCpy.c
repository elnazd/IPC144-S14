#include <stdio.h>
#include <string.h> 

int main(){

	
	char phrase1[31],phrase2[31];	
	printf("Please enter a string:\n");
	scanf("%30[^\n]",phrase1);
	
	strcpy(phrase2,phrase1);
	
	puts(phrase1);
	puts(phrase2);
	return 0;
}
