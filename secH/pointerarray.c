#include <stdio.h>
int main(void)
{
int no[]={1,2,3,4};
int *ptr;
ptr=&no[0];
printf("value no[0]=%d\n",ptr[0]);
printf("value no[1]=%d\n",ptr[1]);
printf("value no[2]=%d\n",ptr[2]);
return 0;
}
