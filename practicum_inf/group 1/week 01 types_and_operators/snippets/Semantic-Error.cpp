#include<iostream>

using std::cin;
using std::cout;
using std::endl;

/*
Semantic Errors - Example

 When a sentence is syntactically correct 
 but has no meaning, semantic errors occur. 
 This is similar to grammatical errors.
*/

int main()
{
	int a = 5;
	int b = 20;
	int d; // d is not used and could be removed
	int sum;

	/*
		assignment operators takes the value of the right expression
		and assigns it to the left variable
		in this case a + b is not a variable and cannot be assigned the value of sum.

		It should be:
		sum = a + b;
	*/
	a + b = sum;

	// The other mistake is that c is not declared!
	cout << "The sum is: " << c << endl; //But what is c ???
	return 0;
}