#include <stdio.h>

// This program prints the squares of numbers between 0 and 19

int main()
{
    int n;

    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &n);
    }
    while(n < 0);

    for(int i = 0; i < n; i++)
    {
        printf("Square of %d is %d\n", i, i * i);
    }

    printf("The value is i is: %d\n", i);



    return 0;
}
