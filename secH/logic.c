#include <stdio.h>
#include <stdlib.h>

// Relational Expressions
 // relational.c

 int main(void)
 {
         int i, j, k;

         printf("Enter an integer : ");
         scanf("%d", &i);
         printf("Enter an integer : ");
         scanf("%d", &j);

         k = i == j; // compare i to j and assign result to k

         printf("%d == %d yields %d\n", i, j, k);

         return 0;
 }
