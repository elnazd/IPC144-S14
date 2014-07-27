/*Write a C program to prompt the user to enter names of n number of students and store them in a file.*/

#include<stdio.h>
int main()
{
	char name[30];
	int n=10;//number of students
	int i;
	FILE *fp = fopen("listName.txt", "w");
	if(fp!=NULL){
	//Good!
		for(i =0; i<n;i++){
			printf("Enter a name:\n");
			scanf("%[^\n]%*c",name);
			fprintf(fp,"%s\n",name);
		
		}
		
		fclose(fp);
	
	} else{
	
		printf("Failed to open the file!");
	}



}
