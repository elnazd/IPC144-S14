#include <stdio.h>
/*this program will write hello world! to the
file hello.txt*/
int main(void){
	FILE* fp;  //fp is a pointer to a file
	
	//This function opens a file called
	//hello.txt from your current directory
	//we are going to write to the file
	//so the second paramter is "a" for append
	//append mode will add output to the end
	//of the file.  if the file does not exist,
	//append will create it
	fp =fopen("hello.txt","a");
	//fprintf works just like printf
	//only difference is that you have to 
	//give it a file pointer as the first argument
	fprintf(fp,"hello world!\n");

	fclose(fp);
	return 0;
}