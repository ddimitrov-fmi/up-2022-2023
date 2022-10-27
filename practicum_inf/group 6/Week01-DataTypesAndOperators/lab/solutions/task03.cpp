#include <iostream>

int main ()
{
    double a, b, c;

    std::cout << "Enter the first number: ";
    std::cin >> a;

    std::cout << "Enter the second number: ";
    std::cin >> b;

    std::cout << "Enter the third number: ";
    std::cin >> c;

    double average = (a + b + c) / 3.0;

    std::cout << "The average of the three numbers is " << average << std::endl;

    return 0;
}