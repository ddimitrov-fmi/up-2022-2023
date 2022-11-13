#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int pow(int base, unsigned int exponent = 2);
double pow(double base, unsigned int exponent = 2);

int main()
{
    cout << pow(2) << endl;
    cout << pow(10, 4) << endl;
    cout << pow(0.5, 3) << endl;
    return 0;
}

int pow(int base, unsigned int exponent)
{
    int result = 1;

    for (int i = 0; i < exponent; ++i)
    {
        result *= base;
    }

    return result;
}

double pow(double base, unsigned int exponent)
{
    double result = 1.0;

    for (int i = 0; i < exponent; ++i)
    {
        result *= base;
    }

    return result;
}