#include <iostream>


int square(int n)
{
    std::cout << "int" << std::endl;
    return n*n;
}

double square(double n)
{
    std::cout << "double" << std::endl;
    return n*n;
}

int main(int argc, char **argv)
{
    std::cout << square(3.5) << std::endl;
    std::cout << square(3) << std::endl;
    return 0;
}
