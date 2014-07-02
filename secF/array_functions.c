#include<stdio.h>
#define SIZE 8
void display(const int s[]);
double Calculate_average(int g[]);
void modify(int b[]);

int main(){


	int grade[SIZE],i;
	
	printf("Please enter 8 grades\n");
	//Take the grades from the user
	for(i=0;i<SIZE;i++)
		scanf("%d", &grade[i]);
	
	printf("The grades are:\n");
	display(grade); // Pass by address 
	
	modify(grade); // Pass by address 
	printf("The grades after calling modify function are:\n");
	
	display(grade); // Pass by address 

	printf("The average grade is%.2lf",Calculate_average(grade));
	
	return 0;
}
void display(const int s[])
{
	int i;
	for(i=0; i<SIZE; i++)
		printf("%d\n",s[i]);


}

//Calculate average grade using function
double Calculate_average(int g[])
{
	int sum=0,i;
	double average;
	
	for(i=0;i<SIZE;i++)
		sum+=g[i];
		
	average= sum/SIZE;
	
	return average;

}

void modify(int b[])
{
	
	int i;
	for(i=0; i<SIZE; i++)
		b[i]++;

}
