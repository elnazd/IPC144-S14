/*
In order to pass IPC144, students must meet the following requirements:
Obtain a grade more than 50 in the final exam.
Complete all the assignments
Write a program to 
Prompt the student to enter their grade. 
Prompt the student to enter 1 if the assignments are done; and 0 if the assignments are not done.
Then, your program decides if a student meets the requirements and prints a suitable message(pass/fail).
*/

#include<stdio.h>
int main(){
	int grade, assignments;
	
	printf("what is your IPC grade?");
	scanf("%d",&grade);
	printf("Are all the assignments done?");
	scanf("%d",&assignments);
	
	if(grade>50 && assignments==1)
		printf("Pass!");
	else
		printf("Fail!");
	
	return 0;


}
