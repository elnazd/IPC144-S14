/*this program will draw a simple bar graph of the number of people
  born in each month of the year in the class.

  It will ask the user to enter in  a month (number 1 to 12) for each
  person in the class, repeating until every one has been entered, 0 to stop
  after that it will draw the graph
 */
#include <stdio.h>
/*fix the function prototypes below*/

/*this function accepts an array of integers representing
the number of people born in each month.  It will modify
the array based on user input to track number of people born
in each month*/
void getBirthdays(int months[]);

/*this function will accept an array of integers representing
the number of people born in each month.  It will
create a horizontal bar graph (bars go left to right).
For each person born in each month, one astericks (*) is drawn
for that bar.  Each bar must be labeled with the 3 character
short form for that month.  December should be at the top of
the graph, January at bottom.  It should look like this:

dec |**
nov |*
oct |*****
sep |
....
jan |*
------------------------------------------------
*/
void graph(int months[]);

int main(void){
	int birthMonths[12] = {0};
	getBirthdays(birthMonths);
	graph(birthMonths);
	return 0;
}

void getBirthdays(int months[]){
  int month;
  int peopleCounter=1;
  //prompt and read month
  printf("Please enter the month for person # %d (1 to 12, 0 to exit:) ",peopleCounter);
  scanf("%d",&month);
  peopleCounter++;

  while(month!=0){
    //update that count for the month entered
    int idx=month-1;
    months[idx]=months[idx]+1;
    //prompt and read month
    printf("Please enter the month for person # %d (1 to 12, 0 to exit:) ",peopleCounter);
    scanf("%d",&month);
    peopleCounter++;
  }
}
/*given the month in numeric form, this function
  will print the 3 letter abbreviation for that month
*/
void printMonths(int month){
  char monthText[12][4]={"jan","feb","mar","apr",
                         "may","jun","jul","aug",
                         "sep","oct","nov","dec"};
  int idx=month-1;
  printf("%s",monthText[idx]);
}
void graph(int months[]){
	int i;
  int j;
  //for every month of the year starting in december
  for(i=11;i>=0;i--){
  //    print out the month name
    printMonths(i+1);
    printf(" |");
  //    print the number of astericks == to number of people born in that month
    for(j=0;j<months[i];j++){
      printf("*");
    }
    printf("\n");
  }
}










