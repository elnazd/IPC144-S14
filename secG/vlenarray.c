#include <stdio.h>
int main(void)
{
	int i,j,n,sum=0;
	printf("enter lenght/size of the array=");
	scanf("%d",&n);
	int no[n];
	for(i=0;i<n;i++)
	{
	  printf("enter any int value to store in array=");
	  scanf("%d",&no[i]);
        }
        for(j=0;j<n;j++)
	{
	   sum=sum+no[j];
	   printf("no[%d]=%d\n",j,no[j]);
        }  
        printf("sum=%d\n",sum);
	return 0;
}
