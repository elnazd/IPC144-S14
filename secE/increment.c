#include <stdio.h>
int main(void){
	int x = 5;
	int y = 5;
	int a;
	int b;
    printf("x is : %d\n",x);
    printf("y is : %d\n",y);
    a = x++;
    b = ++y;
    printf("a is x++, so a: %d, x: %d\n",a,x);
    printf("b is ++y, so b: %d, y: %d\n",b,y);

    printf("x is : %d\n",x);
    a = 6 + x++;
    printf("a = 6 + x++, so a is: %d, x is %d\n",a,x);
    
    
    return 0;
}