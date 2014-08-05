#include <stdio.h>
struct student
{
   char name[30];
   int id;
   float math;
   float science;
};
void set(struct student *s);
void display(struct student s*);//function prototye
int main(void)
{
   struct student s;
   struct student aaa={"hello",101,55.5,66.6};
   set(&aaa);
   display(&aaa);
   //printf("enter student name=");
   //gets(s.name);
  // printf("enter student id=");
   //scanf("%d",&s.id);
  // printf("enter math mark=");
  // scanf("%f",&s.math);
   //printf("enter science=");
   //scanf("%f",&s.science);
   //printf("NAME\tID\tMATH\tSCIENCE\n");
   //printf("%s\t%d\t%.2f\t%.2f\n",s.name,s.id,s.math,s.science);
   //printf("%s\t%d\t%.2f\t%.2f\n",aaa.name,aaa.id,aaa.math,aaa.science);
   return 0;
}
void set(struct student *s)
{
   struct student b={"bbb",505,55.5,56.6};
   *s=b;
}
void display(struct student *s)
{
   printf("name\tid\tmath\tscience\n");
   //printf("%s\t%d\t%f\t%f\n",(*s).name,(*s).id,(*s).math,(*s).science);
  
  printf("%s\t%d\t%f\t%f\n",s->name,s->id,s->math,s->science);
}
