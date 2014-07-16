#include <stdio.h>
#include <stdlib.h>

int main(void){
	/*writeFile is a variable of type FILE*.  You need a different
	  variable for each file you are working with.*/
	FILE* writeFile;
	/*fopen is a function that will open a file and return
	  a handle to that file.  It accepts the name of the 
	  file and a mode of opening.  w stands for write mode
	  if the file does not already exist, it will be created
	  if it exists, the content will be overwritten*/
	FILE* appendFile;

	writeFile=fopen("mydir/hello.txt","w");
    //append mode appends new output to the end of the file
	appendFile = fopen("hello2.txt","a");
	if(writeFile == NULL){
		printf("unable to open hello.txt\n");
		exit(0);
	}
	if(!appendFile){
		printf("unable to open hello2.txt\n");
		exit(0);
	}
	fprintf(writeFile,"hello world!\n");
	fprintf(appendFile,"hamster huey and the gooey kablooie\n");
	fclose(writeFile);
	fclose(appendFile);
	return 0;
}