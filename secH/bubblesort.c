#include <stdio.h>
void sort(int a[],int n)
{
    int i,j,temp;
    for(i=n-1;i>0;i--)
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
   int no[]={5,10,2,20,3};
   int i,size=5;
   printf("befor sorting\n");
   for(i=0;i<size;i++)
         printf("%d\n",no[i]);

   sort(no,size);
   printf("after sorting\n");
   for(i=0;i<size;i++)
   {
     printf("%d\n",no[i]);
   }  
   return 0;
}
