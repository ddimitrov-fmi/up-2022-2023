#include<iostream>
using namespace std;

int digitCounter(const char str[]){
	int i = 0;
	int digitCounter = 0;
	
	while(str[i] != '\0'){
		
		if(str[i] >= '0' && str[i] <= '9'){
			digitCounter++;
		}
		i++;
	}
	
	return digitCounter;
}

int main(){
	
	char str[32];
	
	cin.getline(str,32);
	
	cout << digitCounter(str);
	
	return 0;
}
