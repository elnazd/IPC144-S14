#include <stdio.h>
//structs allow us to keep
//related data together.
//top and bot are data members of 
//Fraction
struct Fraction{
	int top;
	int bot;
};
//this function accepts the address of a struct
//and prints it.  Note that when passing a struct 
//to a function, we do not want to copy the entire
//struct as they can be very big.  Thus, we want
//only its address so that we can access the data
void printFraction(struct Fraction* thedata);
int main(void){
	//the next two lines declares 2 
	//variables of type Fraction
	//next line initialzes first with 
	//top = 1, bot =2
	struct Fraction first = {1,2};
	//next line initialzes second with 
	//top = 3, bot =4
	struct Fraction second = {3,4};

   //top and bot for third are unknown
	struct Fraction third;

	printf("first: %d/%d\n",first.top,first.bot);
	printf("second: %d/%d\n",second.top,second.bot);

	printFraction(&first);
	printf("\n");
}

void printFraction(struct Fraction* thedata){
	printf("%d/%d",thedata->top,thedata->bot);
}










