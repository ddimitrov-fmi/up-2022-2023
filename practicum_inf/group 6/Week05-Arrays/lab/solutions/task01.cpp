#include <iostream>

const std::size_t MAX_CAPACITY = 100;

void input(int array[], std::size_t size);

int sum(const int array[], std::size_t size);

int main ()
{
    std::size_t n;
    int array[MAX_CAPACITY];

    std::cin >> n;

    input(array, n);
    int sumOfElements = sum(array, n);

    std::cout << (double) sumOfElements / n << std::endl;

    return 0;
}

void input(int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

int sum(const int array[], std::size_t size)
{
    int sum = 0;
    for (std::size_t i = 0; i < size; ++i)
    {
        sum += array[i];
    }

    return sum;
}