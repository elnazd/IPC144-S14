//Use arrays in this code!
/*#include <stdio.h> 
void displayList(double, double, double); 
int main(void) { 
	double price1 = 10.60, price2 = 23.45, price3 = 5.89;  
	displayList(price1, price2, price3); 
	return 0; 
} 

void displayList(double p1, double p2, double p3) { 
	printf(" Item Price\n"); 
	printf(" 1%10.2lf\n", p1); 
	printf(" 2%10.2lf\n", p2); 
	printf(" 3%10.2lf\n", p3); 
	printf("Total%10.2lf\n", p1 + p2 + p3); 
} */

#include <stdio.h> 
void displayList(double p[]); 
int main(void) { 
	
	double price[] = {10.60,23.45,5.89};
	displayList(price); 
	return 0; 
} 

void displayList(double p[]) { 
	printf(" Item Price\n"); 
	printf(" 1%10.2lf\n", p[0]); 
	printf(" 2%10.2lf\n", p[1]); 
	printf(" 3%10.2lf\n", p[2]); 
	printf("Total%10.2lf\n", p[0] + p[1] + p[2]); 
} 
