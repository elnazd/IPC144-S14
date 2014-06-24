//Question3
double average(int No_Items)
{	int i;
	double sum =0, average, price;
	
	for(i=0;i<No_Items;i++){
		printf("Enter the price please");
		scanf("%f",&price);
		sum = sum + price;
	}
	average = sum / No_Items;
	return average;

}
