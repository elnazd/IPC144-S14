/*

Write a the following program


Step 1:Write a program to prompt the users to input their names and ages. 
 Assume there are 100 employees in a company. 
 Assume the inputs are correctly entered.
 Assume users might input duplicate records. 
 Make sure not to save duplicate records


User's input: 

 Homer          45  
 Marge          22
 Homer          42
 Bart           14
 Marge          21
 Lisa            8


You save:

 name[ ][]  age[ ]   *n
 ----------------------
 Homer          45    4
 Marge          22
 Bart           14
 Lisa            8



*/

#include<stdio.h>
#include<string.h>
int search(char L[][31], char name[31], int number);
int main()
{
	char List[100][31]; // List of names! We assume there are 100 employees. Also Assume that names of employees have max 30 characters.
	int age[100]; // List of employee's ages
	char input[31]; // input name. We need to further check this name for duplicate records. 
	int empNo=0; //Keeps track of number of employees
	int i, duplicate=1;
	
	for(i=0;i<100;i++)
	{
		printf("Please enter your name:\n");
		scanf("%[^\n]%*c",input);
		//Checking if input already exists in the list:
		duplicate = search(List,input,empNo);
		
		if(duplicate != 0) //This record does not exist in the list! Add it!
		{
			strcpy(List[i],input);
			empNo++;
			printf("Please enter your age:\n");
			scanf("%d%*c",&age[i]);
		
		}
		else
		{ //This record already exists! Do not add! 
		
			printf("\nThe record already exists in the list!\n");
		
		}
	
	}
	
	return 0;
	
}
/*
This function takes a list of employee names, inout string, and the number of employees.
This function looks for the input string in the List.
This function returns zero if no match found, and one otherwise!
*/
int search(char L[][31], char name[31], int number)
{
	int i;
	int found=1; // no record has been found yet
	
	for(i=0;i<number;i++)
	{
		found = strcmp(L[i],name);
		if (found == 0) //A duplicate has been found! Stop searching
			i=number;
		
	}
	return found;
}


















