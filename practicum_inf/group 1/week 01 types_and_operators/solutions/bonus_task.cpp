#include<iostream>
using std::cout;
using std::cin;
using std::endl;

/*
Bonus task:
    Read a number from the console.
    Without using if or conditional operator(?:) print:
        - 0 if the number is even
        - the number if it is odd
*/

int main()
{
	int num;
    cin >> num;

    // if the number is even (num % 2) = 0
    // if the number is odd (num % 2) = 1
    cout << num * (num % 2) << endl; 
	return 0;
}