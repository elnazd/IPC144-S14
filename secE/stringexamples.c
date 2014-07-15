#include <string.h>
#include <stdio.h>
void capitalize(char s[]);

int convertNumeric(char s[]);
int main(void){
	char firstString[15]="hello\tworld!";
	char secondString[15]="second";
	char numericString[10]="282932";

	int length = strlen(firstString);

	printf("first: %s, it has %d characters\n", firstString,length);
	printf("second: %s\n", secondString);

	printf("make second hold same thing as first\n");
	strcpy(secondString, firstString);
	printf("first: %s, it has %d characters\n", firstString,length);
	printf("second: %s\n", secondString);


	capitalize(firstString);
	printf("after capitalize()\n");
	printf("first: %s\n", firstString);

	return 0;
}

void capitalize(char s[]){

}

int convertNumeric(char s[]){

}