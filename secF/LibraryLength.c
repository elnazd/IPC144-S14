#include <stdio.h>
#include <string.h> 
int main(void) { 
	int len; char str[31]; 
	printf("Enter a string : "); 
	scanf("%30[^\n]%*c", str); 
	printf("The length is: "); 
	len = strlen(str); 
	printf("%d", len);
	return 0; 
}
