#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark;
    printf("Enter a mark: ");
    scanf("%d", &mark);

    printf("You have entered: %d\n", mark);
    if(mark >= 90)
    {
	printf("Excellent\n");
    }
    else if(mark >= 80)
    {
        printf("Very Good\n");
    }
    else if(mark >= 70)
    {
        printf("Good\n");
    }
    else if(mark >= 60)
    {
        printf("Acceptable\n");
    }
    else if(mark >= 50)
    {
        printf("Barely Acceptable\n");
    }
    else
    {
        printf("Fail\n");
    }


    return 0;
}




/*int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("You have entered: %d\n", a);
    
    if(a >= 0)
    {
        printf("%d is a positive number\n", a);
    }
    else
    {
        printf("%d is a negative number\n", a);
    }


    return 0;
}*/

























/*int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);

	if(a >= 0)
	{
		printf("%d is a positive number\n", a);
		if(a % 2 == 0)
		{
			printf("The number is also a multiple of 2\n");
		}
	}


	return 0;
}*/






