// C++ program demonstrating ^ operator truth table
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int a = 5;
	int b = 9;

	// false ^ false = false
	cout << ((a == b) ^ (a >= b)) << endl;

	// true  ^ true  = false
	cout << ((a != b) ^ (b > a)) << endl;

	// false ^ true  = true
	cout << ((a == 0) ^ (a < b)) << endl;

	// true  ^ false = true
	cout << ((a <= 7) ^ (b <= 7)) << endl;

	return 0;
}