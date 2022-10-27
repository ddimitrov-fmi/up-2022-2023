#include <iostream>

int main ()
{
    std::cout << std::boolalpha << (5 == 5) << std::endl;
    std::cout << std::boolalpha << (7 != 5) << std::endl;
    std::cout << std::boolalpha << (6 > 5) << std::endl;
    std::cout << std::boolalpha << (3 < 5) << std::endl;
    std::cout << std::boolalpha << (6 >= 5) << std::endl;
    std::cout << std::boolalpha << (5 <= 5) << std::endl;

    int a = 5, b;
    std::cout << std::boolalpha << ((b = 5) == 5) << std::endl;

    return 0;
}