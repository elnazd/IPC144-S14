#include <stdio.h>
struct student
{
   char name[30];
   int id;
   float math;
   float english;
};
void display(struct student s);
int main(void)
{
  struct student s={"hello",101,80.5,90.5};
  display(s);
  return 0;
}
void display(struct student s)
{
   printf("name\t\tid\tmath\tenglish\n");
   printf("%s\t%d\t%.2f\t%.2f\n",s.name,s.id,s.math,s.english);
} 
