/*
Write a program that accepts a set of triples and displays the triples.  
Each triple consists of 
	an employee number
	an employee name 
	a salary. 
Assume there are 100 employees
Assume that the employee names contain no more than 30 characters with no embedded whitespace.
Assume that the user shall input the data correctly.
*/

#include<stdio.h>
int main()
{
/*Each triple consists of 
	an employee number
	an employee name 
	a salary. */

	int enumber[100];
	char ename[100][31];
	double esalary[100];
	int i;

	for(i=0;i<100;i++)
	{
		printf("Enter your employee number\n");
		scanf("%d",&enumber[i]);

		printf("Enter your name\n");
		scanf("%s",ename[i]);

		printf("Enter your salary\n");
		scanf("%f",&esalary[i]);	


	}

	//Write a function that displays the triples in a reversed order.  

}
