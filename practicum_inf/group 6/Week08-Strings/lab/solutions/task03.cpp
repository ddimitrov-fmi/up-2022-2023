#include <iostream>
#include <cstring>
#include <cmath>

const std::size_t MAX_CAPACITY = 2049;

int hammingDistance(const char firstString[], const char secondString[]);

int main ()
{
    char word1[MAX_CAPACITY], word2[MAX_CAPACITY];

    std::cin >> word1 >> word2;

    std::cout << hammingDistance(word1, word2) << std::endl;

    return 0;
}

int hammingDistance(const char firstString[], const char secondString[])
{
    std::size_t size1 = strlen(firstString);
    std::size_t size2 = strlen(secondString);

    std::size_t minSize = std::min(size1, size2);
    std::size_t maxSize = std::max(size1, size2);

    std::size_t result = 0;
    for (std::size_t i = 0; i < minSize; ++i)
    {
        if (firstString[i] != secondString[i])
        {
            ++result;
        }
    }

    result += (maxSize - minSize);

    return result;
}