#include <stdio.h>
int find(int a[],int size,int item)
{
    int i,r=-1;
   for(i=0;i<size;i++)
   {
       if(item==a[i])
      {
        r=i;
        //i=size;
        break;
      }
   }
   return r;
}
int main(void)
{
    int sku[]={101,102,103,104};
    float price[]={11.1,12.2,13.3,14.4};
    int num,n=4,i;
    printf("enter sku to search from array=");
    scanf("%d",&num);
    i=find(sku,n,num);
    if(i>=0 && i<n)
         printf("sku of item=%d and price=%f\n",sku[i],price[i]);
    else
        printf("item %d not present in sku array\n",num);
    return 0;
}
