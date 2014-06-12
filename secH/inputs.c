#include <stdio.h>


// clear empties the input buffer
//
void clearBuffer(void)
{
    while(getchar() != '\n')
        ;  // empty statement intentional
}

// pause execution
//
void pauseFunction(void)
{
    printf("Press enter to continue ...");
    while(getchar() != '\n')
        ;  // empty statement intentional
}

int main(void)
{
    int items;
    char status;
    printf("Number of items : ");
    scanf("%d", &items);
    printf("Status : ");
    scanf("%*c%c", &status);   // ERROR reads \n
    printf("%d items (%c)\n", items, status);
    return 0;
}

/*int main()
{
    float i;
    float j;
    int k;

    scanf("%f%f%d", &i ,&j, &k);

    printf("%f %f %d\n", i, j, k);

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
        printf("%c", i);
    }

    return 0;
}*/
