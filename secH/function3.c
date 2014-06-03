#include <stdio.h>
#include "function3.h"

int main()
{
	for(int i = 0; i < 20; i++)
	{
		printf("%d\n", sumTwoNumbers(i, i));
	}


	return 0;
}


int sumTwoNumbers(int y, int x)
{
	int sum = y + x;
	return sum;
}
