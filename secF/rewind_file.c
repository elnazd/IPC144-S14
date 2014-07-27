/*Make sure "listName.txt" exists and contains a few records.
*/
#include<stdio.h>
int main()
{
	char name[30];
	FILE *fp = fopen("listName.txt", "r");
	if(fp!=NULL){
	//Good!
		while(fscanf(fp,"%[^\n]%*c",name)!=EOF){
			printf("%s\n",name);
			
		}
		
		rewind(fp);
		while(fscanf(fp,"%[^\n]%*c",name)!=EOF){
			printf("%s\n",name);
			
		}		
		
		fclose(fp);
	
	} else{
	
		printf("Failed to open the file!");
	}



}
