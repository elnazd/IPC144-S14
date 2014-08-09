struct Table{
	int legs;
	int length;
	int width;
	char name[20];
};
int main(void){
    //desk.legs == 4
    //desk.length == 10
    //desk.width == 10
	struct Table desk={4,10,10,"the ultimate"};

	struct Table store[3]={{1,2,3,"dining table"},{10,5,2,"leggy"},{3,6,4,"the triangle"}}
}