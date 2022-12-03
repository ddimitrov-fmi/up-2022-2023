#include <iostream>

int* createArray(std::size_t size);

void readArray(int* array, std::size_t size);

void printArray(const int* array, std::size_t size);

int main ()
{
    std::size_t n;

    std::cin >> n;

    int* array = createArray(n);
    if (!array)
    {
        std::cout << "Memory problem!" << std::endl;
        return 1;
    }

    readArray(array, n);

    printArray(array, n);

    delete[] array;

    return 0;
}

int* createArray(std::size_t size)
{
    int* result = new (std::nothrow) int[size];
    if (!result)
    {
        return nullptr;
    }

    return result;
}

void readArray(int* array, std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

void printArray(const int* array, std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}