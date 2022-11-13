#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool isLower(char letter)
{
    return letter >= 'a' && letter <= 'z';
}

char lowerToCapital(char letter)
{
    return letter - 'a' + 'A';
}

int main()
{
    char letter;
    
    cout << "Letter: ";
    cin >> letter;

    if (isLower(letter))
    {
        cout << "Capital letter: " << lowerToCapital(letter);
    }
    else
    {
        cout << "Invalid input!";
    }
    return 0;
}