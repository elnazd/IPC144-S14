#include <stdio.h>
struct student
{
   int id;
   char fname[50];
   char lname[30];
   float no;
};
int main(void)
{
  struct student s;
  int i;
  printf("enter fname=");
  gets(s.fname);
  printf("enter lname=");
  gets(s.lname);
  printf("enter id=");
  scanf("%d",&s.id);	
  printf("fname=%s lname=%s and id=%d\n",s.fname,s.lname,s.id);
  return 0;
} 
