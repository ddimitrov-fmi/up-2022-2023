#include<iostream>

using std::cin;
using std::cout;
using std::endl;

/*
Syntax Errors - Example

These are also referred to as compile-time errors. 
These errors have occurred when the rule of C++ writing techniques 
or syntax has been broken. These types of errors are typically flagged 
by the compiler prior to compilation.
*/

int main()
{

	// the operator should be <<, not <
	cout < "Hello World!" //Missing semicolon at the end of this statement.
	return 0;

}