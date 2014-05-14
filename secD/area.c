/*this program will ask the user for two floating point numbers
representing the base and height of a triangle. It will then
echo the input, calculate and display the area of the triangle
of that size*/
#include <stdio.h>
int main(void){
   float base;
   float height;
   float area;
   printf("please enter the base: ");
   //%f is the format code for floats.  for doubles use %lf
   //for integers use %d
   scanf("%f",&base);
   printf("please enter the height: ");
   scanf("%f",&height);
   /* does not work because 1/2 is 0
   area = 1 / 2 * base * height;  */
   /* works
   area = 0.5 * base * height;
   area = (base/2)*height;
*/
   area = 1.0/2 * base *height;  
 








   printf("For a triangle of base: %f and height: %f the area is %f\n",
                                                       base,height,area);
   return 0;
}
