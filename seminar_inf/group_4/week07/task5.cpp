#include <iostream>

int *pointerOfElement(int array[], unsigned int size, int element)
{
    for (size_t i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return array + i;
        }
    }
    return nullptr;
}

int main(int argc, char **argv)
{
    int arr[] = {1, 2, 3, 4, 5};

    std::cout << "Pointer to first: " << arr << std::endl;
    int *ptr = pointerOfElement(arr, 5, 4);
    std::cout << ptr << std::endl;

    std::cout << "Element before change: " << *ptr << std::endl;
    *ptr *= 10;
    std::cout << "Element after change: " << *ptr << std::endl;

    return 0;
}
