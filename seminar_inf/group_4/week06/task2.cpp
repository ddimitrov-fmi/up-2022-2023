#include <iostream>
bool isInteresting(int a)
{
    int digits = 0;
    int copyOfA = a;
    while (copyOfA != 0)
    {
        copyOfA /= 10;
        digits++;
    }
    bool b = true;
    for (size_t i = 0; i < digits; i++)
    {
        if (a % 10 > a / 10 % 10)
        {
            a /= 10;
        }
        else
        {
            b = false;
        }
    }
    return b;
}
int main(int argc, char **argv)
{
    int array[100];
    int n;
    std::cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (isInteresting(array[i]))
        {
            std::cout << "YES";
        } else {
            std::cout << "NO";
        }
    }

    return 0;
}
