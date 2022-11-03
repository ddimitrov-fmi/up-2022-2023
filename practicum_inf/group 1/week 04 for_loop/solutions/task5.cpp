#include <iostream>

int main()
{
    bool onlyEven;
    int num;

    for (int i = 1000; i < 100000; i++)
    {
        num = i;
        onlyEven = true;
        while (num != 0)
        {
            if ((num % 10) % 2 != 0)
            {
                onlyEven = false;
                break;
            }
            num /= 10;
        }

        if (onlyEven)
        {
            std::cout << i << std::endl;
        }
    }

    return 0;
}