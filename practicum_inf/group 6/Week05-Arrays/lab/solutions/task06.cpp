#include <iostream>

const std::size_t MAX_CAPACITY = 100;

void input(int array[], std::size_t size);

int getMostCommonNumber(const int array[], std::size_t size, std::size_t& numberOfOccurrences);

int main ()
{
    std::size_t n;
    int array[MAX_CAPACITY];

    std::cin >> n;

    input(array, n);

    std::size_t numberOfOccurrences;
    std::cout << getMostCommonNumber(array, n, numberOfOccurrences) << std::endl;
    std::cout << numberOfOccurrences << " times" << std::endl;


    return 0;
}

void input(int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

int getMostCommonNumber(const int array[], std::size_t size, std::size_t& numberOfOccurrences){
    std::size_t maxOccurrences = 1;
    std::size_t bestIndex;

    for (std::size_t i = 0; i < size; ++i)
    {
        std::size_t currentOccurrences = 1;
        for (std::size_t j = i + 1; j < size; ++j)
        {
            if (array[i] == array[j])
            {
                ++currentOccurrences;
            }
        }

        if (currentOccurrences > maxOccurrences)
        {
            maxOccurrences = currentOccurrences;
            bestIndex = i;
        }
    }

    numberOfOccurrences = maxOccurrences;

    return array[bestIndex];
}