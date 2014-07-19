/*Write a program that prompts the user to input two strings.
Add code to:
allocate memory for the strings
Scanf the strings from the user
pass the string to the str_copy() function
Copy string 1 to string 2.*/
void string_copy(char s1[],char s2[]);

int main(){

	
	char phrase1[31],phrase2[31];	
	printf("Please enter a string:\n");
	scanf("%30[^\n]",phrase1);
	
	string_copy(phrase1,phrase2);
	puts(phrase1);
	puts(phrase2);
	return 0;
}	

void string_copy(char s1[],char s2[])
{
	int i;
	//Copying s1 to s2, one character at a time
	for(i=0;s1[i]!='\0';i++)
		s2[i] = s1[i];
		
	s2[i]='\0';
}
