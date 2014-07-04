/*this program will draw a simple bar graph of the number of people
  born in each month of the year in the class.

  It will ask the user to enter in  a month (number 1 to 12) for each
  person in the class, repeating until every one has been entered, 0 to stop
  after that it will draw the graph
 */
#include <stdio.h>
void getBirthdays(int birthMonth[]);
void graph(int birthMonth[]);
void printMonth(int month);

int main(void){
    /*number of people born in each month of the year*/
	int birthMonth[12]={0};
	/*gather the info*/
	getBirthdays(birthMonth);
	/*draw graph*/
	graph(birthMonth);
}
void getBirthdays(int birthMonth[]){

	birthMonth[0]=2;
	birthMonth[1]=0;
	birthMonth[2]=3;
}
/*given the month of the year as a number,
  print the string for that month.  
  Janurary is month 1
  February is month 2
 */
void printMonth(int month){
	switch(month){
		case 1: printf("January  "); break;
		case 2: printf("February "); break;
		case 3: printf("March    "); break;
		case 4: printf("April    "); break;
		case 5: printf("May      "); break;
		case 6: printf("June     "); break;
		case 7: printf("July     "); break;
		case 8: printf("August   "); break;
		case 9: printf("September"); break;
		case 10: printf("October "); break;
		case 11: printf("November"); break;
		case 12: printf("December"); break;
	}
}

void graph(int birthMonth[]){
//    for each month of the year starting with december working towards january
	int i;
	int j;
	for(i=11;i>=0;i--){
//    	printing the month
		printMonth(i+1);
//        print a tab and |
		printf(" |");
//        print *'s.   number printed is equal to number in the month
		for(j=0;j<birthMonth[i];j++){
			printf("*");
		}
		printf("\n");
	}
}
