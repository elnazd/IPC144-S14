void aboveBelow(int key,int array[],int sz,
			int* above, int* below, int* same){

	*above=0;
	*below=0;
	*same=0;
	int i;
	for(i=0;i<sz;i++){
		if(array[i]>key){
			*above+=1;
		}
		else if(array[i]<key){
			(*below)++;
		}
		else{
			*same = *same +1;
		}
	}

}
void aboveBelow(int key,int array[],int sz,
			int* above, int* below, int* same){
	int a=0;
	int b=0;
	int s=0;

	int i;
	for(i=0;i<sz;i++){
		if(array[i]>key){
			a+=1;
		}
		else if(array[i]<key){
			b++;
		}
		else{
			s = s +1;
		}
	}
	*above=a;
	*below=b;
	*same=s;
}


int countChar(char alpha, char theString){
	int i;
	int rc=0;
	//int len=strlen(theString);
	//for(i=0;i<len;i++){
	for(i=0;theString[i]!='\0';i++){
		if(tolower(theString[i]) == tolower(alpha)){
			rc++;
		}
	}
	return rc;
}



int countChar(char alpha, char theString[]){
	int i;
	int rc=0;
	int len=strlen(theString);
	int diff='a'-'A';
	//this if statement ensures that alpha
	//is lower case
	if(alpha >='A' && alpha <='Z'){
		alpha=alpha+diff
	}
	for(i=0;i<len;i++){
		char c=theString[i];
		if(c>='A' && c<='Z'){
			c=c+diff;
		}
		if(c==alpha){
			rc++;
		}
	}
	return rc;
}


void getCounts(char theString[],int counts[]){
	int i;
	for(i=0;i<26;i++){
		counts[i]=countChar('a'+i ,theString);
	}
}

void getCounts(char theString[],int counts[]){
	int i;
	char alpha[27]="abcdefghijklmnopqrstuvwxyz";
	for(i=0;i<26;i++){
		counts[i]=countChar(alpha[i],theString);
	}
}

void getCounts(char theString[],int counts[]){
	int i;
	for(i=0;i<26;i++){
		counts[i]=0;
	}
	for(i=0;theString[i]!='\0';i++){
		char c=theString[i];
		if(c>='A' && c<='Z'){
			counts[c-'A']++;
		}
		else if(c>='a' && c<='z'){
			counts[c-'a']++;
		}
	}
}








