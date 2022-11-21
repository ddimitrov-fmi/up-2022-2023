#include<iostream>
using std::cin;
using std::cout;
using std::endl;

void Read(int array[], int length)
{
	for (size_t i = 0; i < length; i++)
	{
		cout << "array[" << i << "] = ";
		cin >> array[i];
	}
}

void Print(int array[], int length)
{
	for (size_t i = 0; i < length; i++)
	{
		cout << "array[" << i << "] = " << array[i] << endl;
	}
}

void ReversedPrint(int array[], int length)
{
	for (int i = length - 1; i >= 0; --i)
	{
		cout << "array[" << i << "] = " << array[i] << endl;
	}
}

int main()
{
	int array[10];
	int len = sizeof(array) / sizeof(int);

	Read(array, len);
	Print(array, len);
	ReversedPrint(array, len);

	return 0;
}