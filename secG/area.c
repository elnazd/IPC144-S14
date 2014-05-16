#include <stdio.h>

int main()
{
	int height;
	int length;

	printf("Enter the height: ");
	scanf("%d", &height);
	printf("Enter the length: ");
	scanf("%d", &length);

	int area = height * length;

	printf("The area is: %d\n", area);



	return 0;
}
