#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    while (number != 0)
    {
        int lastDigit = number % 10;

        if (lastDigit % 2 == 0)
        {
            std::cout << lastDigit << " ";
        }

        number /= 10;
    }

    return 0;
}