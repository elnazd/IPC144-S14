#include <stdio.h>

int sumTwoNumbers(int y, int x)
{
	int sum = y + x;
	return sum;
}


int main()
{
	int a = 6;
	int b = 7;
	int c = 8;
	int sum = sumTwoNumbers(b, c);

	printf("The sum is: %d\n", sum);

	return 0;
}
