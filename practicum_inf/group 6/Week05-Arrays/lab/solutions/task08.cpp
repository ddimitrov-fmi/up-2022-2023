#include <iostream>

const std::size_t MAX_CAPACITY = 100;

void input(int array[], std::size_t size);

std::size_t getNumberOfOccurrences(const int array[], std::size_t size,
    int numberToSearch, int& firstOccurrence, int& lastOccurence);

int main ()
{
    std::size_t n;
    int number;
    int array[MAX_CAPACITY];

    std::cin >> n;
    input(array, n);
    std::cin >> number;

    int firstOccurrence = -1, lastOccurrence =-1;
    std::size_t numberOfOccurrences = getNumberOfOccurrences(array, 
        n, number, firstOccurrence, lastOccurrence);

    std::cout << "Number of occurrences: " << numberOfOccurrences << std::endl;
    std::cout << "First occurrence at index: " << firstOccurrence << std::endl;
    std::cout << "Last occurrence at index: " << lastOccurrence << std::endl;

    return 0;
}

void input(int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

std::size_t getNumberOfOccurrences(const int array[], std::size_t size,
    int numberToSearch, int& firstOccurrence, int& lastOccurence)
{
    int counter = 0;

    for (std::size_t i = 0; i < size; ++i)
    {
        if (array[i] == numberToSearch)
        {
            firstOccurrence = lastOccurence = i;
            ++counter;
            break;
        }
    }

    for (std::size_t i = firstOccurrence + 1; i < size; ++i)
    {
        if (array[i] == numberToSearch)
        {
            lastOccurence = i;
            ++counter;
        }
    }

    return counter;
}