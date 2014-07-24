#include <string.h>
#include <stdio.h>
/*this function is given a null terminated
  character string with a month short form
  "jan","feb","mar",...etc.  it will return
  the corresponding month number given the name*/
int getMonth(char monthName[]){
	int rc;
	//strcmp is a function in the string.h
	//library
	if(strcmp(monthName,"jan")==0){
		rc=1;
	}
	else if(strcmp(monthName,"feb")==0){
		rc=2;
	}
	//...
	return rc;
}
int main(void){
	char s1[25]="apple";
	char s2[25]="orange";
	printf("strcmp(\"apple\",\"apple\"): %d\n",strcmp(s1,s1));
	printf("strcmp(\"apple\",\"orange\"): %d\n",strcmp(s1,s2));
	printf("strcmp(\"orange\",\"apple\"): %d\n",strcmp(s2,s1));
	return 0;
}