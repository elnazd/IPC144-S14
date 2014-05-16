/*Muffins cost 60 cents each at a muffin shop.  Write a program that will ask the user for how many muffins they want and calculate the following:

1) cost of muffins
2) the taxes on muffins
3) the total cost

buying less than 6 muffins is considered a luxury item and taxable
buying 6 muffins or more makes them groceries and therefore not taxable
*/
#include <stdio.h>
//old C did not have const and thus, constants were declared as 
//preprocessor statements
#define HSTRATE 0.13
//new version of C has const and thus, you declare
//your constants in the manner below
const float UNITPRICE = 0.60;

int main(void){
	int numMuffins;  //number of muffins user is buying
	float hst=0;
	float total;     //total with tax;

	printf("please enter the number of muffins you would like: ");
	scanf("%d",&numMuffins);
	printf("------------------------------------------\n");
	total = numMuffins * UNITPRICE;
	printf("subtotal: %.2f\n",total);
	if (numMuffins < 6){
		hst = total * HSTRATE;
	}
	printf("HST: %.2f\n",hst);
	printf("Total: %.2f\n",total + hst);
	return 0;

}