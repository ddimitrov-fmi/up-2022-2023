#include <iostream>
using std::cin;
using std::cout;
using std::endl;

char toUpper(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch - ('a' - 'A');

    return ch;
}

void toUpper(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = toUpper(str[i]);
        ++i;
    }
}

int main()
{
    const int MAX_STRLEN = 128;
    char str[MAX_STRLEN];

    cin.getline(str, MAX_STRLEN);

    toUpper( str );
    cout << str << '\n';
}