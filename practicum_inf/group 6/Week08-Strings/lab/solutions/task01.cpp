#include <iostream>
#include <cstring>

const std::size_t MAX_CAPACITY = 2049;

int main ()
{
    char sentence[MAX_CAPACITY];

    std::cin.getline(sentence, MAX_CAPACITY);

    std::size_t i = 0, counter = 0;
    while (sentence[i] != '\0')
    {
        if (sentence[i] == ' ' && sentence[i + 1] != ' ')
        {
            ++counter;
        }
        ++i;
    }

    std::cout << counter + 1 << std::endl; // the words are the count of spaces + 1

    return 0;
}