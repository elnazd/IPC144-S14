/*
In Ontario, the tax on muffins is as follows:
6 or more muffins is considered to be groceries and thus not taxable.  less than 6 muffins is considered a luxury 
and thus it is taxable by hst, 13%.

A muffin costs 60 cents each.  Write a program
that will ask the user for the number of muffins
they wish to purchase.  It will then calculate
the cost of the muffins, the taxes and the total cost
*/
#include <stdio.h>
//#define was the old way of defining constants in C
#define HSTRATE 0.13
//const declaration of variable is the new way 
//of declaring constants in C
const float UNITCOST=0.60

int main(void){
	int muffins;
	float muffinCost;  //cost of muffins alone without
	                   //tax
	float hst;
    float totalCost;   //total cost of muffins and taxes

    printf("How many muffins would you like? ");
    scanf("%d",&muffins);
    muffinCost = muffins * UNITCOST;

    if(muffins>=6)
	totalCost = muffinCost;
    else
	totalCost = muffinCost + muffinCost * HSTRATE;
		
	printf("The total cost is:%.2f", totalCost);





}
