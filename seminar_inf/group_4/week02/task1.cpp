#include <cmath>
#include <iostream>

int main(int argc, char** argv)
{
    double a, b, c;
    std::cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0
        || a + b < c || b + c < a || c + a < b) {
        std::cout << "Invalid argument!" << std::endl;
        // return 1;
    } else {
        double p = a + b + c;
        double halfPerimeter = p / 2;

        double surface = sqrt(halfPerimeter * (halfPerimeter - a) * (halfPerimeter - b) * (halfPerimeter - c));

        std::cout << p << " " << surface << std::endl;
    }

    return 0;
}
