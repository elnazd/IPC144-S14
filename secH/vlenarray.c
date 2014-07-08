#include <stdio.h>
void display(int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("a[]=%d\n",a[i]);
  }
}
int main(void)
{
    int i,j,n,sum=0;
    printf("enter length of array=");
    scanf("%d",&n);
    int student[n];
    for(i=0;i<n;i++)
    {
      printf("enter any int value to store in array=");
      scanf("%d",&student[i]);
    }
    for(j=0;j<n;j++)
    {
      printf("student[%d]=%d\n",j,student[j]);
      sum=sum+student[j];
    }
    printf("sum=%d\n",sum);
   display(student,n); 
  return 0;
}
