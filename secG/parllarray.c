#include <stdio.h>
#define size 5
int main(void)
{
   int i,j;
   int stuID[]={1,2,3,4,5};
   double marks[]={77.45,55.6,88.7,90.5,66.7};	
   printf("stuID\tmarks\n");
   for(i=0;i<size;i++)
   {
     printf("%5d %5.2lf\n",stuID[i],marks[i]);
   } 
return 0;
}
