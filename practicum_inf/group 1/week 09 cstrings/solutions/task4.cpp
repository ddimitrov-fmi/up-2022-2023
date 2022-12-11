#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void toUpper(char &ch)
{
    if (ch >= 'a' && ch <= 'z')
        ch = ch - 'a' + 'A';
}

bool isLetter(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

void wordToUpper(char str[])
{
    bool inWord = false;
    while (*str)
    {
        if (!isLetter(*str)) // is not a letter
        {
            inWord = false;
        }
        else if (!inWord) // is a letter
        {
            inWord = true;
            toUpper(*str);
        }

        ++str;
    }
}

int main()
{
    const int MAX_STRLEN = 128;
    char str[MAX_STRLEN];

    cin.getline(str, MAX_STRLEN);

    wordToUpper(str);
    cout << str << '\n';
}