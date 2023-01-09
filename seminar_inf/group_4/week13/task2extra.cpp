#include <iostream>

// With helper function
int fib(int first, int second, int next, int n, int i)
{

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (i == n)
        return second;

    return fib(second, next, second + next, n, i + 1);
}

int fibFast(int n)
{
    return fib(0, 1, 1, n, 1);
}

// Only one function
int fibFast2(int term, int val = 1, int prev = 0)
{
    if (term == 0)
        return prev;
    return fibFast2(term - 1, val + prev, val);
}

int main(int argc, char **argv)
{
    std::cout << fibFast(9) << std::endl;
    std::cout << fibFast2(10) << std::endl;
    return 0;
}
