#include <iostream>
using namespace std;

int main()
{
	//TASK 1

	/*
	int age;
	cin >> age;

	age >= 18 ? cout << "true" : cout << "false";
	*/


	//TASK 2

	/*
	int x, y;
	cin >> x;
	cin >> y;

	x % y == 0 ? cout << "true" : cout << "false";
	*/


	//TASK 3

	/*
	int number, sumOfDigits;
	cin >> number;

	sumOfDigits = (number % 10) + ((number / 10) % 10) + ((number / 100) % 10) + (number / 1000);

	sumOfDigits >= 10 && sumOfDigits < 100 ? cout << "true" : cout << "false";
	*/


	//TASK 4

	/*
	int day;
	cin >> day;

	switch (day)
	{
	case 1:
		cout << "Monday\n";
		break;

	case 2:
		cout << "Tuesday\n";
		break;

	case 3:
		cout << "Wednesday\n";
		break;

	case 4:
		cout << "Thursday\n";
		break;

	case 5:
		cout << "Friday\n";
		break;

	case 6:
		cout << "Saturday\n";
		break;

	case 7:
		cout << "Sunday\n";
		break;

	default:
		cout << "There is no such day!\n";
		break;
	}
	*/


	//TASK 5

	/*
	char symbol;
	double numberA, numberB;
	cin >> symbol;
	cin >> numberA;
	cin >> numberB;

	switch (symbol)
	{
	case '+':
		cout << numberA + numberB << '\n';
		break;

	case '-':
		cout << numberA - numberB << '\n';

	case '*':
		cout << numberA * numberB << '\n';
		break;

	case '/':
		cout << numberA / numberB << '\n';

	case '%':
		cout << (int)numberA % (int)numberB << '\n';
		break;

	default:
		cout << "Invalid operator\n";
		break;
	}
	*/

	//TASK 6

	/*
	int month;
	cin >> month;

	switch (month)
	{
	case 12: case 1: case 2:
		cout << "Winter";
		break;

	case 3: case 4: case 5:
		cout << "Spring";
		break;

	case 6: case 7: case 8:
		cout << "Summer";
		break;

	case 9: case 10: case 11:
		cout << "Autumn";
		break;

	default:
		cout << "There is no such month";
		break;
	}
	*/

	
	//TASK 7

	/*
	int month;
	cin >> month;

	switch (month)
	{
	case 2:
		cout << 29;
		break;

	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		cout << 31;
		break;

	case 4: case 6: case 9: case 11:
		cout << 30;
		break;

	default:
		cout << "There is no such month";
		break;
	}
	*/


	//TASK 8
	
	/*
	int day, month, sumOfDays = 0;
	cin >> day;
	cin >> month;

	switch (month) //validation of day
	{
	case 2:
		if (day > 29)
			cout << "invalid day";
		break;

	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (day > 31)
			cout << "invalid day";
		break;

	case 4: case 6: case 9: case 11:
		if (day > 30)
			cout << "invalid day";
		break;

	default:
		cout << "There is no such month";
		return 0;
	}


	switch (month)
	{
	case 1:
		sumOfDays += 31;
	case 2:
		sumOfDays += 29; //leap year
	case 3:
		sumOfDays += 31;
	case 4:
		sumOfDays += 30;
	case 5:
		sumOfDays += 31;
	case 6:
		sumOfDays += 30;
	case 7:
		sumOfDays += 31;
	case 8:
		sumOfDays += 31;
	case 9:
		sumOfDays += 30;
	case 10:
		sumOfDays += 31;
	case 11:
		sumOfDays += 30;
	case 12:
		sumOfDays += 31;
		break;

	default:
		cout << "There is no such month";
		return 0;
	}

	cout << sumOfDays - day;
	*/


	//TASK 9

	/*
	int number, factorial = 1;
	cin >> number;

	for (int i = 1; i <= number; i++)
	{
		factorial *= i;
	}

	cout << factorial;
	*/


	//TASK 10

	/*
	int number, count = 0;
	cin >> number;

	if (number == 0)
	{
		cout << 1;
		return 0;
	}

	while (number != 0)
	{
		count++;
		number /= 10;
	}

	cout << count;
	*/


	//TASK 11

	/*
	int number;
	cin >> number;

	for (int i = 2; i <= 10; i++)
	{
		if (number % i == 0)
			cout << i << " is a divisor\n";
	}
	*/


	//TASK 12


	/*
	int fib1 = 0, fib2 = 1, swap;
	cout << fib1 << ' ';

	for (int i = 0; i < 20; i++)
	{
		swap = fib2;
		fib2 += fib1;
		fib1 = swap;

		cout << fib1 << ' ';

	}
	*/
}