#include <stdio.h>   
int modify(int  x);

int main() { 
	int i=10, newi; 
	printf("i= %d\n",i);
	newi= modify(i);
	printf("i= %d, newi= %d \n",i,newi);
	return 0;
}
int modify(int x)
{
	x = x *1000;
	printf("x= %d\n",x);
	return x;
}

