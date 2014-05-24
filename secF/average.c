/*

Write a program to
Prompt a user to enter the number of grades
Read the number of grades
Prompt a user to enter their grades
Read all the grades
Calculate the average of the student.

*/
#include<stdio.h>
int main(){

	int i,grade,No_grades,sum=0// sum represents the sum of grades;
	float average;
	
	printf("Enter the number of courses:\n");
	scanf("%d",&No_grades);
	
	for(i=0;i<No_grades;i++){
		printf("Enter your grade:");
		scanf("%d",&grade);	
		sum = sum +grade;
	}
	//Calculating average:
	average = sum/No_grades;
	printf("Your average is:%.2f",average);
	
	

	return 0;

}
