#include <stdio.h>

/* What have we seen today
 *
 *  + - * / %  --> Basic math operations
 *
 *  < > >= <=  --> Basic relational operations
 *
 *  !  ==  !=  ||  &&  --> Basic logical operators
 *
 *  ++ -- += -= *= /= %=  --> Basic increment operators
 *
 */

int main()
{

    int a= 7;
    int b = 9;

    a += b;  // a = a + b:

    ++a;


    printf("The value of a is %d and the value of b is %d\n", a, b);


    return 0;
}
