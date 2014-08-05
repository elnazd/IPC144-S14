#include <stdio.h>
struct employee
{
 float nweek;
 float nhour;
};
void show(struct employee e[],int size);
void display(struct employee *e,int size);
int main(void)
{
  int i;
  struct employee emp[10];
  for(i=0;i<2;i++)
  {
    printf("enter no of week=");
    scanf("%f",&emp[i].nweek);
    printf("enter no of hour=");
    scanf("%f",&emp[i].nhour);
  }
  show(emp,2);
  for(i=0;i<2;i++)
      display(&emp[i],2);
  return 0;
}
void show(struct employee e[],int size)
{
  int i;
  float sal;
  for(i=0;i<size;i++)
  {
    printf("%f\t%f\n",e[i].nweek,e[i].nhour);
    sal=e[i].nweek * e[i].nhour;
    printf("sal=%f\n",sal);
  }
}
void display(struct employee *e,int size)
{
  printf("%f\t%f\n",e->nweek,e->nhour);
}
