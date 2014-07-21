#include <stdio.h>
void sort(int a[],int n)
{
    int i,j,max,jmax;
    for(i=0;i<n;i++)
    {
       max=a[0];
       jmax=0;
       for(j=1;j<n-i;j++)
      {
        if(a[j]>max)
        {
          max=a[j];
          jmax=j;
        }
       }
        if(jmax != n-i-1)
        {
           max=a[n-i-1];
           a[n-i-1]=a[jmax];
           a[jmax]=max;
        }
     
   }
}   
int main(void)
{
  int i,size=5;   
  int no[]={34,25,1,65,7}; 
  printf("before sort\n");
  for(i=0;i<size;i++)
{
  printf("%d\n",no[i]);
}
  sort(no,size);
printf("after sort\n");
  for(i=0;i<size;i++)
 {
    printf("%d\n",no[i]);
 }
 return 0;
}
