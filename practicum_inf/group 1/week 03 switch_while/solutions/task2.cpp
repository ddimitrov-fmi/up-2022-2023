#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned int level;
    cout << "Level: ";
    cin >> level;

    if (level >= 19)
    {
        cout << "You are the strongest!\n";
    }
    else
    {
        switch (level)
        {
        case 19:
            cout << "You are stronger than Pavel\n";

        case 18: case 17:
            cout << "You are stronger than Peter\n";

        case 16: case 15: case 14:
            cout << "You are stronger than Stella\n";

        case 13:
            cout << "You are stronger than Ivan\n";

        case 12:
            cout << "You are stronger than Maria\n";

        case 11: case 10:
            cout << "You are stronger than Anna\n";
            break;
            
        default:
            cout << "You are the weakest ;(\n";
        }
    }

    return 0;
}