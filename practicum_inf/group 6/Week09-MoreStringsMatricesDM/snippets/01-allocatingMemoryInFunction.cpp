#include <iostream>

std::size_t allocateArray(int* array);

int main ()
{
    int* array;

    std::size_t size = allocateArray(array);

    for (std::size_t i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    delete[] array;

    return 0;
}

std::size_t allocateArray(int* array)
{
    std::size_t size;
    std::cin >> size;

    array = new (std::nothrow) int[size];
    if (!array)
    {
        return 0;
    }

    for (std::size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }

    return size;
}