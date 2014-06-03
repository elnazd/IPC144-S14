#include <stdio.h>
#include "function2.h"

void displayMenu(void)
{
    printf("\n\nWelcome to Seneca Bank\n");
    printf("======================\n");
    printf("Select one of the following option:\n\n");
    printf("1 - Withdrawal\n");
    printf("2 - Deposit\n");
    printf("3 - Transfer\n");
    printf("4 - Others\n");
    printf("5 - Exit\n\n");
 	
    return;
}

int main()
{
    int menuSelection;
    float amount;
    int result, to, from;
    do
    {
       displayMenu();
       printf("Enter your selection: ");
       scanf("%d", &menuSelection);

       switch(menuSelection)
       {
        case 1:
            printf("Enter an amount for withdrawal: ");
            scanf("%f", &amount);
            result = withdrawal(amount);
            if(result == 1)
            {
               printf("Withdrawal successful\n");
            }
            else
            {
               printf("Withdrawal unsuccessful\n");
            }
            break;
        case 2:
	    printf("Enter an amount for deposit: ");
            scanf("%f", &amount);
            result = deposit(amount);
            if(result == 1)
            {
               printf("Deposit successful\n");
            }
            else
            {
               printf("Deposit unsuccessful\n");
            }
            break;
        case 3:
            printf("Enter from account: ");
            scanf("%d", &from);
            printf("Enter a to account: ");
            scanf("%d", &to);
            result = transfer(from, to);
            if(result == 1)
            {
               printf("Tansfer successful\n");
            }
            else
            {
               printf("Transfer unsuccessful\n");
            }
            break;
        case 4:
            others();
            break;
        default:
            break;
       }
    }
    while(menuSelection != 5);

    return 0;
}

int withdrawal(float amount)
{
   if(amount > 0.0)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}

int deposit(float amount)
{
   if(amount > 0.0)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}

int transfer(int from, int to)
{
   if(from > 0 && to > 0)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}


void others(void)
{
	printf("You have selected others\n");
}
