#include <stdio.h>
int main(void)
{
   FILE *fp = NULL;
   char str[20];
   int id;
   float sal;
   printf("enter name=");
   scanf("%s",str);
   printf("enter id=");
   scanf("%d",&id);
   printf("enter sal=");
   scanf("%f",&sal);
   fp = fopen("alpha.txt","w");
   if (fp != NULL)
   {
     fprintf(fp,"%s %d %f",str,id,sal);
     fclose(fp);
   }
   else
   {
      printf("Failed to open file\n");
   }
   fp=fopen("alpha.txt","r");
   if(fp != NULL)
   {
     fscanf(fp,"%s %d %f",str,&id,&sal);
     printf("data read from file\n");
     printf("name=%s   id=%d   sal=%f\n",str,id,sal);
     fclose(fp);
   }
   else
   {
     printf("Failed to open file\n");
   }
   return 0;
}
