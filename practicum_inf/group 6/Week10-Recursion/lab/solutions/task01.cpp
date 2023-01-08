#include <iostream>

unsigned int toBinary(unsigned int decimal);

int main ()
{
    std::cout << toBinary(2)<< std::endl;
    std::cout << toBinary(7)<< std::endl;

    return 0;
}

unsigned int toBinary(unsigned int decimal)
{
    if (decimal == 0)
    {
        return 0;
    }

    return decimal % 2 + 10 * toBinary(decimal / 2);
}