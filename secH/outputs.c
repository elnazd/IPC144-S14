#include <stdio.h>

/*int main()
{
    int i = getchar();

    int j = putchar(i);

    while(j != '\n')
    {
        i = getchar();
        putchar(i);
    }

    return 0;
}*/


// Playing with output formatting
//  printf.c

/*int main(void)
{
    printf("%-7.2f\n", 13.4);
    printf("%07.2f\n", 1356.4);
    printf("%7.2f\n", 136.4);

    return 0;
}*/

int main(void)
{
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
