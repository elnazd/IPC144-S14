#include <stdio.h>
int main(void)
{
    char name[30];
    int i,count=0,c=0;
    printf("enter any string=");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
       if(name[i]==' ')
      {
         c++;
      }
       printf("%c\n",name[i]);
       count++;
    }
   printf("no of char=%d\n",count);
  printf("no of space=%d\n",c);
}
