#include <stdio.h>
/*this program will write hello world! to the
file hello.txt*/
int main(void){
	FILE* fp;  //fp is a pointer to a file
	
	//This function opens a file called
	//hello.txt from your current directory
	//we are going to write to the file
	//so the second paramter is "w" for write
	//write mode will erase any old content for
	//hello.txt and create the file if it does not
	//exist
	fp =fopen("hello.txt","w");
	//fprintf works just like printf
	//only difference is that you have to 
	//give it a file pointer as the first argument
	fprintf(fp,"hello world!\n");
	//fclose, closes the file
	fclose(fp);
	return 0;
}