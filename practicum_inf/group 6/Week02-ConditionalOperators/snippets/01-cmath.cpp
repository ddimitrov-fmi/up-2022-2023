#include <iostream>
#include <cmath>

int main ()
{
    double a = 5.86;

    std::cout << "Floor: " << std::floor(a) << std::endl; // the first smaller whole number
    std::cout << "Ceil: " << std::ceil(a) << std::endl; // the first bigger whole number

    // absolute value
    int b = -3;
    double c = -2.33;

    std::cout << abs(-3) << std::endl;
    std::cout << fabs(-2.33) << std::endl;   

    // power
    std::cout << std::pow(2, 10) << std::endl; // 2^10 = 1024

    // sqrt
    std::cout << std::sqrt(64) << std::endl;
    std::cout << std::sqrt(1.44) << std::endl;

    // A lot of other functions, such as std::log, std::sin, std::cos, etc.
    // Documentation: https://cplusplus.com/reference/cmath/

    return 0;
}