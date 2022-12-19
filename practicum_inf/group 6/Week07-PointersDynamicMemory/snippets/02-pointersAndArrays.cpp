#include <iostream>

void printArray(const int* array, std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main ()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int* ptr = arr;

    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;

    ++ptr;
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;

    ptr += 2;
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;

    printArray(arr, 5);
    
    return 0;
}