#include <stdio.h>
#include <string.h>

int main(void){
	char s1[25]="hamster";
	char s2[50]="huey and the gooey kablooie";

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);

	strcat(s1,s2);
	printf("do strcat(s1,s2)\n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);

}