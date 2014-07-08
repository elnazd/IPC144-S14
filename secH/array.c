#include <stdio.h>
#define size 5
int main(void)
{
  int i;		
  int student[]={10,20,30,40,50,60,70};
  float a[]={1.1,2.2,3.3};
  for(i=0;i<size;i++)
  {	
	printf("student[%d]=%d\n",i,student[i]);
  }	
return 0;
}
