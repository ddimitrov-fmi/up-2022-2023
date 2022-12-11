#include <iostream>
#include <cstring>
#include <cmath>

const std::size_t MAX_CAPACITY = 2049;

int main ()
{
    char word1[MAX_CAPACITY], word2[MAX_CAPACITY];

    std::cin >> word1 >> word2;

    int word1Index = -1;
    int word2Index = -1;

    std::size_t size1 = strlen(word1);
    std::size_t size2 = strlen(word2);

    for (std::size_t i = 0; i < size1; ++i)
    {
        bool toBreak = false;
        for (std::size_t j = 0; j < size2; ++j)
        {
            if (word1[i] == word2[j])
            {
                toBreak = true;
                word1Index = i;
                word2Index = j;
                break;
            }
        }

        if (toBreak)
        {
            break;
        }
    }

    for (std::size_t i = 0; i < size2; ++i)
    {
        if (i != word2Index)
        {
            for (std::size_t j = 0; j < size1; ++j)
            {
                std::cout << (j == word1Index ? word2[i] : ' ');
            }
        }
        else
        {
            std::cout << word1;
        }

        std::cout << std::endl;
    }

    return 0;
}