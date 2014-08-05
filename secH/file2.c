#include <stdio.h>
struct student
{
 char name[20];
 int id;
 float marks;
};
int main(void)
{
   FILE *fp = NULL;
   struct student s;
   printf("enter name=");
   scanf("%s",s.name);
   printf("enter id=");
   scanf("%d",&s.id);
   printf("enter sal=");
   scanf("%f",&s.marks);
   //fp = fopen("alpha.txt","w");
   fp=fopen("alpha.txt","a");
   if (fp != NULL)
   {
     fprintf(fp,"%s %d %f",s.name,s.id,s.marks);
     fclose(fp);
   }
   else
   {
      printf("Failed to open file\n");
   }
   fp=fopen("alpha.txt","r");
   if(fp != NULL)
   {
     while(fscanf(fp,"%s %d %f",s.name,&s.id,&s.marks) != EOF)
      //printf("data read from file\n");
    {
     printf("name=%s   id=%d   marks=%f\n",s.name,s.id,s.marks);
}
     fclose(fp);
   }
   else
   {
     printf("Failed to open file\n");
   }
   return 0;
}
