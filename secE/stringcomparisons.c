#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*this function does a case INSENSITIVE comparison
  of two null terminated character strings.  the function
  returns 0 if they are the same, < 0 if first is before second string
  and > 0 otherwise
  */

int stringCaseCompare(const char* s1,const char* s2);
int main(void){
	char s1[20]="apple";
	char s2[20]="Applet";
	int rc;
	rc=stringCaseCompare(s1,s2);
	if(rc==0){
		printf("same\n");
	}
	else{
		printf("rc: %d\n",rc);
		printf("different\n");
	}
	return 0;
}
int stringCaseCompare(const char* s1,const char* s2){
	int i;
	int rc=0;
	for(i=0;rc==0 && (s1[i]!='\0' && s2[i]!='\0');i++){
		rc=tolower(s1[i])-tolower(s2[i]);
	}
	if(rc == 0 && (s1[i]!='\0' || s2[i]!='\0')){
		rc = s1[i]-s2[i];
	}
	return rc;
}













