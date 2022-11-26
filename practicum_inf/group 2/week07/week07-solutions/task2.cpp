#include<iostream>
using namespace std;

int countDigits(char str[]){
	
	int counter = 0;
	
	for(int i = 0; str[i]; i++){
		if(str[i] >= '0' && str[i] <= '9'){
			counter++;
		}
	}
	
	return counter;
}


int main(){
	char str[128] = "sdad1dada24ada1";
	
	cout << "The digits are " << countDigits(str);
	
	return 0;
}
