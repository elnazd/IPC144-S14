#include <stdio.h>

// PASS BY ADDRESS:

void addTwoNumbers(int *a, int *b, int *c)
{
    *c = *a + *b;
    return;
}

int main()
{
    int first, second, sum;

    printf("Enter a first number: ");
    scanf("%d", &first);
    printf("Enter a first number: ");
    scanf("%d", &second);

    addTwoNumbers(&first, &second, &sum);

    printf("The sum is: %d\n", sum);


/*
// PASS BY COPY: Copy of the values from the main
// function to the function addTwoNumbers.

int addTwoNumbers(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int first, second, sum;

    printf("Enter a first number: ");
    scanf("%d", &first);
    printf("Enter a first number: ");
    scanf("%d", &second);

    sum = addTwoNumbers(first, second);

    printf("The sum is: %d\n", sum);*/

    return 0;
}
