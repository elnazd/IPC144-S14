#include <stdio.h>

int main()
{
    int sum = 0;
    int mark;
    int n = 0;
    float average;

    printf("Enter a mark (enter -1 to quit): ");
    scanf("%d", &mark);

    while(mark != -1)
    {
        if(mark >= 0 && mark <=100)
        {
            sum += mark;  // sum = sum + mark;
            n++;
        }
        else
        {
            printf("%d is an invalid input. Try again.\n\n", mark);
        }
        printf("Enter a mark (enter -1 to quit): ");
        scanf("%d", &mark);
    }

    if(n > 0)
    {
        average = (float)sum / n;
        printf("The average is: %.2f \n", average);
    }
    else
    {
        printf("Cannot calculate average!\n");
    }

    return 0;
}
