#include <iostream>

const std::size_t MIN_THREE_DIGIT_NUMBER = 100;
const std::size_t MAX_THREE_DIGIT_NUMBER = 999;

bool isThreeDigit(int number);

int* createArray(std::size_t size);

void readArray(int* array, std::size_t size);

int* getThreeDigitNumbers(const int* array, std::size_t size, std::size_t& resultSize);

void printArray(const int* array, std::size_t size);

int main ()
{
    std::size_t n;

    std::cin >> n;

    int* array = createArray(n);
    if (!array)
    {
        std::cout << "Memory problem!" << std::endl;
        return 1;
    }

    readArray(array, n);

    std::size_t resultSize = 0;
    int* threeDigitNumber = getThreeDigitNumbers(array, n, resultSize);
    if (!threeDigitNumber)
    {
        std::cout << "Memory problem!" << std::endl;
        delete[] array;
        return 1;
    }

    printArray(threeDigitNumber, resultSize);

    delete[] array;
    delete[] threeDigitNumber;

    return 0;
}

int* createArray(std::size_t size)
{
    int* result = new (std::nothrow) int[size];
    if (!result)
    {
        return nullptr;
    }

    return result;
}

void readArray(int* array, std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

bool isThreeDigit(int number)
{
    return number >= MIN_THREE_DIGIT_NUMBER
        && number <= MAX_THREE_DIGIT_NUMBER;
}

int* getThreeDigitNumbers(const int* array, std::size_t size, std::size_t& resultSize)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        if (isThreeDigit(array[i]))
        {
            ++resultSize;
        }
    }

    int* result = createArray(resultSize);
    if (!result)
    {
        return nullptr;
    }

    resultSize = 0;
    for (std::size_t i = 0; i < size; ++i)
    {
        if (isThreeDigit(array[i]))
        {
            result[resultSize++] = array[i];
        }
    }

    return result;
}

void printArray(const int* array, std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}