#include <stdio.h>

// Area of a Circle
 // area.c

 int main(void)
 {
         const float pi = 3.14f;      // pi is a constant float
         float radius;                // radius is a float
         float area;                  // area is a float

         printf("Enter radius : ");   // prompt user for radius input
         scanf("%f", &radius);        // accept radius value from user

         area = pi * radius * radius; // calculate area from radius

         printf("Area = %.2f\n", area); // copy area to standard output

         return 0;
 }
