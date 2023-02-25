#include <iostream>
#include <cstring>

const std::size_t MAX_TEXT_CAPACITY = 2 * 1024 * 1024;
const std::size_t MAX_WORD_CAPACITY = 30;
const std::size_t MAX_WORDS_COUNT = 2000;

char toLower(char ch);

bool isLetter(char ch);

void extractWords(const char* text, char words[][MAX_WORDS_COUNT], int* counters, std::size_t& allWords, std::size_t& distinctWords);

int getIndexOf(char words[][MAX_WORDS_COUNT], std::size_t wordsCount, const char* wordToFind);

std::size_t getMinFrom(char words[][MAX_WORDS_COUNT], const int* counters, std::size_t from, std::size_t to);

void sort(char words[][MAX_WORDS_COUNT], int* counters, std::size_t wordsCount);

void swap(char* str1, char* str2);

int main ()
{
    static char text[MAX_TEXT_CAPACITY + 1];
    std::cin.getline(text, MAX_TEXT_CAPACITY, '$');

    char words[MAX_WORD_CAPACITY + 1][MAX_WORDS_COUNT];
    int counters[MAX_WORDS_COUNT];
    std::size_t allWords, distinctWords;

    std::cout << text << std::endl;

    extractWords(text, words, counters, allWords, distinctWords);
    sort(words, counters, distinctWords);

    std::cout << "All - " << allWords << std::endl;
    std::cout << "Distinct - " << distinctWords << std::endl;
    for (std::size_t i = 0; i < distinctWords; ++i)
    {
        std::cout << words[i] << " - " << counters[i] << std::endl;
    }

    return 0;
}

char toLower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + ('a' - 'A');
    }
    return ch;
}

bool isLetter(char ch)
{
    return (ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z') ||
           (ch == '-') || (ch == '\'');
}

void extractWords(const char* text, char words[][MAX_WORDS_COUNT], int* counters, std::size_t& allWords, std::size_t& distinctWords)
{
    allWords = 0;
    distinctWords = 0;

    while (*text)
    {
        while (*text && !isLetter(*text))
        {
            ++text;
        }

        if (!(*text))
        {
            break;
        }

        const char* start = text;
        while (isLetter(*text))
        {
            ++text;
        }

        std::size_t currentSize = text - start;
        char currentWord[MAX_WORD_CAPACITY + 1];

        for (std::size_t i = 0; i < currentSize; ++i)
        {
            currentWord[i] = toLower(start[i]);
        }
        currentWord[currentSize] = '\0';

        int index = getIndexOf(words, distinctWords, currentWord);
        if (index == -1)
        {
            stpcpy(words[distinctWords], currentWord);
            counters[distinctWords] = 1;
            ++distinctWords;
        }
        else
        {
            ++counters[index];
        }
        ++allWords;
    }
}

int getIndexOf(char words[][MAX_WORDS_COUNT], std::size_t wordsCount, const char* wordToFind)
{
    for (std::size_t i = 0; i < wordsCount; ++i)
    {
        if (strcmp(words[i], wordToFind) == 0)
        {
            return i;
        }
    }

    return -1;
}

std::size_t getMaxFrom(char words[][MAX_WORDS_COUNT], const int* counters, std::size_t from, std::size_t to)
{
    std::size_t max = from;

    for (std::size_t i = from + 1; i < to; ++i)
    {
        if (counters[i] > counters[max] || 
            (counters[i] == counters[max] && strcmp(words[i], words[max]) > 0))
        {
            max = i;
        }
    }

    return max;
}

void swap(char* str1, char* str2)
{
    char temp[MAX_WORD_CAPACITY + 1];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

void sort(char words[][MAX_WORDS_COUNT], int* counters, std::size_t wordsCount)
{
    for (std::size_t i = 0; i < wordsCount - 1; ++i)
    {
        std::size_t currentMax = getMaxFrom(words, counters, i, wordsCount);

        swap(words[i], words[currentMax]);
        std::swap(counters[i], counters[currentMax]);
    }
}