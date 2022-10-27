#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

	//First way
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";
        
    //Just adding new line
	cout << endl;    
    
	//Second way
	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        cout << year << " is a leap year.";   	
	}else{
		cout << year << " is not a leap year.";
	}

    return 0;
}
