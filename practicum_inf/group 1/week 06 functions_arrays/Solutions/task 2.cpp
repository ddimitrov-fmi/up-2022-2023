#include<iostream>
using std::cin;
using std::cout;
using std::endl;

bool isPrime(int number)
{
	for (int i = 2; i * i <= number; i++)
	{
		if (number % i == 0)
			return false;
	}
	return true;
}

void multiplyByPrime(unsigned int& number)
{
	if (number == 0 || number == 1)
	{
		number = 666;
		return;
	}
	for (int i = number; i >= 2; --i)
	{
		if (isPrime(i))
		{
			number *= i;
			return;
		}
	}

}

int main()
{
	unsigned int number;
	cin >> number;

	multiplyByPrime(number);
	cout << number;

	return 0;
}