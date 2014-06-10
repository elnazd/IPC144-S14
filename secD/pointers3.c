#include <stdio.h>

int main ()
{
   int  var = 20;   /* actual variable declaration */
   int  *ip = &var;  /* store address of var in pointer variable*/

   
   
   *ip = *ip + 1;
   
   printf("Address of var variable: %x\n", &var  );
   //Address of var variable: 0x100

   printf("Value of var variable: %d\n", var );
   //Value of var variable: 21
  
   printf("Value of *ip variable: %d\n", *ip );
   //Value of *ip variable: 21

   
   (*ip)++;
   
    printf("Address of var variable: %x\n", &var  );
	//Address of var variable: 0x100
   printf("Value of var variable: %d\n", var );
   //Value of var variable: 22
   printf("Value of *ip variable: %d\n", *ip );
      //Value of *ip variable: 22


   return 0;
}
