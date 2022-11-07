#include <iostream>
#include <climits>
using std::cin;
using std::cout;
using std::endl;

int readNumberInRange(int lowerBound = INT_MIN, int upperBound = INT_MAX);

int main()
{
	int number = readNumberInRange(); //the same as readNumberInRange(INT_MIN, INT_MAX);
	int positiveNumber = readNumberInRange(0); //the same as readNumberInRange(0, INT_MAX);
	int negativeNumber = readNumberInRange(INT_MIN, 0);
	int fixedRangeNumber = readNumberInRange(5, 10);

	cout << "You entered: \n"
		<< " - the number: " << number << '\n'
		<< " - the positive number: " << positiveNumber << '\n'
		<< " - the negative number: " << negativeNumber << '\n'
		<< " - the number in [5,10]: " << fixedRangeNumber << endl;
}

int readNumberInRange(int lowerBound, int upperBound)
{
	int number;

	do
	{
		cout << "Enter number in [" << lowerBound << ", " << upperBound << "]: ";
		cin >> number;
	} while (number < lowerBound || number > upperBound);

	return number;
}