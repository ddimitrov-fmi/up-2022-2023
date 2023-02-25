#include <iostream>
#include <cstring>

const std::size_t MAX_WORD_SIZE = 100;

bool readDictionary(char**& plainWords, char**& cryptedWords, std::size_t& n);

void deallocateWords(char** words, size_t n);

char* readText(std::size_t& m);

bool strCmpCaseInsesitive(const char* word1, const char* word2);

char toLower(char ch);

bool isLetter(char ch);

bool getSizeDifference(char** plainWords, char** cryptedWords, std::size_t n, char* text, std::size_t m, int& sizeDifference);

char* findInDictionary(char* word, char** plainWords, char** cryptedWords, std::size_t n);

char* translate(char** plainWords, char** cryptedWords, std::size_t n, char* text, std::size_t m, int sizeDifference);

int main ()
{
    std::size_t n;

    char** plainWords;
    char** cryptedWords;

    bool validDictionary = readDictionary(plainWords, cryptedWords, n);

    if (!validDictionary)
    {
        std::cout << "Memory problem!" << std::endl;
        return 1;
    }

    std::size_t m;
    char* text = readText(m);
    if (!text)
    {
        std::cout << "Memory problem!" << std::endl;
        deallocateWords(plainWords, n);
        deallocateWords(cryptedWords, n);
        return 1;
    }

    int sizeDifference;
    bool sizeDifferenceValid = getSizeDifference(plainWords, cryptedWords, n, text, m, sizeDifference);
    if (!sizeDifferenceValid)
    {
        std::cout << "Memory problem!" << std::endl;
        deallocateWords(plainWords, n);
        deallocateWords(cryptedWords, n);
        return 1;
    }

    char* newText = translate(plainWords, cryptedWords, n, text, m, sizeDifference);
    if (!newText)
    {
        std::cout << "Memory problem!" << std::endl;
        deallocateWords(plainWords, n);
        deallocateWords(cryptedWords, n);
        return 1;
    }

    std::cout << newText << std::endl;

    deallocateWords(plainWords, n);
    deallocateWords(cryptedWords, n);
    delete[] text;
    delete[] newText;

    return 0;
}

bool readDictionary(char**& plainWords, char**& cryptedWords, std::size_t& n)
{
    std::cin >> n;

    plainWords = new (std::nothrow) char*[n];
    if (!plainWords)
    {

        return false;
    }

    cryptedWords = new (std::nothrow) char*[n];
    if (!cryptedWords)
    {
        deallocateWords(plainWords, n);
        return false;
    }

    for (std::size_t i = 0; i < n; ++i)
    {
        char buffer[MAX_WORD_SIZE + 1];
        std::cin >> buffer;

        plainWords[i] = new (std::nothrow) char[strlen(buffer) + 1];
        if (!plainWords[i])
        {
            deallocateWords(plainWords, i + 1);
            deallocateWords(cryptedWords, i + 1);
            return false;
        }
        strcpy(plainWords[i], buffer);

        std::cin >> buffer;

        cryptedWords[i] = new (std::nothrow) char[strlen(buffer) + 1];
        if (!cryptedWords[i])
        {
            deallocateWords(plainWords, i + 1);
            deallocateWords(cryptedWords, i + 1);
            return false;
        }
        strcpy(cryptedWords[i], buffer);
    }

    return true;
}

void deallocateWords(char** words, std::size_t n)
{
    for (std::size_t i = 0; i < n; ++i)
    {
        delete[] words[i];
    }

    delete[] words;
}

char* readText(std::size_t& m)
{
    std::cin >> m;
    std::cin.ignore();

    char* text = new (std::nothrow) char[m + 1];
    if (!text)
    {
        return nullptr;
    }

    for (std::size_t i = 0; i < m; ++i)
    {
        text[i] = std::cin.get();
    }
    text[m] = '\0';

    return text;
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
    return (ch >= 'a' && ch <= 'z')
        || (ch >= 'A' && ch <= 'Z');
}

bool strCmpCaseInsesitive(const char* word1, const char* word2)
{
    while (*word1)
    {
        if (toLower(*word1) != toLower(*word2))
        {
            return false;
        }

        ++word1;
        ++word2;
    }

    return !(*word2);
}

bool getSizeDifference(char** plainWords, char** cryptedWords, std::size_t n, char* text, std::size_t m, int& sizeDifference)
{
    char* startWord;

    sizeDifference = 0;


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

        startWord = text;
        while (isLetter(*text))
        {
            ++text;
        }

        std::size_t currentSize = text - startWord;

        char* currentWord = new (std::nothrow) char[currentSize + 1];
        char* beginning = currentWord;
        if (!currentWord)
        {
            return false;
        }

        while (startWord < text)
        {
            *currentWord = *startWord;
            ++startWord;
            ++currentWord;
        }
        *currentWord= '\0';
        currentWord = beginning;

        char* cryptedWord = findInDictionary(currentWord, plainWords, cryptedWords, n);
        if (cryptedWord)
        {
            sizeDifference += (strlen(cryptedWord) - strlen(currentWord));
        }

        delete[] currentWord;
    }

    return true;
}

char* findInDictionary(char* word, char** plainWords, char** cryptedWords, std::size_t n)
{
    for (std::size_t i = 0; i < n; ++i)
    {
        if (strCmpCaseInsesitive(word, plainWords[i]))
        {
            return cryptedWords[i];
        }
    }

    return nullptr;
}

char* translate(char** plainWords, char** cryptedWords, std::size_t n, char* text, std::size_t m, int sizeDifference)
{
    char* newText = new (std::nothrow) char[m + sizeDifference + 1];
    char* result = newText;
    if (!newText)
    {
        return nullptr;
    }

    char* startWord;

    while (*text)
    {
        while (*text && !isLetter(*text))
        {
            *newText = *text;
            ++text;
            ++newText;
        }

        if (!(*text))
        {
            break;
        }

        startWord = text;
        while (isLetter(*text))
        {
            ++text;
        }

        std::size_t currentSize = text - startWord;

        char* currentWord = new (std::nothrow) char[currentSize + 1];
        char* beginning = currentWord;
        if (!currentWord)
        {
            delete[] newText;
            return nullptr;
        }

        while (startWord < text)
        {
            *currentWord = *startWord;
            ++startWord;
            ++currentWord;
        }
        *currentWord= '\0';
        currentWord = beginning;

        char* cryptedWord = findInDictionary(currentWord, plainWords, cryptedWords, n);
        if (cryptedWord)
        {
            while (*cryptedWord)
            {
                *newText = *cryptedWord;
                ++newText;
                ++cryptedWord;
            }
        }
        else
        {
            while (*currentWord)
            {
                *newText = *currentWord;
                ++newText;
                ++currentWord;
            }
            currentWord = beginning;
        }

        delete[] currentWord;
    }

    return result;
}