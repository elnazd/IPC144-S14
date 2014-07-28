#include<stdio.h>
struct student
{
char n[30];  
int id;
  float marks;
  
};
int main(void)
{
   int i,n;
   struct student s[3];
   for(i=0;i<3;i++)
   {
     
     printf("enter name=");
     //gets(s[i].name);
     fgets(s[i].n,30,stdin);
     printf("enter id=");
     scanf("%d",&s[i].id);
     printf("enter marks=");
     scanf("%f",&s[i].marks);

   }
   for(i=0;i<3;i++)
   {
      printf("%s\t%d\t%f\n",s[i].n,s[i].id,s[i].marks);
   } 
return 0;
}

