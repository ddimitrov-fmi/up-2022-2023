#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/*
Task 5:
    Write a program that reads a three digit number from the console.
    Print the reverse number (For example the reverse of 123 is 321).
*/

int main()
{
    int num;
    cout << "Enter a three digit number: ";
    cin >> num;

    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int ones = num % 10;

    int reverseNumber = ones * 100 + tens * 10 + hundreds;

    cout << "The reverse number of " << num << " is " << reverseNumber << endl;
    /*
        Alternative solution is to just print the digits without calculating the sum
        cout << "The reverse number of " << num << " is " << ones << tens << hundreds << endl;
        But when 100 is entered this will print 001
    */
    return 0;
}