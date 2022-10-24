#include <iostream>

const unsigned int MIN_MONTH = 1;
const unsigned int MAX_MONTH = 12;

int main ()
{
    unsigned int monthOfTheYear;

    std::cout << "Enter a month of the year (1 - 12): ";
    std::cin >> monthOfTheYear;

    if (monthOfTheYear < MIN_MONTH || monthOfTheYear > MAX_MONTH)
    {
        std::cout << "Invalid month" << std::endl;
        return 1;
    }

    unsigned daysOfTheMonth;

    switch (monthOfTheYear)
    {
    case 2:
        daysOfTheMonth = 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        daysOfTheMonth = 30;
        break;
    default:
        daysOfTheMonth = 31;
        break;
    }

    std::cout << "This month has " << daysOfTheMonth << " days" << std::endl;

    return 0;
}