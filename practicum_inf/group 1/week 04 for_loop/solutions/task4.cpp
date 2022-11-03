#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    size_t number;
    cout << "number: ";
    cin >> number;

    bool isWithSameDigits = true;
    int digit = number % 10;
    number /= 10;

    while (number != 0)
    {
        if (number % 10 != digit)
        {
            isWithSameDigits = false;
            break;
        }
        number /= 10;
    }

    cout << (isWithSameDigits ? "Yes" : "No") << endl;
    return 0;
}