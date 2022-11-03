#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int size;

    cout << "Size: ";
    cin >> size;

    for (int i = 0; i < size; ++i)
    {
        cout << "* ";
    }
    cout << '\n';

    for (int i = 1; i < size; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << "* ";
        }
        for (int j = size - i - 1; j > 0; --j)
        {
            cout << "  ";
        }
        cout << "*\n";
    }

    return 0;
}