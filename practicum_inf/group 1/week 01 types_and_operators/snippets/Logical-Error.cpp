#include<iostream>

using std::cin;
using std::cout;
using std::endl;

/*
Logical Errors - Example

Even if the syntax and other factors are correct, 
we may not get the desired results due to logical issues. 
These are referred to as logical errors. 

*/

int main()
{
	int num = 5;

	// We want to get the remainder but we print the quotien
	cout << "The remainder of the division of 5 by 3 is: " << num / 3 << endl;

	return 0;
}