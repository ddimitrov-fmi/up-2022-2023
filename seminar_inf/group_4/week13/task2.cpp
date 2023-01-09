#include <iostream>

unsigned fib(unsigned n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main(int argc, char **argv)
{
    std::cout << fib(10) << std::endl;
    return 0;
}
