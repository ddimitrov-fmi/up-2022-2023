#include <iostream>

int main ()
{
    int number1, number2, number3;

    std::cin >> number1 >> number2 >> number3;

    int minNumber = number1;
    int maxNumber = number1;

    if (number2 < minNumber)
    {
        minNumber = number2;
    }

    if (number2 > maxNumber)
    {
        maxNumber = number2;
    }

    if (number3 < minNumber)
    {
        minNumber = number3;
    }

    if (number3 > maxNumber)
    {
        maxNumber = number3;
    }

    int middleNumber = (number1 + number2 + number3) - (minNumber + maxNumber);

    std::cout << minNumber << " " << middleNumber << " " << maxNumber << std::endl;

    return 0;
}