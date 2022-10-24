#include <iostream>

int main ()
{
    char e = ' ', c = '*', n = '\n';

    std::cout << e << e << e << e << c << e << e << e << e << n;
    std::cout << e << e << e << c << c << c << e << e << e << n;
    std::cout << e << e << c << c << c << c << c << e << e << n;
    std::cout << e << c << c << c << c << c << c << c << e << n;
    std::cout << c << c << c << c << c << c << c << c << c << n;

    return 0;
}