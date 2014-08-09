/*this function searches array for key.  If it is found
  function returns index at which it was found, if it
  was not found, function returns -1*/
int linearSearch(int key,int array[],int size){
   int i;
   int rc=-1;
   for(i=0;rc==-1 && i<size;i++){
   		if(key==array[i]){
   			rc=i;
   		}
   }
   return rc;
}
/*this function searches array for key.  If it is found
  function returns index at which it was found, if it
  was not found, function returns -1
  array MUST be sorted*/
int binarySearch(int key,int array[],int size){
   int rc=-1;
   int low=0;        //lowest index of where key may be found
   int high=size-1;  //highest index of where key may be found
   int mid;
   while(rc==-1 && low <= high){
    mid=(low+high)/2
    if(key < array[mid]){
      high = mid-1;
    }
    else if(key > array[mid]){
      low = mid +1;
    }
    else{
      rc=mid;
    }
   }


   return rc;
}