#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned int num, lastDigit;
    cout << "Enter a positive integer: ";
    cin >> num;

    lastDigit = num % 10;
    num -= lastDigit;

    if (lastDigit % 2 == 0)
    {
        lastDigit %= 3;
    }
    else
    {
        lastDigit %= 2;
    }

    num += lastDigit;
    cout << "The new number is: " << num << endl;

    return 0;
}