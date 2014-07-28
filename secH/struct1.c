#include <stdio.h>
struct student
{
  char name[30];
  int id;
  float math;
  float english;
};
int main(void)
{
   struct student abc={"hello",111,65.66,87.88};
   struct student s;
   printf("enter student name=");
   gets(s.name);
   printf("enter student id=");
   scanf("%d",&s.id);
   printf("enter math mark=");
   scanf("%f",&s.math);
   printf("enter english mark=");
   scanf("%f",&s.english);
   printf("NAME\t\tID\tMATH\tENGLISH\n");
printf("%s\t%d\t%.2f\t%.2f\n",s.name,s.id,s.math,s.english);   
printf("%s\t%d\t%.2f\t%.2f\n",abc.name,abc.id,abc.math,abc.english);
return 0;	
}
