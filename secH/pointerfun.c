#include <stdio.h>
void display(int *a,int n)
{
   int i;
   for(i=0;i<n;i++)
   {
     printf("address=%u\n",&a[i]); 
     printf("%d\n",a[i]);
   }
}
int main(void)
{
  int student[]={10,20,30,40};
  int length=4;
  display(&student[0],length);
  return 0;
}
