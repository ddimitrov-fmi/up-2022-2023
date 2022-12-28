#include <iostream>
using std::cout;
using std::endl;

size_t toBinary(size_t number) {
	if (number == 0)
		return number;
	return number % 2 + 10 * toBinary(number / 2);
}

int main()
{
    int n = 19;
    cout << n << ", to binary:  " << toBinary(n) << endl;
}