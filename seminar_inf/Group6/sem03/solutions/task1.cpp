#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    for (int i = 1; i <= number; ++i)
    {
        if (number % i == 0)
        {
            std::cout << i << " ";
        }
    }

    return 0;
}