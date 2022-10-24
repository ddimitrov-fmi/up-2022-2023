#include <iostream>

const int UPPER_TO_LOWER_DIFFERENCE = 'a' - 'A';

int main ()
{
    char capitalLetter;

    std::cout << "Enter capital letter: ";
    std::cin >> capitalLetter;

    char lowercaseLetter = capitalLetter + UPPER_TO_LOWER_DIFFERENCE;

    std::cout << "The corresponding lowercase letter is " << lowercaseLetter << std::endl;

    return 0;
}