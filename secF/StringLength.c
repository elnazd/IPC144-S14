/*Write a program that 
Step1: prompts the user to input a string, (whitespaces allowed) 
Add code to:
Step2: allocate memory for the string
Step3: Scanf the string from the user
Step4: pass the string to the length() function
in the length() function, count the number of characters in the string.
Step5: Pass the length of the string to the main function and display it.*/

//input: Programming is fun!
// output: 19
#include<stdio.h>
int length(char s[]);

int main(){

	//step2:
	char phrase[31],size;//size of the string!
	//Step1 and step3:
	printf("Please enter a string:\n");
	scanf("%[^\n]",phrase);
	size = length(phrase);
	printf("The length of the phrase is:%d",size);
	return 0;
}	

int length(char s[])
{
	int i=0;
	while(s[i]!='\0'){
		i++;
	}

	return i;
}
