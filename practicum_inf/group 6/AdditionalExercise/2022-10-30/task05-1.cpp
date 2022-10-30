#include <iostream>

// 1.5) 1! + 2! + 3! + ... + n!

int main ()
{
    std::size_t n;

    std::cin >> n;

    unsigned long long sum = 0;
    for (std::size_t i = 1; i <= n; ++i)
    {
        int factorial = 1;
        for (std::size_t j = 1; j <= i; ++j)
        {
            factorial *= j;
        }

        sum += factorial;
    }

    std::cout << sum << std::endl;

    return 0;
}