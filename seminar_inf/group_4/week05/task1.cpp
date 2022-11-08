#include <iostream>

int factorial(int n)
{
    if (n <= 0)
    {
        return 1;
    }

    int result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

int main(int argc, char **argv)
{
    std::cout << factorial(5) << std::endl;
    return 0;
}
