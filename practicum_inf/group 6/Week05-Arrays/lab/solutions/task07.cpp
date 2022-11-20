#include <iostream>

const std::size_t MAX_CAPACITY = 100;

void input(int array[], std::size_t size);

void findPairs(const int array[], std::size_t size, int sum);

int main ()
{
    std::size_t n;
    int m;
    int array[MAX_CAPACITY];

    std::cin >> n;
    input(array, n);
    std::cin >> m;

    findPairs(array, n, m);

    return 0;
}

void input(int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

void findPairs(const int array[], std::size_t size, int sum)
{
    for (std::size_t i = 0; i < size - 1; ++i)
    {
        for (std::size_t j = i + 1; j < size; ++j)
        {
            if (array[i] + array[j] == sum)
            {
                std::cout << "(" << array[i] << ", " << array[j] << ") "; 
            }
        }
    }
    std::cout << std::endl;
}