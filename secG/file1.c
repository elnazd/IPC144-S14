#include <stdio.h>
int main(void)
{
  FILE *fp 
  char name[30];
  int id;
  float sal;
  printf("enter emp name");
  scanf("%s",name);
  printf("enter emp id=");
  scanf("%d",&id);
  printf("enter emp sal=");
  scanf("%f",&sal);
  fp=fopen("abc.txt","w");
  if(fp != NULL)
  {
    fprintf(fp,"%s %d %f",name,id,sal);
    fclose(fp);
  }
  else
   {
      printf("failed to open file\n");
   }
   
   fp=fopen("abc.txt","r");
   if(fp != NULL)
   {
     fscanf(fp,"%s %d %f",name,&id,&sal);
     printf("file read following data\n");
     printf("empname=%s\tempid=%d\tempsal=%.2f\n",name,id,sal);
     fclose(fp);
   }
   else
   {
     printf("failed to open file\n");
   }
  return 0;
}           
























