#include <iostream>

/*
При въведено число n отпечатайте ромб, съставен от числата до n включително.

Вход 1: 3
Изход 1:
    1
  1 2 1
1 2 3 2 1
  1 2 1
    1

Вход 2: 5
Изход 2:
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
  1 2 3 4 3 2 1
    1 2 3 2 1
      1 2 1
        1
*/

int main ()
{
    int n;

    std::cin >> n;

    for (std::size_t i = 1; i <= n; ++i)
    {
        for (std::size_t j = 1; j <= (n - i) * 2; ++j)
        {
            std::cout << " ";
        }

        for (std::size_t j = 1; j <= i; ++j)
        {
            std::cout << j << " ";
        }

        for (std::size_t j = i - 1; j >= 1; --j)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    for (std::size_t i = n - 1; i >= 1; --i)
    {
        for (std::size_t j = 1; j <= (n - i) * 2; ++j)
        {
            std::cout << " ";
        }

        for (std::size_t j = 1; j <= i; ++j)
        {
            std::cout << j << " ";
        }

        for (std::size_t j = i - 1; j >= 1; --j)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}