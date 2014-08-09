
#include <stdio.h>

/*search is the process of finding the location of a
 value from a list.
*/
/*this function returns the index of where key
  is located in the array.  If key does not exist
  function returns -1*/
int linearSearch(int key,int array[],int size);
int binarySearch(int key,int array[],int size);

int main(void){
	int array[10]={1,2,5,3,10,6,4,20,15,21};
	int sortedArray[10]={1,2,5,6,30,32,34,50,51,52};

	int rc=linearSearch(5,array,10);
	//rc should now be 2, because 5 is in array[2]
	printf("5 is in location: %d\n",rc);

	rc=linearSearch(25,array,10);
	//rc should now be -1 because it isn't in the array at all
	printf("25 is in location: %d\n",rc);


	rc=binarySearch(25,sortedArray,10);
	//rc should now be -1 because it isn't in the array at all
	printf("25 is in location: %d\n",rc);

	rc=binarySearch(32,sortedArray,10);
	//rc should now be 5 because it isn't in the array at all
	printf("32 is in location: %d\n",rc);


}
/*this function returns the index of where key
  is located in the array.  If key does not exist
  function returns -1*/
int linearSearch(int key,int array[],int size){
	int rc=-1;
	int i;
	for(i=0;rc == -1 && i<size;i++){
		if(key == array[i]){
			rc=i;
		}
	}
	return rc;
}
/*this function returns the index of where key
  is located in the array.  If key does not exist
  function returns -1.   The array must be sorted
 */
int binarySearch(int key,int array[],int size){
	int low=0;        //smallest index of search space
	int high=size-1;  //largest index of search space
	int mid;
	int rc=-1;
	while(rc ==-1 && low <= high){
		mid=(low+high)/2;
		//if thing I want is smaller than array[mid]
		if(key < array[mid]){
			high=mid-1;
		}
		else if(key > array[mid]){
			low =mid+1;
		}
		else{
			rc=mid;
		}
	}

	return rc;
}









