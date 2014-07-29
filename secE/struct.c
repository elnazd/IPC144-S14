struct Passenger{
  char name[60];
  int startStationNumber;
  int endStationNumber;
  int dayOfWeek;
};

int main(void){
	//struct Passenger is a data type.. like in
	struct Passenger variableName;
	struct Passenger array[5];
	strcpy(array[1].name,"Bob");
	array[3].dayOfWeek = 6;
}