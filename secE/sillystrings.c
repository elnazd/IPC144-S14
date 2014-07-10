#include <stdio.h>

int main(void){
   int i;
   char s[15]="hello world";
   for(i=0;i<5;i++){
     printf("%s\n",s+i);
   }
}
