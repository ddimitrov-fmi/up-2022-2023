#include <iostream>

int main ()
{
    int a = 5;
    a = a + 1;

    int b = 5;
    b = b + 1;

    int c = 5;
    c++;

    int d = 5;
    ++d;

    std::cout << a << " " << b << " " << c << " " << d << std::endl;

    int x1, y1, x2, y2;
    x1 = 3;
    y1 = ++x1;

    x2 = 3;
    y2 = x2++;

    std::cout << x1 << " " << y1 << std::endl;
    std::cout << x2 << " " << y2 << std::endl;

    // Similarly, these operators also exist: --x, x--

    return 0;
}