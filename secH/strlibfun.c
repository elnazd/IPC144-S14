#include <stdio.h>
#include <string.h>
int main(void)
{
  int l,i;
  char name[30];
  //printf("enter any string=");
  //gets(name);
  //l=strlen(name);
 //printf("string=%s\n",name); 
 //printf("length of string=%d\n",l);
  char str1[30];
   char str2[30];
  printf("enter str1=");
  gets(str1);
  printf("enter str2=");
  gets(str2);
  strcat(str1,str2);
  printf("str1=%s\n",str1);
  printf("str2=%s\n",str2);
  //strcpy(str1,str2);
  //strcpy(str2,str1);
  //printf("copy string=%s\n",str2);
  //i=strcmp(str1,str2);
 // printf("i=%d\n",i);
  //if(i==0)
       //printf("both string area same\n");
  //else if(i>0)
        //printf("frist strin is big second str\n");
  //else
        //printf("second string is big first str\n");
 return 0;

}
