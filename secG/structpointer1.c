#include <stdio.h>
struct student
{
 char name[30];
 int id;
 float mark;
};
void display(struct student *s);
int main(void)
{
 struct student *a;
 a=(struct student*)malloc(2*sizeof(struct student));
 printf("enter name=");
 scanf("%s",a->name);
 printf("enter id=");
 scanf("%d",&a->id);
 printf("enter mark=");
 scanf("%f",&a->mark);
 display(a);
return 0;
}
void display(struct student *s)
{
  printf("%s\t%d\t%f\n",s->name,s->id,s->mark);
}

