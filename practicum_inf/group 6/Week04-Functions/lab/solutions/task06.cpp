#include <iostream>

bool isDateValid(unsigned int day, unsigned int month, unsigned int year);

bool isYearValid(unsigned int year);

bool isMonthValid(unsigned int month);

bool isDayValid(unsigned int day, unsigned int month, unsigned int year);

bool isYearLeap(unsigned int year);

int getDigitsSum(unsigned int number);

bool isPrime(unsigned int number);

bool isLucky(unsigned int day, unsigned int month, unsigned int year);

int main ()
{
    unsigned int day, month, year;

    std::cin >> day >> month >> year;

    if (!isDateValid(day, month, year))
    {
        std::cout << "Invalid date!" << std::endl;
        return 1;
    }

    std::cout << (isLucky(day, month, year) ? "Lucky" : "Not lucky") << std::endl;

    return 0;
}

bool isDateValid(unsigned int day, unsigned int month, unsigned int year)
{
    return isYearValid(year) && isMonthValid(month) 
            && isDayValid(day, month, year);
}

bool isYearValid(unsigned int year)
{
    return year <= 2022;
}

bool isMonthValid(unsigned int month)
{
    return month >= 1 && month <= 12;
}

bool isYearLeap(unsigned int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

bool isDayValid(unsigned int day, unsigned int month, unsigned int year)
{
    int maxDaysForFebruary = 28 + isYearLeap(year);
    bool result;

    if (day == 0) 
    {
        return false;
    }

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        result = day < 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        result = day < 30;
        break;
    case 2:
        result = day < 28 + isYearLeap(year);
        break;
    }

    return result;
}

int getDigitsSum(unsigned int number)
{
    int sum = 0;

    while (number)
    {
        sum += (number % 10);
        number /= 10;
    }

    return sum;
}

bool isPrime(unsigned int number)
{
    if (number == 1 || number % 2 == 0)
    {
        return false;
    }

    int countOfDivisors = 0;
    for (std::size_t i = 3; i * i <= number; i += 2)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

bool isLucky(unsigned int day, unsigned int month, unsigned int year)
{
    return isPrime(getDigitsSum(day) + getDigitsSum(month) + getDigitsSum(year));
}