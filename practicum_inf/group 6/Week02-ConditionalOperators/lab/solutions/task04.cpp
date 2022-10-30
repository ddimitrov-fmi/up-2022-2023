#include <iostream>

const unsigned int MIN_FOUR_DIGIT_NUMBER = 1000;
const unsigned int MAX_FOUR_DIGIT_NUMBER = 9999;

int main ()
{   
    unsigned int number;

    std::cin >> number;

    if (number < MIN_FOUR_DIGIT_NUMBER || number > MAX_FOUR_DIGIT_NUMBER)
    {
        std::cout << "Invalid input" << std::endl;
        return 1;
    }

    unsigned int thousands = number / 1000;
    unsigned int hundreds = number / 100 % 10;
    unsigned int tens = number / 10 % 10;
    unsigned int ones = number % 10;

    bool isMirrorNumber = (thousands == ones && hundreds == tens);

    std::cout << "The number " << (isMirrorNumber ? "is" : "isn't") << " a mirror number" << std::endl;

    return 0;
}