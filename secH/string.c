#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
  char str[30];
  printf("enter any string=");
  //scanf("%s",name);
  gets_s(str, 30);
  //printf("string=%s\n",str);
  puts(str);
  return 0;
}
