#include <iostream>

double power(double x, unsigned int n);

int main ()
{
    std::cout << power(2, 5) << std::endl;

    return 0;
}

double power(double x, unsigned int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n == 1)
    {
        return x;
    }

    return x * power(x, n - 1);
}