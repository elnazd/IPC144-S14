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
	birthMonth[0] = 5;
	birthMonth[1] = 3;
	birthMonth[2] = 4;
	birthMonth[3] = 1;
	birthMonth[4] = 2;
	birthMonth[5] = 0;
	birthMonth[6] = 1;
	birthMonth[7] = 2;
	birthMonth[8] = 5;
	birthMonth[9] = 2;
	birthMonth[10] = 6;
	birthMonth[11] = 2;
}

void graph(int birthMonth[]){
	int i;
	for(i=0;i<12;i++){
		printf("%d people were born in month %d\n",
			birthMonth[i],i+1);
	}
}
