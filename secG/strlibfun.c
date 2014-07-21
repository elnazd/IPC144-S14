#include <stdio.h>
int main(void)
{
   char str1[30],str2[30];
   int l,c;
   printf("enter any string str1=");
   gets(str1);
   printf("enter any string str2=");
   gets(str2);
   //l=strlen(str1); 
   //printf("length of string=%d\n",l);
   
   //strcpy(str1,str2);
   //printf("after strcpy str1=%s\n",str1);
   //printf("after strcpy str2=%s\n",str2);

   //c=strcmp(str1,str2);
   //printf("after strcmp c=%d\n",c);
   //if(c==0)
       //printf("both string are same\n");
   //else if(c>0)
       //printf("first is biger than second\n");
   //else
       //printf("first is smaller than second\n");
 
   strcat(str1,str2);
   printf("after strcat str1=%s\n",str1);
   printf("after strcat str2=%s\n",str2);
return 0;
}
