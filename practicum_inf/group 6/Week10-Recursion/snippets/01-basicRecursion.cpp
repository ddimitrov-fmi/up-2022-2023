#include <iostream>

typedef unsigned long long ULL;

ULL factorial(unsigned int n);

ULL fibonacci(unsigned int n);

ULL fibonacciOptimized(unsigned int n, ULL fib1, ULL fib2); // helper for the function below

ULL fibonacciOptimized(unsigned int n);

int main ()
{
    std::cout << factorial(5) << std::endl;

    std::cout << fibonacciOptimized(1000000) << std::endl;
    //std::cout << fibonacci(46) << std::endl;

    return 0;
}

ULL factorial(unsigned int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

ULL fibonacci(unsigned int n)
{
    if (n < 2)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

ULL fibonacciOptimized(unsigned int n, ULL fib1, ULL fib2) // helper
{
    if (n == 0)
    {
        return fib1;
    }

    return fibonacciOptimized(n - 1, fib1 + fib2, fib1);
}

ULL fibonacciOptimized(unsigned int n)
{
    return fibonacciOptimized(n, 1, 0);
}