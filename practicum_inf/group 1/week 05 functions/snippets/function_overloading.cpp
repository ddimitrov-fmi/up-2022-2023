#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int read(int from, int to)
{
	int input;

	do
	{
		cout << "Enter number in [" << from << ", " << to << "]: ";
		cin >> input;
	} while (input < from || input > to);

	return input;
}

char read(char from, char to)
{
	char input;

	do
	{
		cout << "Enter char between " << from << " and " << to << ": ";
		cin >> input;
	} while (input < from || input > to);

	return input;
}

double read(double from, double to, double eps)
{
	double input;

	do
	{
		cout << "Enter char between " << from << " and " << to << ": ";
		cin >> input;
	} while (input < from || input > to);

	return input;
}