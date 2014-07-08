#include <stdio.h>
#define size 5
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	  printf("a[%d]=%d\n",i,a[i]);
	}
}
int main(void)
{
	int i;
	int student[]={10,20,30,40,50};
	display(student,size);  
	return 0;
}
