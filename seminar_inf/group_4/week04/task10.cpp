#include <iostream>

int main(int argc, char **argv)
{
    double x, y;
    std::cin >> x >> y;

    bool circle1 = ((x * x + y * y) <= 4) && y >= 0;
    bool circle2 = (x + 1) * (x + 1) + y * y <= 1;
    bool circle3 = (x - 1) * (x - 1) + y * y <= 1;

    bool result = (circle1 || circle2) && !circle3;

    return 0;
}
