#include <iostream>

const std::size_t MAX_CAPACITY = 100;

void input(int array[], std::size_t size);

void reverseWithSecondArray(int array[], std::size_t size);

void reverseWithoutSecondArray(int array[], std::size_t size);

void print(const int array[], std::size_t size);

int main ()
{
    std::size_t n;
    int array[MAX_CAPACITY];

    std::cin >> n;
    input(array, n);

    reverseWithSecondArray(array, n);
    print(array, n);

    reverseWithoutSecondArray(array, n);
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

void print(const int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void reverseWithSecondArray(int array[], std::size_t size)
{
    int secondArray[MAX_CAPACITY];

    for (std::size_t i = 0; i < size; ++i)
    {
        secondArray[i] = array[size - 1 - i];
    }

    for (std::size_t i = 0; i < size; ++i)
    {
        array[i] = secondArray[i];
    }
}

void reverseWithoutSecondArray(int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size / 2; ++i)
    {
        std::swap(array[i], array[size - 1 - i]);
    }
}