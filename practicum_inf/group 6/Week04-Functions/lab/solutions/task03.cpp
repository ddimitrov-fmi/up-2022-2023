#include <iostream>

bool hasNeighboringIdenticalDigits(int number);

int main ()
{
    int a, b;

    std::cin >> a >> b;

    for (std::size_t i = a; i <= b; ++i)
    {
        if (hasNeighboringIdenticalDigits(i))
        {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}

bool hasNeighboringIdenticalDigits(int number)
{
    int lastDigit = number % 10;
    number /= 10;

    int previousDigit = lastDigit;
    while (number)
    {
        int currentDigit = number % 10;
        number /= 10;

        if (currentDigit == previousDigit)
        {
            return true;
        }

        previousDigit = currentDigit;
    }

    return false;
}