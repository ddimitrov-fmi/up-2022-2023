#include <iostream>

const double PI = 3.14;

int main ()
{
    double radius;

    std::cout << "Enter the radius: ";
    std::cin >> radius;

    double circumference = 2 * PI * radius;
    double area = PI * radius * radius; // you can also use the 'std::pow' function in the <cmath> library, but this one is faster

    std::cout << "Circumference: " << circumference << std::endl;
    std::cout << "Area: " << area << std::endl;

    return 0;
}