#include<stdio.h>
#define size 5
void display(const int a[],int n)
{
  int i,sum=0;
  for(i=0;i<n;i++)
  {
    //a[0]=100;
    printf("a[%d]=%d\n",i,a[i]);
    sum=sum+a[i];
  }	
  printf("sum=%d\n",sum);
}
int main(void)
{
   int student[]={1,2,3,4,5,6,7};
   display(student,size);
   return 0;
}
