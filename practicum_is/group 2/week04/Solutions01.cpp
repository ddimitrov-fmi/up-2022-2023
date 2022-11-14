#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	//task1

	/*for (int i = 100; i < 1000; i++)
	{
		int thirdDigit = i % 10;
		int secondDifit = i / 10 % 10;
		int firstDigit = i / 100 % 10;
		if (firstDigit != secondDifit && firstDigit != thirdDigit && thirdDigit != secondDifit)
		{
			cout << i << "  ";
		}
	}*/

	//task2 

	/*int number, sumOfDeviders = 0;
	cin >> number;
	for (int i = 1; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			sumOfDeviders += i;
		}
	}
	if (sumOfDeviders == number)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}*/

	//task3

	/*int number, sum = 0, countOfDigits = 0;
	cin >> number;
	int copyOfNumber = number;
	while (copyOfNumber != 0)
	{
		copyOfNumber /= 10;
		countOfDigits++;
	}
	copyOfNumber = number;
	for (int i = 0; i < countOfDigits; i++)
	{
		sum += pow(copyOfNumber % 10, countOfDigits);
		copyOfNumber /= 10;
	}
	if (sum == number)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}*/

	//task4

	/*int firstNumber, secondNumber;
	cin >> firstNumber >> secondNumber;
	while (firstNumber >= secondNumber)
	{
		int copyOfFirstNumber = firstNumber;
		int copyOfSecondNumber = secondNumber;
		bool isInFirstDigit = true;
		while (copyOfSecondNumber > 0)
		{
			if (secondNumber % 10 != copyOfFirstNumber % 10)
			{
				isInFirstDigit = false;
			}
			copyOfSecondNumber /= 10;
		}
		if (isInFirstDigit)
		{
			cout << "true";
			return 0;
		}
		firstNumber /= 10;
	}
	cout << "false";*/

	//task 5

	/*int n, k, count=0;
	cin >> n >> k;
	while (n > 0)
	{
		if (n % k == 0)
		{
			count++;
		}
		n /= 10;
	}
	cout << count << endl;*/

	//task 6;

	/*int sum;
	cin >> sum;
	int countOfBanknotes = 0;
	int currentCount = 0;
	if (sum >= 100)
	{
		currentCount = sum / 100;
		sum -= currentCount * 100;
		countOfBanknotes += currentCount;
	}
	if (sum >= 50)
	{
		currentCount = sum / 50;
		sum -= currentCount * 50;
		countOfBanknotes += currentCount;
	}
	if (sum >= 20)
	{
		currentCount = sum / 20;
		sum -= currentCount * 20;
		countOfBanknotes += currentCount;
	}
	if (sum >= 10)
	{
		currentCount = sum / 10;
		sum -= currentCount * 10;
		countOfBanknotes += currentCount;
	}
	if (sum >= 5)
	{
		currentCount = sum / 5;
		sum -= currentCount * 5;
		countOfBanknotes += currentCount;
	}
	if (sum >= 2)
	{
		currentCount = sum / 2;
		sum -= currentCount * 2;
		countOfBanknotes += currentCount;
	}
	else
	{
		countOfBanknotes += sum;
	}
	cout << countOfBanknotes;*/

	//task7

	/*int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << '#';
		}
		cout << endl;
	}*/

	//task8

	/*int number;
	cin >> number;
	int countOfPrinted = 0;
	int elemtnsInRow = 1;
	while (number > countOfPrinted)
	{
		for (int j = 1; j <= elemtnsInRow; j++)
		{
			countOfPrinted++;
			cout << countOfPrinted << " ";
			if (countOfPrinted >= number)
			{
				break;
			}
		}
		elemtnsInRow++;
		cout << endl;
	}*/

	//task 9

	/*int n;
	cin >> n;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = i + 1; j <= n; j++)
		{
			cout << j;
		}
		cout << endl;
	}
	for (int i = 0; i < n - 1; i++)
	{
		cout << " ";
	}
	cout << n << endl;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1 - i; j > 1; j--)
		{
			cout << ' ';
		}
		for (int j = n - i - 1; j <= n; j++)
		{
			cout << j;
		}S
		cout << endl;
	}*/

	//task 10


	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = n - i; j > 1; j--)
		{
			cout << " ";
		}
		cout << '/';
		for (int j = 2 * n - 2 * i; j < 2 * n; j++)
		{
			cout << ' ';
		}
		cout << '\\';
		cout << endl;
	}
	for (int i = 0; i < 2 * n; i++)
	{
		cout << '-';
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << '|';
		for (int j = 0; j < 2 * n - 2; j++)
		{
			cout << ' ';
		}
		cout << '|';
		cout << endl;
	}
	for (int j = 0; j < 2 * n; j++)
	{
		cout << '=';
	}
	return 0;
}