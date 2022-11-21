#include<iostream>
using std::cin;
using std::cout;
using std::endl;

void swap(int& number_1, int& number_2)
{
	int swap = number_1;
	number_1 = number_2;
	number_2 = swap;
}

int main()
{
	int a = 5, b = 7;
	cout << "The value of a is: " << a << '\n';
	cout << "The value of b is: " << b << '\n';

	swap(a, b);
	cout << "The new value of a is: " << a << '\n';
	cout << "The new value of b is: " << b << '\n';

	return 0;
}