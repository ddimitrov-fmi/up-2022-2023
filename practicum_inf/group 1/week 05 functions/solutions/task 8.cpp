#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int maxDigit(int number)
{
	int maxDigit = 0;
	while (number != 0)
	{
		int lastDigit = number % 10;
		if (lastDigit > maxDigit)
		{
			maxDigit = lastDigit;
		}
		number /= 10;
	}
	return maxDigit;
}

int countDigitInNumber(int number, int digit)
{
	int count = 0;
	while (number != 0)
	{
		int lastDigit = number % 10;
		if (digit == lastDigit)
		{
			++count;
		}
		number /= 10;
	}
	return count;
}

int power(int base, int exponent)
{
	int result = 1;
	for (int i = 1; i <= exponent; i++)
	{
		result *= base;
	}
	return result;
}

int main()
{
	int number, max;
	cin >> number;

	max = maxDigit(number);
	cout << power(max, countDigitInNumber(number, max));
	return 0;
}