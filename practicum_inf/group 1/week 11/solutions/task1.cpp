#include <iostream>
using std::cout;
using std::endl;

size_t sumDigits(size_t number)
{
    if (number == 0) {
        return 0;
    }
    return number % 10 + sumDigits(number / 10);
}

int main()
{
    int n = 12345;
    cout << "n = "  << n << ", sum = " << sumDigits(n) << endl;
}