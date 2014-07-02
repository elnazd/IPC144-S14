#include <stdio.h>
 void display(int g[], int n);

 int main(void)
 {
         int i, n;

         printf("Enter no of grades : "); 
         scanf("%d", &n);
         int grade[n];
         for (i = 0; i < n; i++) {
                 printf("Grade %d : ", i + 1); 
                 scanf("%d", &grade[i]);
         }
         display(grade, n);

         return 0;
 }

 void display(int g[], int n)
 {
         int i;
         for (i = 0; i < n; i++)
                 printf("%d ", g[i]);
         printf("\n");
 }
