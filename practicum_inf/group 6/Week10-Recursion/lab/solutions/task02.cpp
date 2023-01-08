#include <iostream>

int sum(int n, int k);

int sumHelper(int n, int k, int currentSum, int i);

int main ()
{
    std::cout << sum(15, 3) << std::endl;

    return 0;
}

int sum(int n, int k)
{
    return sumHelper(n, k, 0, 1);
}

int sumHelper(int n, int k, int currentSum, int i)
{
    if (i > n)
    {
        return currentSum;
    }

    return sumHelper(n, k, currentSum + i, i + k);
}