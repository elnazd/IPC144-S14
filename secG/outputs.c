#include <stdio.h>

// Playing with output formatting
//  printf.c

int main(void)
{

    /*int i = 13;
    float j = 1345.7;
    float k = 136.5;

    printf("%7d\n%10.2f\n%10.2f\n", i, j, k);*/

    /* integers */
    printf("\n* ints *\n");
    printf("00000000011\n");
    printf("12345678901\n");
    printf("------------------------\n");
    printf("%d|<--        %%d\n",4321);
    printf("%10d|<--  %%10d\n",4321);
    printf("%010d|<--  %%010d\n",4321);
    printf("%-10d|<--  %%-10d\n",4321);
    /* floats */
    printf("\n* floats *\n");
    printf("00000000011\n");
    printf("12345678901\n");
    printf("------------------------\n");
    printf("%f|<-- %%f\n",4321.9876546);
    /* doubles */
    printf("\n* doubles *\n");
    printf("00000000011\n");
    printf("12345678901\n");
    printf("------------------------\n");
    printf("%lf|<-- %%lf\n",4321.9876546);
    printf("%10.3lf|<--  %%10.3lf\n",4321.9876);
    printf("%010.3lf|<--  %%010.3lf\n",4321.9876);
    printf("%-10.3lf|<--  %%-10.3lf\n",4321.9876);
    /* characters */
    printf("\n* chars *\n");
    printf("00000000011\n");
    printf("12345678901\n");
    printf("------------------------\n");
    printf("%c|<--           %%c\n",'d');
    printf("%d|<--         %%d\n",'d');
    printf("%x|<--          %%x\n",'d');
    return 0;
}

/*int main(void)
{
    putchar('O');
    putchar('l');
    putchar('i');
    putchar('v');
    putchar('i');
    putchar('e');
    putchar('r');
    putchar('\n');

    //printf("Olivier\n"); //Does the same Job
    return 0;
}*/
