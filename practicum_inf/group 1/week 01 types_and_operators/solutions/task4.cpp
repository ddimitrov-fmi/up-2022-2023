#include<iostream>

using std::cout;
using std::cin;
using std::endl;

/* 
Task 4:
    Write a program that reads a three digit number from the console.
    Find the sum of the digits of the number and print it on the console.
*/

int main()
{
		int num;
		cout << "Enter a three digit number: ";
		cin >> num;
        
		int ones = num % 10;        //if num is 123, ones becomes 3
		int tens = (num / 10) % 10; //if num is 123, tens becomes 2
		int hundreds = num / 100;   //if num is 123, hundreds becomes 1

        int sum = ones + tens + hundreds; //sum the digits

        cout << "The sum of the digits of " << num << " is " << sum << endl;
		return 0;
}