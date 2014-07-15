#include <string.h>
#include <stdio.h>
#include <ctype.h>

void capitalize(char s[]);
void capitalizeV2(char s[]);

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


	capitalizeV2(firstString);
	printf("after capitalize()\n");
	printf("first: %s\n", firstString);

	return 0;
}

void capitalize(char s[]){
	int length=strlen(s);
	int diff='a'-'A';
	int i;
	for(i=0;i<length;i++){
		if(s[i] >='a' && s[i] <='z'){
			s[i]=s[i]-diff;
		}
	}
}

void capitalizeV2(char s[]){
	int length=strlen(s);
	int i;
	for(i=0;i<length;i++){
		s[i]=toupper(s[i]);
	}
}

void capitalizeV3(char s[]){
	int i;
	for(i=0;i<strlen(s);i++){
		s[i]=toupper(s[i]);
	}
}
void capitalizeV4(char s[]){
	int i;
	for(i=0;s[i]!='\0';i++){
		s[i]=toupper(s[i]);
	}
}

int convertNumeric(char s[]){
	int rc;
	int digit;
	int i;
	for(i=0;s[i]!='\0';i++){
		digit = s[i]-'0';
	}
}