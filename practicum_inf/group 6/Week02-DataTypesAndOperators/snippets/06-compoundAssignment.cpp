#include <iostream>

int main ()
{
    int a = 5;
    a = a + 10;

    int b = 5;
    b += 10;

    std::cout << a << " " << b << std::endl;

    // Similarly, these operators also exist: -=, *=, /=, %=

    return 0;
}