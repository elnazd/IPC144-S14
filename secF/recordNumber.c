/*Consider a text file named  winter.txt 
	5 Pairs of Boots 
	2 Coats 
	3 Hats 
	3 Pairs of Gloves

Each record describes a specific item and the quantity of that item.
Determine the number of records.*/
#include<stdio.h>
int main()
{
	FILE *fp = fopen("listName.txt","r");
	int recordNumber=0;
	char record[61];
	if(fp!=NULL){
		while(!feof(fp)){
		
			fscanf(fp,"%[^\n]%*c",record);
			recordNumber++;
		
		}	
		
		fclose(fp);
	recordNumber--;
	printf("There are %d records in the file",recordNumber);
	
	} else{
	
		printf("Failed to open the file!");
	}


}

