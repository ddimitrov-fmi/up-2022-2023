#include <iostream>
#include <cmath>

const double EPS = 0.00001;

int main ()
{
    double x, y;

    std::cin >> x >> y;

    if (std::fabs(x) < EPS && std::fabs(y) < EPS) 
    {
        std::cout << "Center" << std::endl;
    }
    else if (std::fabs(x) < EPS)
    {
        std::cout << "Ordinate" << std::endl;
    }
    else if (std::fabs(y) < EPS)
    {
        std::cout << "Abscissa" << std::endl;
    }
    else if (x > 0 && y > 0)
    {
        std::cout << "1 Quadrant" << std::endl;
    }
    else if (x < 0 && y > 0)
    {
        std::cout << "2 Quadrant" << std::endl;
    }
    else if (x < 0 && y < 0)
    {
        std::cout << "3 Quadrant" << std::endl;
    }
    else
    {
        std::cout << "4 Quadrant" << std::endl;
    }

    return 0;
}