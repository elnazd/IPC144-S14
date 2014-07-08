#include <stdio.h>
int main(void)
{
    int studentID[]={101,102,103,104};
    float marks[]={55.5,66.6,77.7,88.8};
    float total[4];
    int i,n=4;
    for(i=0;i<n;i++)
    {
       printf("studentID[%d]=%d\n",i,studentID[i]);
       printf("marks[%d]=%f\n",i,marks[i]);
       total[i]=studentID[i]+marks[i];
       printf("total[%d]=%f\n",i,total[i]);
    }
    return 0;
}
