#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int power(int base, int exponent)
{
	int result = 1;
	for (int i = 1; i <= exponent; i++)
	{
		result *= base;
	}
	return result;
}

int deleteDigit(int number, int position)
{
	int divisor = power(10, position);
	int remainder = number % divisor;
	int newNumber = (number / divisor) / 10;
	newNumber *= divisor;
	newNumber += remainder;
	return newNumber;
}

int main()
{
	int num, pos;
	cin >> num >> pos;

	cout << deleteDigit(num, pos);
	return 0;
}