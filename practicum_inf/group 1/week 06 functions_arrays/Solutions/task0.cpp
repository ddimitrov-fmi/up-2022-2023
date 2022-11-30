#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int countDigits(int number, int digit)
{
	int count = 0;
	while (number != 0)
	{
		int last_digit = number % 10;
		number /= 10;
		if (last_digit == digit)
			++count;
	}
	return count;
}
int sortedNumber(int number)
{
	int sorted_num = 0;
	for (int i = 1; i <= 9; i++)
	{
		int amount = countDigits(number, i);
		for (int j = 0; j < amount; j++)
		{
			sorted_num *= 10;
			sorted_num += i;
		}
	}
	return sorted_num;
}
int main()
{
	int num;
	cin >> num;

	cout << sortedNumber(num);
	return 0;
}