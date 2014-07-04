//This function looks for the index of value in array a[]
//Once you find the index print it!
void search(int a[],int value,int size)
{
	int i,found=0;
	//found=0 means item is not found.
	//found=1 means item is found.
	for(i=0;i<size;i++)
	{
		if(a[i]==value){
			printf("Found the value! The index is%d",i);
			i=size;
			found = 1;
			}	
	}
	
	if(found == 0)
		printf("The value is not found! Try again!");

}
