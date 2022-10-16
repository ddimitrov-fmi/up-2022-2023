#include<iostream>

using std::cin;
using std::cout;
using std::endl;

/*
Runtime Error - Example

This type of error occurs while the program is running. 
Because this is not a compilation error, the compilation 
will be completed successfully.
These errors occur due to segmentation fault.

*/

int main()
{
	int num = 5;
	// We cannot divide by zero. When the following line is executed, an error is thrown!
	cout << num / 0;
	return 0;
}