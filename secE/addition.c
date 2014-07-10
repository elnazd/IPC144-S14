#include <stdio.h>
int main(void){
  int i;
  int j;

  for(i =0 ;i<5;i++){
    printf("%d\n",i++);
  }
  printf("------------\n");
  for(j=0;j<5;j++){
    printf("%d\n",j+1);
  }
}
