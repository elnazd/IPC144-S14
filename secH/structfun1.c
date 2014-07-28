#include <stdio.h>
struct student
{
  char name[30];
int id;
float mark;
};
void set(struct student *s);
void display(struct student *s);
int main(void)
{
  struct student a={"hello",101,33.3};
  set(&a);
  display(&a);
 return 0;
}
void set(struct student *s)
{
  struct student xyz={"aaa",505,55.5};
  *s=xyz;
}
void display(struct student *s)
{
  printf("NAME\tID\tMARKS\n");
  printf("%s\t%d\t%f\n",(*s).name,(*s).id,(*s).mark);
  printf("%s\t%d\t%f\n",s->name,s->id,s->mark);
}
