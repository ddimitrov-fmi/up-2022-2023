#include <iostream>

int findMin(int *begin, int *end)
{
    if (begin == end)
    {
        return *begin;
    }

    int min = findMin(begin + 1, end);
    if (*begin < min)
    {
        return *begin;
    }
    return min;
}

int main(int argc, char **argv)
{
    int a[] = {1, -2, 3, 0, 5, -6, 7};
    std::cout << findMin(a, a + 6) << std::endl;
    return 0;
}
