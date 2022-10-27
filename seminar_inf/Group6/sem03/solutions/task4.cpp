#include <iostream>
#include <cmath>

int main()
{
    int number;
    std::cin >> number;

    do
    {
        bool isPrime = true;
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
            std::cout << "Number " << number << " is prime!\n";
        }

        number++;
    } while (number < 100);

    return 0;
}