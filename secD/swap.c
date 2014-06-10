#include <stdio.h> 
void swap(int p, int q); 

int main(void) { 
   int a, b; 
   
   printf("a is "); 
   scanf("%d", &a); 
   printf("b is "); 
   scanf("%d", &b); 

   printf("\na is %d\n" "b is %d\n", a, b);
	//passing by value
   swap(a, b); // a=2 b=7 

   printf("\na is %d\n" "b is %d\n", a, b); //a=2 b=7
   return 0; 
} 

void swap(int p, int q) { 
//	p=2 q=7 
   int temp; 
   temp = p; 
   p = q; 
   q = temp;
   //p=7 q=2
   printf("\np is %d\n q is %d\n", p, q);  
   
} 
