#include<stdio.h>
#define ROW 3
#define COL 4
void display_FirstRow(int a[]);
void display(int a[][COL]);
int main()
{

	int items[ROW][COL],i,j;
	//initialize the elements with zero
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			items[i][j]=0;
						
	/*Col-based initialization
	for(j=0;j<COL;j++)
		for(i=0;i<ROW;i++)
			items[i][j]=0;
	*/
	
	//Prompt the user to enter values to fill the array.
	printf("Please fill the array\n");
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			scanf("%d",&items[i][j]);

	display(items);
	display_FirstRow(items[1]);//Passing the second row
	

}
void display_FirstRow(int a[])
{

	int i;
	for(i=0;i<COL;i++){
		
			printf("%d\t",a[i]);
		}
		
	
}



void display(int a[][COL])
{
	int i,j;
//Display the elements as a table!
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}


}
