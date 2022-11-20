#include <iostream>

const std::size_t MAX_CAPACITY = 100;

void input(int array[], std::size_t size);

bool allElementsAreEqual(const int array[], std::size_t size);

int getSecondMax(const int array[], std::size_t size);

int main ()
{
    std::size_t n;
    int array[MAX_CAPACITY];

    std::cin >> n;
    if (n < 2)
    {
        std::cout << "The array should have at least two elements" << std::endl;
        return 1;
    }

    input(array, n);

    if (allElementsAreEqual(array, n))
    {
        std::cout << "The array should contain at least 2 different elements" << std::endl;
        return 1;
    }
    
    std::cout << getSecondMax(array, n) << std::endl;

    return 0;
}

void input(int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

bool allElementsAreEqual(const int array[], std::size_t size)
{
    int element = array[0];

    for (std::size_t i = 1; i < size; ++i)
    {
        if (array[i] != element)
        {
            return false;
        }
    }

    return true;
}

int getSecondMax(const int array[], std::size_t size)
{
    std::size_t maxIndex = 0, secondMaxIndex = -1;

    for (std::size_t i = 1; i < size; ++i)
    {
        if (array[i] > array[maxIndex])
        {
            secondMaxIndex = maxIndex;
            maxIndex = i;
        }
        if (array[i] < array[maxIndex] && 
            (secondMaxIndex == -1 || array[i] > array[secondMaxIndex]))
        {
            secondMaxIndex = i;
        }
    }

    return array[secondMaxIndex];
}