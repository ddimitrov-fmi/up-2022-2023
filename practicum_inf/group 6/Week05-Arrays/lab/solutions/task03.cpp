#include <iostream>

const std::size_t MAX_CAPACITY = 100;

void input(int array[], std::size_t size);

void rightShift(int array[], std::size_t size);

void rightShiftBy(int array[], std::size_t size, std::size_t positions);

void print(const int array[], std::size_t size);

int main ()
{
    std::size_t n, positions;
    int array[MAX_CAPACITY];

    std::cin >> n;
    input(array, n);
    std::cin >> positions;

    positions %= n;
    rightShiftBy(array, n, positions);

    print(array, n);

    return 0;
}

void input(int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

void rightShift(int array[], std::size_t size)
{
    int lastElement = array[size - 1];

    for (std::size_t i = size - 1; i > 0; --i)
    {
        array[i] = array[i - 1];
    }

    array[0] = lastElement;
}

void rightShiftBy(int array[], std::size_t size, std::size_t positions)
{
    for (std::size_t i = 0; i < positions; ++i)
    {
        rightShift(array, size);
    }
}

void print(const int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}