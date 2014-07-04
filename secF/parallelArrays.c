#include<stdio.h>
#define SIZE 4

double totalPrice(double p[],int hst[]);
void display(double a[]);

int main()
{
	double totalPurchasePrice;
	//price and sku are parallel arrays
	double price[]={12.34,7.89,6.56,9.32};
	int sku[]={2156, 4633, 3122, 5611}; 
	int tax[] = {1,0,0,1};
	//char available[]={'y','y','y','y'};
	display(price);
	totalPurchasePrice = totalPrice(price,tax);
	
	printf("\nThe total price including tax is:%.2lf",totalPurchasePrice);
	
	return 0;
}
double totalPrice(double p[],int hst[])
{
	double totalSum=0;
	int i;
	for(i=0;i<SIZE;i++)
		totalSum = totalSum + p[i]+ hst[i]*p[i]*0.13; 
	return totalSum;
}


void display(double a[])
{
	int i;
	for(i=0;i<SIZE;i++)
		printf("%.2lf ",a[i]);

}
