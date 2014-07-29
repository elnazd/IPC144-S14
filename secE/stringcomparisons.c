#include <stdio.h>
#include <string.h>

/*this function does a case INSENSITIVE comparison
  of two null terminated character strings.  the function
  returns 0 if they are the same, < 0 if first is before second string
  and > 0 otherwise
  */

int stringCaseCompare(const char* s1,const char* s2);
int main(void){
	char s1[20]="apple";
	char s2[20]="Apple";
	int rc;
	rc=strcmp(s1,s2);
	if(rc==0){
		printf("same\n");
	}
	else{
		printf("rc: %d\n",rc);
		printf("different\n");
	}
	return 0;
}