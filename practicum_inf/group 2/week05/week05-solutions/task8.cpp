#include<iostream>
using namespace std;


int length(const char str[]){
	
	int i = 0;
	
	while(str[i] != '\0'){
		i++;
	}
	
	return i;
}

bool isIdentifier(const char str[]) 
{ 
  
    if (!((str[0] >= 'a' && str[0] <= 'z') 
          || (str[0] >= 'A' && str[1] <= 'Z') 
          || str[0] == '_')) 
        return false; 

    for (int i = 1; i < length(str); i++) { 
        if (!((str[i] >= 'a' && str[i] <= 'z') 
              || (str[i] >= 'A' && str[i] <= 'Z') 
              || (str[i] >= '0' && str[i] <= '9') 
              || str[i] == '_')) 
            return false; 
    } 
  
    return true; 
} 

int main(){
	
	char str[32];
	
	cin.getline(str,32);
	
	cout << boolalpha << isIdentifier(str);
	
	return 0;
}
