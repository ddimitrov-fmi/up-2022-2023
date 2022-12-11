#include <iostream>
#include <cstring>
#include <cmath>

const std::size_t MAX_CAPACITY = 2049;

bool containsAt(const char sentence[], const char word[], std::size_t index);

int main ()
{
    char sentence[MAX_CAPACITY], word[MAX_CAPACITY];

    std::cin.getline(sentence, MAX_CAPACITY);
    std::cin >> word;

    std::size_t wordLength = strlen(word);

    std::size_t originalIndex = 0, newIndex = 0;

    while (sentence[originalIndex] != '\0')
    {
        if (containsAt(sentence, word, originalIndex))
        {
            originalIndex += wordLength;
        }
        else
        {
            sentence[newIndex++] = sentence[originalIndex++];
        }
    }
    sentence[newIndex] = '\0';

    std::cout << sentence << std::endl;

    return 0;
}

bool containsAt(const char sentence[], const char word[], std::size_t index)
{
    std::size_t indexSentence = index, indexWord = 0;

    while (sentence[indexSentence] != '\0' && word[indexWord] != '\0')
    {
        if (sentence[indexSentence] != word[indexWord])
        {
            return false;
        }

        ++indexSentence;
        ++indexWord;
    }

    return word[indexWord] == '\0';
}