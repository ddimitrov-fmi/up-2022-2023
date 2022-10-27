#include <iostream>
#include <cmath>

int main()
{
    int number;
    bool isPrime = true;
    std::cin >> number;
    double sqrtResult = sqrt(number);

    for (int i = 2; i <= sqrtResult; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        std::cout << "Number is prime!\n";
    }
    else
    {
        std::cout << "Number is not prime!\n";
    }

    return 0;
}