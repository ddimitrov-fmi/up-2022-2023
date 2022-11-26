#include<iostream>
using namespace std;

bool isValid(char symbol) {
    return ((int) symbol >= 97 && (int) symbol <= 122) || (int) symbol == 95;
}


bool isIdentificator(const char str[]) {
    if (!isValid(str[0])){
    	return false;
	}
        
    for (int i = 1; i < str[i]; i++) {
    	
        if (!(isValid(str[i]) || ((int) str[i] >= 48 && (int) str[i] <= 57)) ||
            ((int) str[i] >= 65 && (int) str[i] <= 90)){
            	return false;
			}
            
    }
    return true;
}


int main(){
	char str[] = "daaa";
	
	cout << isIdentificator(str);
	
	return 0;
}
