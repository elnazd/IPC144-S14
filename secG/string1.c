#include <stdio.h>
int main(void)
{
   char str[20];
   printf("enter any string/name=");
   //scanf("%s",str);
   gets(str);
   printf("string/name=%s\n",str);
   return 0;
}
