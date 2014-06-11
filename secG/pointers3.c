/* Local swap
  *  local_swap.c
  */


/* Swapping values using a function
  *  swap.c
  */

#include <stdio.h>
void swap(int *p, int *q);

int main(void)
{
    int a, b;

    printf("a is ");
    scanf("%d", &a);
    printf("b is ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("IN MAIN: After swap:\na is %d\nb is %d\n", a, b);

    return 0;
}

void swap(int *a, int *b)
{
    int c;

    printf("IN FUNCTION: a is %d, b is %d\n", *a, *b);

    c = *a;
    *a = *b;
    *b = c;
    printf("IN FUNCTION: a is %d, b is %d\n", *a, *b);
    return;
}

/*#include <stdio.h>
void local_swap(int a, int b);

int main(void)
{
    int a, b;

    printf("a is ");
    scanf("%d", &a);
    printf("b is ");
    scanf("%d", &b);

    local_swap(a, b);

    printf("IN MAIN: After local_swap:\na is %d\nb is %d\n", a, b);

    return 0;
}

void local_swap (int a, int b)
{
    int c;

    printf("IN FUNCTION: a is %d, b is %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("IN FUNCTION: a is %d, b is %d\n", a, b);
    return;
}*/
