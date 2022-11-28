#include <iostream>

const std::size_t MAX_CAPACITY = 1024;

void readArray(int array[], std::size_t size);

void insertInSorted(int array[], std::size_t size, int x);

void insertionSort(int array[], std::size_t size);

int main ()
{
    std::size_t dogsCount;
    int snackCounts[MAX_CAPACITY];

    std::cin >> dogsCount;
    readArray(snackCounts, dogsCount);

    insertionSort(snackCounts, dogsCount);

    return 0;
}

void readArray(int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

void insertInSorted(int array[], std::size_t size, int x)
{
    std::size_t i = size;
    std::size_t counter = 0;

    while (i > 0 && array[i-1] > x)
    {
        ++counter;
        array[i] = array[i-1];
        --i;
    }
    array[i] = x;

    std::cout << counter << " ";
}

void insertionSort(int array[], std::size_t size)
{
    std::cout << "0 "; // the first element is in its place

    for (std::size_t i = 1; i < size; ++i)
    {
        insertInSorted(array, i, array[i]);
    }

    std::cout << std::endl;
}