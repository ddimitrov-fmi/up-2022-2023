#include <iostream>

int main ()
{
    int number;

    std::cin >> number;

    int temp = number;
    int revertedNumber = 0;


    /*
    temp = 1234
    revertedNumber = 0 ---> 4321

    lastDigit = 1234 % 10 = 4
    temp = 1234 / 10 = 123
    revertedNumber = 4

    lastDigit = temp % 10 = 123 % 10 = 3
    temp = temp / 10 = 123 / 10 = 12
    revertedNumber * 10
    revertedNumber + lastDigit
    43

    lastDigit = temp % 10 = 12 % 10 = 2
    temp = temp / 10 = 12 / 10 = 1
    432

    lastDigit = temp % 10 = 1 % 10 = 1
    temp = temp / 10 = 1 / 10 = 0
    4321
    */

    while (temp != 0)
    {
        int lastDigit = temp % 10;
        temp /= 10;

        revertedNumber *= 10;
        revertedNumber += lastDigit;
    }

    std::cout << (number == revertedNumber ? "Valid" : "Invalid") << std::endl;

    return 0;
}