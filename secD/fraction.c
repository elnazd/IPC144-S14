#include <stdio.h>
//this is a declaration of a struct.
//a struct allows us to declare variables
//that encompass multiple pieces of data
//in a whole
struct Fraction{
	int whole;
	int top;
	int bot;
};
void print(struct Fraction* f);
int main(void){
	//first is an instance of Fraction(a variable of type
	//Fraction)
	struct Fraction first;
	struct Fraction second={0,1,4};
	struct Fraction result;
	struct Fraction array[3];
	//make first == 1/2
	//use the . to access a data member of the variable
	first.whole=0;
	first.top=1;
	first.bot=2;
	//make array[0] = 1/2
	array[0].whole=0;
	array[0].top=1;
	array[0].bot=2;
	printf("first: ");
	print(&first);
	printf("\n");

	printf("second: ");
	print(&second);
	printf("\n");

	printf("array[0]: ");
	print(&array[0]);
	printf("\n");
}
//this function prints a fraction to standard outpu
void print(struct Fraction* f){

    //because f is NOT a Fraction but a Fraction*
    //we cannot just use . operator.  to use .
    //we would need to derefence it and put that in
    //brackets because . is higher operator precedance
    //than * (*f).top for example.. which is yucky
    //so we use -> instead.
	printf("%d %d/%d",f->whole,f->top,f->bot);

}
















