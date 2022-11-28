#include <iostream>

const std::size_t MAX_CAPACITY = 1024;

void readArray(int array[], std::size_t size);

int findNumber(const int array[], std::size_t size, int x);

int findFirstNumberBiggerThan(const int array[], std::size_t size, int x);

int main ()
{
    std::size_t size;
    int array[MAX_CAPACITY];

    std::cin >> size;
    readArray(array, size);

    int x;
    std::cin >> x;

    int indexOfX = findNumber(array, size, x);
    std::cout << (indexOfX != -1) << " ";
    
    int firstBiggerThanX = findFirstNumberBiggerThan(array, size, x);
    std::cout << (firstBiggerThanX == -1 ? -1 : array[firstBiggerThanX]) << std::endl;

    return 0;
}

void readArray(int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

int findNumber(const int array[], std::size_t size, int x)
{
    std::size_t left = 0, right = size - 1, mid;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (array[mid] == x)
        {
            return mid;
        }
        else if (array[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int findFirstNumberBiggerThan(const int array[], std::size_t size, int x)
{
    std::size_t left = 0, right = size - 1, mid;
    int result = -1;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (array[mid] <= x)
        {
            left = mid + 1;
        }
        else
        {
            result = mid;
            right = mid - 1;
        }
    }

    return result;    
}