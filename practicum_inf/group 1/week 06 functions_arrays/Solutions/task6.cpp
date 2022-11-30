#include<iostream>
using std::cin;
using std::cout;
using std::end;

void read(int array[], int length)
{
	for (size_t i = 0; i < length; i++)
	{
		cout << "array[" << i << "] = ";
		cin >> array[i];
	}
}

bool contains(int array[], int length, int number)
{
	for (int i = 0; i < length; i++)
	{
		if (array[i] == number) {
			return true;
        }
	}
	return false;
}

void printSpecialElements(int array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		if (contains(array, length, i + array[i]))
        {
			cout << array[i] << " ";
        }
	}
}

int main()
{
	int arr[5];
	int len = sizeof(arr) / sizeof(int);

	read(arr, len);
	printSpecialElements(arr, len);

	return 0;
}