#include <stdio.h>
int main(void)
{
  char str[30];
  char name[20]="my name is parul";
  printf("enter any string=");
  //scanf("%s",name);
  gets(str);
  printf("string=%s\n",str);
  printf("name=%s\n",name);
  puts(str);
  return 0;
}
