#include <stdio.h>
#define n 5
void sort(int a[],int n1)
{
 int i,j,temp;
 for(i=n1-1;i>0;i--)
 {
   for(j=0;j<i;j++)
   {
     if(a[j]>a[j+1])
     {
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
     }
   }
 }
} 
int main(void)
{
  int i;
  int no[]={20,5,10,2,30};
  printf("\nbefore sorting\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",no[i]);
  }
  sort(no,n);
  printf("\nafter sorting\n");
  for(i=0;i<n;i++)
  {
     printf("%d\n",no[i]);
  }
 return 0;
} 
