#include <iostream>

void changeSign(int& number);

int main ()
{
    int a = 2, b = -3;
    changeSign(a);
    changeSign(b);

    std::cout << a << " " << b << std::endl; // -2 3

    return 0;
}

void changeSign(int& number)
{
    number *= -1;
}