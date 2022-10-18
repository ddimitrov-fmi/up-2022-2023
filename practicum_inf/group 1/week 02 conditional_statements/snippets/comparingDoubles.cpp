#include <iostream>
#include <cmath>
#include <iomanip>
using std::cout;
using std::endl;
using std::fixed;

/*
To compare doubles we create a constant EPS with small enough value.
If the difference between two numbers is less than EPS we consider them equal.
*/

int main()
{
    const double EPS = 0.00001;
    double x = 5;
    double y = std::sqrt(x);
    y = y * y;

    cout << "x == y: " << (x == y) << endl;   // false
    cout << (std::fabs(x - y) < EPS) << endl; // true
    cout << (x == x) << endl;                 // true

    return 0;
}