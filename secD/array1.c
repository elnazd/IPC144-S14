#include <stdio.h>
float average(int array[],int size);
void printArray(int array[],int size,int maxPerLine);  

int main(){
	int mydata1[10]={5,10,15,20,25,30,35,40,45,50};
	int mydata2[20]={1,3,5,7,11,13,17,19,23,29,31,37};
        double avg;
        int min;
        int max;
        printf("array 1: ");
	printArray(mydata1,10,3);

	printf("\narray 2: ");
	printArray(mydata2,12,5);
     
        //Your code here: Make function call to minMaxAve with
        //mydata1 to find its min, max and average


	printf("average of array 1 is: %.2lf\n",avg);
	printf("smallest number of array 1 is: %d\n",min);
	printf("biggest number of array 1 is: %d\n",max);


	return 0;
}

/*The printArray function is passed an array, a size and the maximum number of
  values to print per line.  It will print  all the values in the array, 
  separated by spaces. Each line of output must not exceed the maximum 
  number of values to print per line.  The last line of numbers
  always has a newline following the number regardless of the 
  number of values it has
*/
void printArray(int array[],int size,int maxPerLine){
   //your code here
}


/* this function is passed an array, its size and two pointers.
   It calculates and returns the average of the
   values in the array and passes back the smallest and
   largest values in the array through min and max respectively
*/
double minMaxAve(int array[],int size,int* min, int* max){
  //your code here
}



















