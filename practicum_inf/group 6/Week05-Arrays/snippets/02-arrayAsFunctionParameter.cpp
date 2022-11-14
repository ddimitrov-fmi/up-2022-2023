#include <iostream>

const std::size_t MAX_ARRAY_CAPACITY = 1000;

void inputArray(int array[], std::size_t size);

void doubleAllElements(int array[], std::size_t size);

void printArray(const int array[], std::size_t size);

int main ()
{
    int array[MAX_ARRAY_CAPACITY];

    std::size_t arraySize;
    std::cin >> arraySize;

    inputArray(array, arraySize);
    printArray(array, arraySize);
    doubleAllElements(array, arraySize);
    printArray(array, arraySize);

    return 0;
}

void inputArray(int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

void doubleAllElements(int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        array[i] *= 2;
    }
}

void printArray(const int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}