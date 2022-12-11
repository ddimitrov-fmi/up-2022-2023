#include <iostream>

int* getArray();

int main ()
{
    int* arr = getArray();

    for (std::size_t i = 0; i < 5; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}

int* getArray()
{
    // int arr[] = {1, 2, 3, 4, 5};

    int* arr = new int[5] {1, 2, 3, 4, 5}; 

    return arr;
}