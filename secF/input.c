/*this program will ask the user for a number and print it back out*/
#include <stdio.h>
int main(void){
    int number;
    float floatingValue;

    printf("Please enter a number: ");
    scanf("%d",&number);
    printf("the number you entered was %d\n",number);
    printf("Please enter a floating point value: ");
    scanf("%f",&floatingValue);
    printf("the number you entered was: %f\n",floatingValue);
    printf("the number you entered in 2 decimal place: %.2f\n",floatingValue);
   
}
