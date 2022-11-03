#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int size;
    char ch;

    cout << "Size: ";
    cin >> size;

    cout << "Character: ";
    cin >> ch;

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout << ch << ' ';
        }
        cout << endl;
    }

    return 0;
}