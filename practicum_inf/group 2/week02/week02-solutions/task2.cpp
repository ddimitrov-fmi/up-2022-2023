#include <iostream>
using namespace std;

int main()
{
    char symbol;
    
    cin >> symbol;
    
    //Here you can use (symbol >= 'a' && symbol <= 'z')
    if(symbol >= 97 && symbol <= 122) {
    	cout << "The upper case character corresponding to is " << (char)(symbol - 32);
    	
	} else if(symbol >= 65 && symbol <= 90) { //Here you can use (symbol >= 'A' && symbol <= 'Z')
		cout << "The lower case character corresponding to is " << (char)(symbol + 32);
		
	} else{
		cout << symbol << " is not a letter";
	}

    return 0;
}
