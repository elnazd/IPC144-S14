#include <stdio.h>
struct student
{
  char name[30];
  int id;
  float marks;
};
int main(void)
{
  struct student s;
  FILE *fp;
  printf("student name=");
  scanf("%s",s.name);
  printf("enter student id=");
  scanf("%d",&s.id);
  printf("enter student mark=");
  scanf("%f",&s.marks);
  fp=fopen("struct.txt","w");
  if(fp != NULL)
  {
    fprintf(fp,"%s %d %f",s.name,s.id,s.marks);
    fclose(fp);
  }
  else
   {
      printf("failed to open file\n");
   }
  fp=fopen("struct.txt","r");
  if(fp != NULL)
  {
    fscanf(fp,"%s %d %f",s.name,&s.id,&s.marks);
    printf("name=%s id=%d marks=%f\n",s.name,s.id,s.marks);
    fclose(fp);
  }
  else
    printf("fail to open file\n");

  return 0;
}





  


