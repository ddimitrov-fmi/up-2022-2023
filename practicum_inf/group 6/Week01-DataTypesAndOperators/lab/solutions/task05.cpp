#include <iostream>

int main ()
{
    int number;

    std::cout << "Enter the 4-digit number: ";
    std::cin >> number;

    int ones = number % 10;
    int tens = number / 10 % 10;
    int hundreds = number / 100 % 10;
    int thousands = number / 1000;

    int sum = ones + tens + hundreds + thousands;
    int product = ones * tens * hundreds * thousands;

    std::cout << "The sum of the digits is " << sum << std::endl;
    std::cout << "The product of the digits is " << product << std::endl;

    return 0;
}