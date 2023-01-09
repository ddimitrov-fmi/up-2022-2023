#include <iostream>
using namespace std;

int sum1(int i, int n, int k)
{
    if (i > n)
    {
        return 0;
    }

    return i + sum1(i + k, n, k);
}

int sum2(int n, int k)
{
    return sum1(1, n, k); // Use sum1 as a helper function
}

// With global variable
int currentNum = 1;
int sum3(int n, int k)
{
    if (currentNum > n)
    {
        return 0;
    }

    int tempNum = currentNum;
    currentNum += k;
    return tempNum + sum3(n, k);
}

int main(int argc, char **argv)
{
    unsigned n = 11;
    unsigned k = 3;
    unsigned i = 1;

    cout << sum1(i, n, k) << std::endl;
    cout << sum2(n, k) << std::endl;
    cout << sum3(n, k) << std::endl;
    return 0;
}
