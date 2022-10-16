#include<iostream>

using std::cout;
using std::cin;
using std::endl;

/* 
Task 2:
    Read two integer numbers from the console.
    Swap their values without using a third variable.
    Print them on the console.
*/

int main()
{
	int x;
	int y;

	cout << "x = ";
	cin >> x;

	cout << "y = ";
	cin >> y;

	x = x + y;
	y = x - y;
	x = x - y;
	
	cout << "x = " << x << " and y = " << y << endl;
	return 0;
}