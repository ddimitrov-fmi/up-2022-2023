#include <iostream>

const std::size_t MAX_CAPACITY = 1024;

const int* findMaxElement(const int* array, std::size_t size);

int main ()
{
    std::size_t size;
    int array[MAX_CAPACITY];

    std::cin >> size;
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }

    const int* maxElement = findMaxElement(array, size);

    if (!maxElement) // maxElemeent == nullptr
    {
        std::cout << "Empty array" << std::endl;
    }
    else
    {
        std::cout << *maxElement << std::endl;
    }
}

const int* findMaxElement(const int* array, std::size_t size) 
{
    if (array == nullptr || size == 0)
    {
        return nullptr;
    }

    const int* max = array;
    for (std::size_t i = 1; i < size; ++i)
    {
        if (array[i] > *max)
        {
            max = array + i;
        }
    }

    return max;
}