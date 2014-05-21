/*Write a program to prompt the user to enter 
the size of a radius of a circle.
Then, your program calculates the area 
of the circle and prints the results. 
Area = pi * radius * radius
Pi =3.14
*/

#include<stdio.h>
int main(){
	float radius; 
	float area;
	const float pi = 3.14;
	//prompt the user
	printf("Please enter the radius:\n");
	scanf("%f",&radius);
	
	//Area = pi * radius * radius
	area = pi * radius * radius;
	
	//printing the results
	printf("%.2f",area);
	



	return 0;
}
