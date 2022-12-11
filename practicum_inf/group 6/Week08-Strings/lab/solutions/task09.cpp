#include <iostream>
#include <cstring>

const std::size_t MAX_CAPACITY = 2049;

void replace(char sentence[], const char w1[], const char w2[]);

bool containsAt(const char sentence[], const char word[], std::size_t index);

void swap(char str1[], char str2[]);

int main ()
{
    char sentence[MAX_CAPACITY], w1[MAX_CAPACITY], w2[MAX_CAPACITY];

    std::cin.getline(sentence, MAX_CAPACITY);
    std::cin >> w1 >> w2;

    replace(sentence, w1, w2);

    std::cout << sentence << std::endl;

    return 0;
}

void replace(char sentence[], const char w1[], const char w2[])
{
    char newSentence[MAX_CAPACITY];

    std::size_t originalIndex = 0, newIndex = 0;
    std::size_t word1Size = strlen(w1), word2Size = strlen(w2);

    while (sentence[originalIndex] != '\0')
    {
        if (containsAt(sentence, w1, originalIndex))
        {
            for (std::size_t i = 0; i < word2Size; ++i)
            {
                newSentence[newIndex++] = w2[i];
            }

            originalIndex += word1Size;
        }
        else
        {
            newSentence[newIndex++] = sentence[originalIndex++];
        }
    }

    newSentence[newIndex] = '\0';

    swap(sentence, newSentence);
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

void swap(char str1[], char str2[])
{
    char temp[MAX_CAPACITY];

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}