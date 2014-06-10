#include <stdio.h>

int main ()
{
   int  var = 20;   /* actual variable declaration */
   int  *ip = &var;  /* store address of var in pointer variable*/

   printf("Address of var variable: %x\n", &var  );
   //output: Address of var variable: 0x100

   printf("Value of *ip variable: %d\n", *ip );
   //output: Value of *ip variable: 20
   
   *ip = 10;
   
   printf("Address of var variable: %x\n", &var  );
        //output: Address of var variable: 0x100


   printf("Value of var variable: %d\n", var );
   //Value of var variable: 10
  
   printf("Value of *ip variable: %d\n", *ip );
   //Value of *ip variable: 10

   return 0;
}
