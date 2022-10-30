#include <iostream>

// 1.5) 1! + 2! + 3! + ... + n!

int main ()
{
    std::size_t n;

    std::cin >> n;

    int sum = 0;
    int factorial = 1;

    for (std::size_t i = 1; i <= n; ++i)
    {
        factorial *= i;
        sum += factorial;
    }

    std::cout << sum << std::endl;

    return 0;
}