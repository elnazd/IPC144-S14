#include <stdio.h>
struct student 
{
	char name[30];
	int id;
	float mark;
};
int main(void)
{
	FILE *fp = NULL;
	
	struct student s;
    printf("enter student name=");
	scanf("%s",s.name);
	printf("enter student id=");
	scanf("%d",&s.id);
	printf("enter student mark=");
	scanf("%f",&s.mark);     	
    fp = fopen("d:\\abc.txt","a");     
         if (fp != NULL) {
                 fprintf(fp,"%s %d %f",s.name,s.id,s.mark);
                 fclose(fp);
         } else {
                 printf("Failed to open file\n");
         }
         
         fp = fopen("d:\\abc.txt","r");
         if (fp != NULL) {
                 while(fscanf(fp,"%s %d %f",s.name,&s.id,&s.mark)!=EOF)
                         printf("You read : %s  %d   %f\n",s.name,s.id,s.mark);
                 fclose(fp);
         } else {
                 printf("Failed to open file\n");
         }
    return 0;
}

