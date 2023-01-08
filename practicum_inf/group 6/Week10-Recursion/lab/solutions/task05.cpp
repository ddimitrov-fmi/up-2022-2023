#include <iostream>

const int* min(const int* array, std::size_t size);

const int* minHelper(const int* array, std::size_t size, const int* minSoFar);

int main ()
{
    int arr[] = {5, 4, 1, 2, 3};

    std::cout << *min(arr, 5) << std::endl;

    return 0;
}

const int* min(const int* array, std::size_t size)
{
    if (size == 0)
    {
        return nullptr;
    }

    return minHelper(array + 1, size - 1, array);
}

const int* minHelper(const int* array, std::size_t size, const int* minSoFar)
{
    if (size == 0)
    {
        return minSoFar;
    }

    const int* newMin = (*array < *minSoFar) ? array : minSoFar;

    return minHelper(array + 1, size - 1, newMin);
}