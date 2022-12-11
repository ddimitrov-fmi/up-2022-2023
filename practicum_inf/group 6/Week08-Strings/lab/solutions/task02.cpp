#include <iostream>
#include <cstring>

const std::size_t MAX_CAPACITY = 2049;

int main ()
{
    char sentence[MAX_CAPACITY];

    std::cin.getline(sentence, MAX_CAPACITY);

    std::size_t originalIndex = 0, newIndex = 0;

    while (sentence[originalIndex] != '\0')
    {
        if (sentence[originalIndex] != ' ' ||
        (sentence[originalIndex] == ' ' && sentence[originalIndex - 1] != ' '))
        {
            sentence[newIndex++] = sentence[originalIndex];
        }

        ++originalIndex;
    }
    sentence[newIndex] = '\0';

    std::cout << sentence << std::endl;

    return 0;
}