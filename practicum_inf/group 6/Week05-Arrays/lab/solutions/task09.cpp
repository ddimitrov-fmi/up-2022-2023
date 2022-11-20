#include <iostream>

const std::size_t MAX_CAPACITY = 100;

void input(int array[], std::size_t size);

void findLongestIncreasingSubsequence(const int array[], std::size_t size);

std::size_t getLengthOfIncreasingSubsequenceFrom(const int array[], std::size_t size, std::size_t startIndex);

int main ()
{
    std::size_t n;
    int array[MAX_CAPACITY];

    std::cin >> n;
    input(array, n);

    findLongestIncreasingSubsequence(array, n);

    return 0;
}

void input(int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

void findLongestIncreasingSubsequence(const int array[], std::size_t size)
{
    std::size_t maxLength = 1;
    std::size_t bestStartIndex = 0;

    for (std::size_t i = 0; i < size; ++i)
    {
        std::size_t currentLength = getLengthOfIncreasingSubsequenceFrom(array, size, i);
        if (currentLength > maxLength)
        {
            maxLength = currentLength;
            bestStartIndex = i;
            i += currentLength - 1;
        }
    }

    for (std::size_t i = bestStartIndex; i < bestStartIndex + maxLength; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

std::size_t getLengthOfIncreasingSubsequenceFrom(const int array[], std::size_t size, std::size_t startIndex)
{
    std::size_t counter = 1;

    std::size_t i = startIndex + 1;
    while (i < size && array[i] > array[i - 1])
    {
        ++counter;
        ++i;
    }
    
    return counter;
}