#include <stdio.h>
void display(int *a,int n)
{
   int i;
   for(i=0;i<n;i++)
  {
      printf("%d\n",a[i]);
   }
}
int main(void)
{
    int no[]={10,20,30,40};
    //display(&no[0],4);
    display(no,4);
    //int *ptr;
    //int i;
    //ptr=&no[0];
   //for(i=0;i<4;i++)
   //{
    //printf("%d\n",ptr[i]);
   //}
    //printf("%d\n",*(ptr+0));
return 0;
}
