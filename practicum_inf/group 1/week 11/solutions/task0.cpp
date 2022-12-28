#include <iostream>
using std::cout;
using std::endl;

size_t fact(size_t number)
{
    if (number == 0) {
        return 1;
    }
    return number * fact(number - 1);
}

int main()
{
    int n = 7;
    cout << n << "! = " << fact(n) << endl;
}