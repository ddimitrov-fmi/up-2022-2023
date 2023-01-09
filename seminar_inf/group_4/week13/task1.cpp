#include <iostream>

void printArray(int arr[], std::size_t size)
{
    if (size == 0)
    {
        return;
    }
    std::cout << *arr << std::endl;
    printArray(arr + 1, size - 1);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    printArray(a, 7);
    return 0;
}
