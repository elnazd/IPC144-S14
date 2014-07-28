#include <stdio.h>
struct student 
{
 char name[30]; 
 int id;
 float mark;
 
};
int main(void)
{
  struct student *s;
  s=(struct student*)malloc(1*sizeof(struct student));
  printf("enter name=");
  scanf("%s",&s->name);
  printf("enter id=");
  scanf("%d",&s->id); 
  printf("enter mark=");
  scanf("%f",&s->mark);
  printf("%d   %f   %s\n",s->id,s->mark,s->name);
 return 0;
}
