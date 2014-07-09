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












