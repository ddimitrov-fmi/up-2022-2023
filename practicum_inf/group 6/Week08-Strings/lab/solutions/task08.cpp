#include <iostream>
#include <cstring>

const std::size_t MAX_CAPACITY = 2049;

void rleEncode(char text[]);

std::size_t reverseNumber(std::size_t number);

std::size_t countOfEqualLettersFrom(const char text[], std::size_t from);

int main ()
{
    char text[MAX_CAPACITY];

    std::cin >> text;

    rleEncode(text);

    std::cout << text << std::endl;

    return 0;
}

void rleEncode(char text[])
{
    std::size_t originalIndex = 0, newIndex = 0;

    while (text[originalIndex] != '\0')
    {
        std::size_t currentCount = countOfEqualLettersFrom(text, originalIndex);
        char currentCh = text[originalIndex];
        if (currentCount >= 4)
        {
            std::size_t initialIndex = newIndex;

            text[newIndex++] = '(';

            std::size_t reversedNumber = reverseNumber(currentCount);
            while (reversedNumber)
            {
                text[newIndex++] = '0' + (reversedNumber % 10);
                reversedNumber /= 10;
            }

            std::size_t temp = currentCount;
            while (temp % 10 == 0)
            {
                text[newIndex++] = '0';
                temp /= 10;
            }

            text[newIndex++] = currentCh;
            
            text[newIndex++] = ')';

            originalIndex += currentCount;
        }
        else
        {
            text[newIndex++] = currentCh;
            ++originalIndex;
        }
    }

    text[newIndex] = '\0';
}

std::size_t countOfEqualLettersFrom(const char text[], std::size_t from)
{
    std::size_t counter = 1;
    char ch = text[from];

    ++from;
    while (text[from] != '\0' && text[from] == ch)
    {
        ++counter;
        ++from;
    }

    return counter;
}

std::size_t reverseNumber(std::size_t number)
{
    std::size_t result = 0;

    while (number)
    {
        result *= 10;
        result += number % 10;
        number /= 10;
    }

    return result;
}