#include <stdio.h>

// Pass by address

void addTwoNumbers(int *a, int *b, int* sum)
{
    *sum = *a + *b;
    return;
}

int main()
{
    int first, second, sum;
    printf("Enter a first number: " );
    scanf("%d", &first);
    printf("Enter a second number: " );
    scanf("%d", &second);

    addTwoNumbers(&first, &second, &sum);
    printf("The sum is: %d\n", sum);



// Pass by copy
/*int addTwoNumbers(int a, int b)
{
    int sum = a + b;
    return sum;
}


int main()
{
    int first, second;
    printf("Enter a first number: " );
    scanf("%d", &first);
    printf("Enter a second number: " );
    scanf("%d", &second);

    int sum = addTwoNumbers(first, second);
    printf("The sum is: %d\n", sum);*/

    return 0;
}
