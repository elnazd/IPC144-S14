// Cable Channel
 // cable.c
 /*
 Design and code a program named cable.c that
prompts the user for a TV station number
displays the corresponding cable channel
The TV-station cable-channel 
cross-reference list is:

 */

 #include <stdio.h>
 #define SIZE 12
 int findIndex(int tv[],int cable[], int t); 

 int main(void)
 {
	int TV[] = {2,3,4,5,6,7,9,11,17,25,29,36};
	int Cable[] = {17,20,16,6,3,18,8,11,61,12,28,4};
	int t; //a TV station number
	int c; //the corresponding cable channel
	
	printf("Please a TV station number:\n");
	scanf("%d",&t);
	
	c = findIndex(TV,Cable,t);
	printf("The corresponding cable channel is:    %d",c);
 }

 // findIndex returns the index of the element that matches the
 // value received.
 //
 int findIndex(int tv[],int cable[], int t)
 { 
	int i;
	int channel; //the corresponding cable channel
	for(i=0;i<SIZE;i++){
		if(tv[i]==t)
			channel = cable[i];
	
	}
	
	return channel;

 }
