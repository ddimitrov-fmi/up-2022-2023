#include <iostream>

const std::size_t MAX_CAPACITY = 1024;

void readArray(int array[], std::size_t size);

std::size_t minFrom(int array[], unsigned from, unsigned to);

void selectionSort(int array[], std::size_t size);

int main ()
{
    std::size_t bagsCount;
    int bagWeights[MAX_CAPACITY];

    std::cin >> bagsCount;
    readArray(bagWeights, bagsCount);

    selectionSort(bagWeights, bagsCount);

    return 0;
}

std::size_t minFrom(int array[], std::size_t from, std::size_t to)
{
    std::size_t min = from;
    for (std::size_t i = from + 1; i < to; ++i)
    {
        if (array[i] < array[min])
        {
            min = i;
        }
    }
    return min;
}

void readArray(int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

void selectionSort(int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size - 1; ++i)
    {
        int minIndex = minFrom(array, i, size);
        if (array[i] > array[minIndex])
        {
            std::cout << array[i] << " " << array[minIndex] << std::endl;
        }
        std::swap(array[i], array[minIndex]);
    } 
}