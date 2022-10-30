#include <iostream>
#include <cmath>

const double EPS = 0.00001;

int main ()
{
    // quadric equation (a*x^2 + b*x + c = 0)

    double a, b, c;

    // double test1 = 5.22, test2 = (4.9 + 0.32);

    // std::cout << std::boolalpha << (test1 == test2) << std::endl;
    // std::cout << std::boolalpha << (std::fabs(test1 - test2) < EPS) << std::endl;

    std::cin >> a >> b >> c;

    if (std::fabs(a) < EPS) // 'a' equals 0, so the equation is linear (b*x + c = 0)
    {
        if (std::fabs(b) < EPS) // the equation looks like (c = 0)
        {
            if (std::fabs(c) < EPS)
            {
                std::cout << "All real numbers are solutions" << std::endl;
            }
            else 
            {
                std::cout << "There isn't a solution" << std::endl;
            }
        }
        else
        {
            double root = -c / b;

            std::cout << "x = " << root << std::endl;
        }
    }
    else // 'a' isn't 0, so the equation is quadric
    {
        double discriminant = b*b - 4*a*c;

        if (std::fabs(discriminant) < EPS) // equals 0
        {
            double root = -b / (2*a);

            std::cout << "x = " << root << std::endl;
        }
        else if (discriminant > 0)
        {
            double firstRoot, secondRoot;

            firstRoot = (-b + std::sqrt(discriminant)) / (2*a);
            secondRoot = (-b - std::sqrt(discriminant)) / (2*a);
        
            std::cout << "x1 = " << firstRoot << std::endl;
            std::cout << "x2 = " << secondRoot << std::endl;
        }
        else
        {
            std::cout << "There aren't any real roots!" << std::endl;
        }
    }

    return 0;
}