#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int number;
    int biggestDigit = 0;
    int biggestDigitCount = 0;

    cout << "Number: ";
    cin >> number;

    int currentDigit;

    while (number > 0)
    {
        currentDigit = number % 10;

        if (currentDigit == biggestDigit)
        {
            ++biggestDigitCount;
        }
        else if (currentDigit > biggestDigit)
        {
            biggestDigit = currentDigit;
            biggestDigitCount = 1;
        }
        
        number /= 10;
    }

    cout << "Biggest digit: " << biggestDigit << "\n";
    cout << "Count: " << biggestDigitCount << endl;

    return 0;
}