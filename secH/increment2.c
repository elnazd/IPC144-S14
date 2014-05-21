#include <stdio.h>

int main()
{

    int a= 7;

    int c = ++a;

    // a = a + 1;
    // int c = a;

    int d = a++;

    // int d = a;
    // a = a + 1;

    printf("%d %d %d\n", a, c, d);


    return 0;
}
