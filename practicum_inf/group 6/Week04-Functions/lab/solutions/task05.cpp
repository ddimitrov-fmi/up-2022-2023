#include <iostream>

int getNumberOfZeroes(int number);

int main ()
{
    int n;
    std::cin >> n;

    int firstNumber;
    std::cin >> firstNumber;

    int maxZeroes = getNumberOfZeroes(firstNumber);
    int numberWithMostZeroes = firstNumber;

    for (std::size_t i = 1; i < n; ++i)
    {
        int temp;
        std::cin >> temp;

        int currentZeroes = getNumberOfZeroes(temp);
        if (currentZeroes > maxZeroes)
        {
            numberWithMostZeroes = temp;
            maxZeroes = currentZeroes;
        }
    }

    std::cout << numberWithMostZeroes << " " << maxZeroes << std::endl;

    return 0;
}

int getNumberOfZeroes(int number)
{
    int counter = 0;

    while (number)
    {
        int lastDigit = number % 10;
        if (lastDigit == 0) 
        {
            ++counter;
        }

        number /= 10;
    }

    return counter;
}