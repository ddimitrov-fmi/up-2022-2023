#include <iostream>
using namespace std;

int main () {
	
	int month, year;
	
	cin >> month >> year;
	
	bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	
	switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << 30;
			break;
		case 2:
			cout << 28 + isLeap;
			break;
		default:
			cout << "Not a month";
	}
	cout << endl;
	return 0;
}
