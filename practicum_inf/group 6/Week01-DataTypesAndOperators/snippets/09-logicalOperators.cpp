#include <iostream>

int main ()
{
    bool a = ((5 < 7) && (5 >= 2));
    bool b = ((4 > 6) || (1 == 1));

    std::cout << std::boolalpha << a << " " << b << std::endl;

    bool c = (!(2 >= 3) && (8 < 10));

    std::cout << std::boolalpha << c << std::endl; 

    return 0;
}