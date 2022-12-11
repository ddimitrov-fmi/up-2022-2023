#include <iostream>

const std::size_t MAX_CAPACITY = 2049;

const std::size_t NUMBER_Of_DIGITS = 10;

void countDigits(const char string[], std::size_t counter[]);

int main ()
{
    char firstRowOfDigits[MAX_CAPACITY], secondRowOfDigits[MAX_CAPACITY];
    std::size_t counterOfDigits1[NUMBER_Of_DIGITS] = {}, counterOfDigits2[NUMBER_Of_DIGITS] = {};
    std::size_t counter[NUMBER_Of_DIGITS] = {};
    char result[MAX_CAPACITY];
    std::size_t countElements = 0;

    std::cin >> firstRowOfDigits >> secondRowOfDigits;

    countDigits(firstRowOfDigits, counterOfDigits1);
    countDigits(secondRowOfDigits, counterOfDigits2);

    for (std::size_t i = 0; i < NUMBER_Of_DIGITS; ++i)
    {
        counter[i] = (counterOfDigits1[i] < counterOfDigits2[i]) ? counterOfDigits1[i] : counterOfDigits2[i];
    }

    for (int i = NUMBER_Of_DIGITS - 1; i >= 0; --i)
    {
        for (std::size_t j = 0; j < counter[i]; ++j)
        {
            result[countElements++] = '0' + i;
        }
    }
    result[countElements] = '\0';

    std::cout << result << std::endl;

    return 0;
}

void countDigits(const char string[], std::size_t counter[])
{
    for (std::size_t i = 0; string[i] != '\0'; ++i)
    {
        ++counter[string[i] - '0'];
    }
}
