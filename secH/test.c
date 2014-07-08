#include<stdio.h>
#define size 3
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	  printf("%d\n",a[i]);
	}

}
int main(void)
{
int i,n;
printf("enter size of array=");
scanf("%d",&n);
int no[n];
for(i=0;i<n;i++)
{
	printf("enter value to store in array=");
	scanf("%d",&no[i]);
}
display(no,n);
return 0;
}

