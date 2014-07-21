#include <stdio.h>
int main(void)
{
  char name[20];
  char str[20];
  int count=0,c=0,i;
  printf("enter str=");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]==' ')
    {
      c++;
    }
    count++;
    //printf("%c\n",str[i]);
  }
  printf("total characters in str=%d\n",count);\
  printf("total space in str=%d\n",c);
  return 0;
}
