#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned int a, b;
    do
    {
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
    } while (a < 0 || a > b);

    int lastDigit, remainingNumber;

    for (int i = a; i <= b; i++)
    {
        lastDigit = i % 10;
        remainingNumber = i / 10;

        while (remainingNumber != 0 && lastDigit >= remainingNumber % 10)
        {
            lastDigit = remainingNumber % 10;
            remainingNumber /= 10;
        }

        if (remainingNumber == 0)
        {
            cout << i << ' ';
        }
    }
    return 0;
}