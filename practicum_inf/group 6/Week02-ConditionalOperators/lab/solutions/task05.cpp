#include <iostream>

const unsigned int MIN_VALID_NUMBER = 1;
const unsigned int MAX_VALID_NUMBER = 3000;

int main ()
{
    unsigned int number;

    std::cin >> number;

    if (number < MIN_VALID_NUMBER || number > MAX_VALID_NUMBER)
    {
        std::cout << "Invalid input" << std::endl;
        return 1;
    }

    unsigned int thousands = number / 1000;
    unsigned int hundreds = number / 100 % 10;
    unsigned int tens = number / 10 % 10;
    unsigned int ones = number % 10;

    switch (thousands)
    {
    case 1:
        std::cout << "M";
        break;

    case 2:
        std::cout << "MM";
        break;

    case 3:
        std::cout << "MMM";
        break;
    }

    switch (hundreds)
    {
    case 1:
        std::cout << "C";
        break;

    case 2:
        std::cout << "CC";
        break;

    case 3:
        std::cout << "CCC";
        break;

    case 4:
        std::cout << "CD";
        break;

    case 5:
        std::cout << "D";
        break;

    case 6:
        std::cout << "DC";
        break;

    case 7:
        std::cout << "DCC";
        break;

    case 8:
        std::cout << "DCC";
        break;

    case 9:
        std::cout << "CM";
        break;
    }

    switch (tens)
    {
    case 1:
        std::cout << "X";
        break;

    case 2:
        std::cout << "XX";
        break;

    case 3:
        std::cout << "XXX";
        break;

    case 4:
        std::cout << "XL";
        break;

    case 5:
        std::cout << "L";
        break;

    case 6:
        std::cout << "LX";
        break;

    case 7:
        std::cout << "LXX";
        break;

    case 8:
        std::cout << "LXXX";
        break;

    case 9:
        std::cout << "XC";
        break;
    }

    switch (ones)
    {
    case 1:
        std::cout << "I";
        break;

    case 2:
        std::cout << "II";
        break;

    case 3:
        std::cout << "III";
        break;

    case 4:
        std::cout << "IV";
        break;

    case 5:
        std::cout << "V";
        break;

    case 6:
        std::cout << "VI";
        break;

    case 7:
        std::cout << "VII";
        break;

    case 8:
        std::cout << "VIII";
        break;

    case 9:
        std::cout << "IX";
        break;
    }

    std::cout << std::endl;

    return 0;
}