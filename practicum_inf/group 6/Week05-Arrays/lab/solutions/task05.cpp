#include <iostream>
#include <cmath>

const std::size_t MAX_CAPACITY = 100;
const double EPS = 0.000001;

void input(double array[], std::size_t size);

bool areEqual(double number1, double number2);

double findMin(const double array[], std::size_t size);

std::size_t getElementsEqualTo(const double array[], std::size_t size, double number);

int main ()
{
    std::size_t n;
    double array[MAX_CAPACITY];

    std::cin >> n;

    input(array, n);

    double minNumber = findMin(array, n);

    std::cout << getElementsEqualTo(array, n, minNumber) << std::endl;

    return 0;
}

void input(double array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

bool areEqual(double number1, double number2)
{
    return std::fabs(number1 - number2) < EPS;
}

double findMin(const double array[], std::size_t size)
{
    std::size_t minIndex = 0;

    for (std::size_t i = 1; i < size; ++i)
    {
        if (array[i] < array[minIndex])
        {
            minIndex = i;
        }
    }

    return array[minIndex];
}

std::size_t getElementsEqualTo(const double array[], std::size_t size, double number)
{
    std::size_t counter = 0;

    for (std::size_t i = 0; i < size; ++i)
    {
        if (areEqual(array[i], number))
        {
            ++counter;
        }
    }

    return counter;
}