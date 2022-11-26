#include<iostream>
using namespace std;

int countWords(const char str[]){
	int i = 0, wordCounter = 1;
	
	while(str[i] != '\0'){
		
		if(str[i] == ' '){
			wordCounter++;
		}
		i++;
	}
	
	return wordCounter;
}

int main(){
	
	char str[32];
	
	cin.getline(str,32);
	
	cout << countWords(str);
	
	return 0;
}
