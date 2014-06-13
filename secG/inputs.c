#include <stdio.h>


// clear empties the input buffer
//
void clearBuffer(void)
{
    while(getchar() != '\n')
        ; // empty statement intentional
}

// pause execution
//
void pauseFunction(void)
{
    printf("Press enter to continue ...");
    while(getchar() != '\n')
    {
        ;
    }
    return;
}

/*int main(void)
{
    int a = 8;
    int b = 7;

    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n\n", b);

    pauseFunction();

    printf("The result is: %d\n", a+b);
}*/

int main(void)
{
    int items;
    char status;
    printf("Number of items : ");
    scanf("%d", &items);
    printf("Status : ");
    //clearBuffer();
    scanf("%*c%c", &status); // ERROR reads \n
    printf("%d items (%c)\n", items, status);
    return 0;
}

/*int main()
{
    float i;
    float j;
    int k;

    scanf("%d%f%f", &k, &i, &j);

    printf("\n%d\n%f\n%f\n", k, i, j);
    return 0;
}*/

/*int main()
{
int i = getchar(); // USER ENTERS IPC144
printf("%c\n", i);
i = getchar();
printf("%c\n", i);

clearBuffer();
i = getchar();
printf("%c\n", i);

return 0;
}*/

/*int main()
{

    int i = getchar();
    printf("%c", i);

    while(i != '\n')
    {
        i = getchar();
        if(i != '\n')
        {
            printf("%c", i);
        }

    }

    return 0;
}*/
