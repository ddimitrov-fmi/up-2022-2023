#include <iostream>


int main()
{
    int iterations;
    std::cin >> iterations;
    if (iterations % 2 == 0)
    {
        return 1;
    }

    int spaces = iterations - 2, offset = 0;
    for (int i = 0; i < iterations; ++i)
    {
        for (int i = 0; i < offset; ++i)
        {
            std::cout << ' ';
        }

        if (i < iterations / 2)
        {
            offset += 2;
        }
        else
        {
            offset -= 2;
        }

        for (int j = 0; j < 3 - (2 * (i == iterations / 2)); ++j)
        {
            std::cout << '*';
            for (int i = 0; i < spaces; ++i)
            {
                std::cout << ' ';
            }
        }
        std::cout << '\n';

        if (i < iterations / 2)
        {
            spaces -= 2;
        }
        else
        {
            spaces += 2;
        }
    }

    return 0;
}