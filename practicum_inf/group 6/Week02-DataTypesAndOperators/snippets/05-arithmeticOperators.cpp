#include <iostream>

int main ()
{
    int a = 14, b = 4;

    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;
    std::cout << a % b << std::endl; // modulo

    double c = 14, d = 4;

    std::cout << c / d << std::endl;
    std::cout << a / d << std::endl;
    std::cout << c / b << std::endl;
    
    return 0;
}