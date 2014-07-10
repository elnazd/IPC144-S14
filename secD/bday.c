/*this program will draw a simple bar graph of the number of people
  born in each month of the year in the class.

  It will ask the user to enter in  a month (number 1 to 12) for each
  person in the class, repeating until every one has been entered, 0 to stop
  after that it will draw the graph
 */
#include <stdio.h>
void getBirthdays(int birthMonth[]);
void graph(int birthMonth[]);


int main(void){
    /*number of people born in each month of the year*/
	int birthMonth[12]={0};
	/*gather the info*/
	getBirthdays(birthMonth);
	/*draw graph*/
	graph(birthMonth);
}
void getBirthdays(int birthMonth[]){
   int month;
   //counter for how many people have been read
   int numPeople = 0;
   //loop priming...
   printf("What month was person 1 born in: (1 to 12, 0 to exit): ");
   scanf("%d",&month);
   while(month != 0){
   	   numPeople++;
   	   int idx = month-1;
   	   birthMonth[idx]=birthMonth[idx] +1;
       //update the count for month
	   printf("What month was person %d born in: (1 to 12, 0 to exit): ",numPeople +1);
  	   scanf("%d",&month);

   }
}

void graph(int birthMonth[]){
	int i;
    //for every month starting from dec,
         //print out the month number
	     //print a bar
	     //print a bunch of stars based on 
	     //birthmonth[month]
}
