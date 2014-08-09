void aboveBelow(int key, int array[],int sz,
		int* above, int* below, int* same){
	int a=0;
	int b=0;
	int s=0;

	for(i=0;i<sz;i++){
		if(array[i] <  key){
			b++;
		}
		else if(array[i] > key){
			a++;
		}
		else{
			s++;
		}
	}
	*above = a;
	*below = b;
	*same = s;
}

int countChar(char alpha, char theString[]){
	int i;
	int rc=0;
	for(i=0;theString[i]!='\0';i++){
		if(tolower(alpha)==tolower(theString[i])){
			rc++;
		}
	}
	return rc;
}

int countChar(char alpha, char theString[]){
	int i;
	int rc=0;
	char c;
	/*make alpha a lower case version*/
	if(alpha >='A' && alpha <='Z'){
		alpha=alpha+'a'-'A';
	}

	for(i=0;theString[i]!='\0';i++){
		if(theString[i] >='A' && theString[i]<='Z'){
			c=theString[i]+'a'-'A';
		}
		else{
			c=theString[i];
		}
		if(alpha == c){
			rc++;
		}
	}
	return rc;
}

/*acceptable solution but its not efficient*/
void getCounts(char theString[], int counts[]){
	int i;
	for(i=0;i<26;i++){
		counts[i]=countChar('a'+i,theString);
	}
}
void getCounts(char theString[],int counts[]){
	int i;
	int len = strlen(theString);
	//init counters to 0
	for(i=0;i<26;i++){
		counts[i]=0;
	}
	//go through string
	for(i=0;i<len;i++){
		/*
		char c = (theString[i]>='A ' && theString[i]<='Z')?
					theString[i]+'a'-'A':theString[i];
		*/

		char c = tolower(theString[i]);
		/*if(c>='a' && c <='z'))*/
		if(islower(c)){
			counts[c-'a']++;
		}
	}
}
/*this function returns first%second without 
  using % operator*/
int mod(int first,int second){
   while(first >= second){
       first = first - second;
   }
   return first;
}

void multiply(struct Fraction* product, struct Fraction* first, struct Fraction* second){
	product->numerator=first->numerator*second->numerator;
	product->denominator=first->denominator*second->denominator;
}


