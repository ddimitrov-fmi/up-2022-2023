#include <iostream>
#include <cstddef>

int main ()
{
    std::size_t n;
    std::cin >> n;

    for (std::size_t i = 1; i <= n; ++i)
    {
        if (i % 2 == 1)
        {
            for (std::size_t j = 1; j <= i; j += 2)
            {
                std::cout << j << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}