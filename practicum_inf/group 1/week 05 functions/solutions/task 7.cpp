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

int positionDigit(int number, int position)
{
	int digit;
	digit = (number / power(10, position)) % 10;
	return digit;

}

int main()
{
	int num, pos;
	cin >> num >> pos;

	cout << positionDigit(num, pos);
	return 0;
}