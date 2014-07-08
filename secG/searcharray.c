#include <stdio.h>
#define size 4
int find(int a[],int n,int item)
{
   int i,r=-2;
   for(i=0;i<n;i++)
   {
     if(item==a[i])
    {
       r=i;
       i=n;
    } 
   }
   return r; 
}
int main(void)
{
   int no,item;
   int sku[]={10,11,12,13};
   double price[]={33.3,50.4,60.3,22.3};
   printf("enter sku/itemid to search for=");
   scanf("%d",&item);
   no=find(sku,size,item);  	  
   if(no>=0 && no<size)
       printf("price of item = $%lf\n",price[no]);
   else
       printf("%d not in the sku array\n",item);

  return 0;
}
