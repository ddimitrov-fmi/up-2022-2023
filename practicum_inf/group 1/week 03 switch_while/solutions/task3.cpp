#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int number, temp;
    int digitsCount = 0;

    cout << "Number: ";
    cin >> number;
    temp = number;

    while (temp > 0)
    {
        ++digitsCount;
        temp /= 10;
    }

    cout << "The number of digits of " << number
         << " is " << digitsCount << endl;
}