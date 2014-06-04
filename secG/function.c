#include <stdio.h>
#include "function.h"

/* Raise an integer to an integer
  * power.c
  */

 int main(void)
 {
         int base, exp, answer;


         displayInstructions();
         printf("Enter base : ");
         scanf("%d", &base);
         printf("Enter exponent : ");
         scanf("%d", &exp);

         answer = power(base, exp);

         printf("%d^%d = %d\n", base, exp, answer);
displayInstructions();
         return 0;
 }

int power(int base, int exponent)
 {
         int j, result;

         result = 1;
         for (j = 0; j < exponent; j++)
         {
             result = result * base;
             //result *= base;
         }

         return result;
 }

void displayInstructions(void)
{
    printf("This program calculates the power given a base and an exponent. You will have to provide to integers from the keyboard to execute the program correctly\n\n");
    return;
}

//int sumTwoNumbers(int firstNumber, int secondNumber)
//{
//    /*int sum = firstNumber + secondNumber;
//    return sum;*/
//
//    return firstNumber + secondNumber;
//}
//
//
//int main(void)
//{
//    int a = 6;
//    int b = 7;
//
//    //int sum = a + b;
//    int sum = sumTwoNumbers(a, b);
//
//    printf("The sum is: %d\n", sum);
//
//    return 0;
//}
