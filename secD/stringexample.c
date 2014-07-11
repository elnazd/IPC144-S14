//string.h has functions that help you do things like
//compare two strings, find the length of a string
//copy a string to another string
#include <string.h>
//ctype.h has functions that help you deal with characters
//like checking if a character is upper or lower case
//find uppercase version of character, check if its alphanumeric
#include <ctype.h>
#include <stdio.h>


void capitalize(char s[]);
void capitalize2(char s[]);
int convertNumeric(char s[]);
int main(void){
	char firstString[15]="hello\tworld!";
	char secondString[15]="second";
	char numericString[10]="282932";

	int length = strlen(firstString);

	printf("first: %s, it has %d characters\n", firstString,length);
	printf("second: %s\n", secondString);

	capitalize2(firstString);
	printf("after capitalize2()\n");
	printf("first: %s\n", firstString);

	strcpy(firstString,secondString);
	printf("after strcpy(firstString,secondString)\n");
	printf("first: %s\n", firstString);
	printf("second: %s\n", secondString);
	return 0;
}
//this function will capitalize the all the lower case 
//alphabetic characters of s

void capitalize2(char s[]){
   int i;
   //go through character string one character at a time
   for(i=0;i<strlen(s);i++){
   		s[i]=toupper(s[i]);
   }
 
}
void capitalize(char s[]){
   int diff = 'a'-'A';
   int i;
   //go through character string one character at a time
   for(i=0;i<strlen(s);i++){
   		if(s[i] >= 'a' && s[i] <='z'){
   			s[i]=s[i]-diff;
   		}
   }
}
void capitalize3(char s[]){
   int diff = 'a'-'A';
   int i;
   int len=strlen(s);
   //go through character string one character at a time
   for(i=0;i<len;i++){
   		if(s[i] >= 'a' && s[i] <='z'){
   			s[i]=s[i]-diff;
   		}
   }
}
void capitalize4(char s[]){
   int diff = 'a'-'A';
   int i;
   //go through character string one character at a time
   for(i=0;s[i]!='\0';i++){
   		if(s[i] >= 'a' && s[i] <='z'){
   			s[i]=s[i]-diff;
   		}
   }
 
}
/*this function converts the string s (which is numeric)
to the numeric value and return it...
 given "12345", function returns 12345*/
int convertNumeric(char s[]){
   int firstdigit = s[0]-'0';
}


