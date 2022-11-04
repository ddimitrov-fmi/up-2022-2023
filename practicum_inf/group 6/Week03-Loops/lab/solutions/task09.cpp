#include <iostream>


int main()
{
    int n;
    std::cin >> n;

    int offset = n-1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < offset; ++j)
        {
            std::cout << "  ";
        }
        --offset;

        int rowElems = 2 * i + 1;
        for (int j = 0; j < rowElems; ++j)
        {
            if (j <= rowElems / 2)
            {
                std::cout << j+1 << ' ';
            }
            else
            {
                std::cout << (i + 1 - (j + 1) % (i + 1)) << ' ';
            }
        }
        std::cout << '\n';
    }

    offset = 1;
    for (int i = n - 2; i >= 0; --i)
    {
        for (int j = 0; j < offset; ++j)
        {
            std::cout << "  ";
        }
        ++offset;

        int rowElems = 2 * i + 1;
        for (int j = 0; j < rowElems; ++j)
        {
            if (j <= rowElems / 2)
            {
                std::cout << j+1 << ' ';
            }
            else
            {
                std::cout << (i + 1 - (j + 1) % (i + 1)) << ' ';
            }
        }
        std::cout << '\n';
    }

    return 0;
}