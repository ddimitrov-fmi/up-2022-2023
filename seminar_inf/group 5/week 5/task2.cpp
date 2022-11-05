#include <iostream>
using namespace std;

int main()
{
    int prefix, number;
    cin >> prefix >> number;

    bool isPrefix = false;
    if (number >= prefix)
    {
        do
        {
            if (prefix == number)
            {
                isPrefix = true;
            }
            number /= 10;
        } while (number != 0 && !isPrefix);
    }
    cout << (isPrefix ? "m is a prefix of n" : "m isn't a prefix of n");
}
