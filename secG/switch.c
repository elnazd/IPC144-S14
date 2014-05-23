#include <stdio.h>

int main()
{
    int menuSelection;
    printf("Welcome to Seneca Bank\n");
    printf("======================\n");
    printf("Select one of the following option:\n\n");
    printf("1 - Withdrawal\n");
    printf("2 - Deposit\n");
    printf("3 - Transfer\n");
    printf("4 - Others\n");
    printf("5 - Exit\n\n");
    printf("Enter your selection: ");
    scanf("%d", &menuSelection);

    switch(menuSelection)
    {
        case 1:
            printf("\nYou have selected withdrawal\n");
            break;

        case 2:
            printf("\nYou have selected deposit\n");
            break;

        case 3:
            printf("\nYou have selected transfer\n");
            break;

        case 4:
            printf("\nYou have selected others\n");
            break;

        case 5:
            printf("\nThank you, goodbye\n");
            break;

        default:
            printf("\nInvalid selection\n");
            break;
    }

    /*if(menuSelection == 1)
    {
        printf("\nYou have selected withdrawal\n");
    }
    else if(menuSelection == 2)
    {
        printf("\nYou have selected deposit\n");
    }
    else if(menuSelection == 3)
    {
        printf("\nYou have selected transfer\n");
    }
    else if(menuSelection == 4)
    {
        printf("\nYou have selected others\n");
    }
    else if(menuSelection == 5)
    {
        printf("\nThank you, goodbye\n");
    }
    else
    {
        printf("\nInvalid selection\n");
    }*/

    return 0;
}


/*
switch(menuSelection)
    {
        case 1:
            printf("\nYou have selected withdrawal\n");
            break;
        case 2:
            printf("\nYou have selected deposit\n");
            break;
        case 3:
            printf("\nYou have selected transfer\n");
            break;
        case 4:
            printf("\nYou have selected others\n");
            break;
        case 5:
            printf("\nThank you, goodbye\n");
            break;
        default:
            printf("\nInvalid selection\n");
            break;
    }
*/
