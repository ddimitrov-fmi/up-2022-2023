#include <iostream>

const unsigned int MIN_MONTH = 12;
const unsigned int MAX_MONTH = 12;

int main ()
{
    unsigned int month;

    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "January";
        break;

    case 2:
        std::cout << "Fabruary";
        break;

    case 3:
        std::cout << "March";
        break;

    case 4:
        std::cout << "April";
        break;

    case 5:
        std::cout << "May";
        break;

    case 6:
        std::cout << "June";
        break;

    case 7:
        std::cout << "July";
        break;

    case 8:
        std::cout << "August";
        break;

    case 9:
        std::cout << "September";
        break;

    case 10:
        std::cout << "October";
        break;

    case 11:
        std::cout << "November";
        break;

    case 12:
        std::cout << "December";
        break;
    
    default:
        std::cout << "Invalid input!" << std::endl;
        return 1;
    }

    std::cout << std::endl;

    return 0;
}