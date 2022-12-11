#include <iostream>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;

void swap(char& ch1, char& ch2)
{
    char tmp = ch1;
    ch1 = ch2;
    ch2 = tmp;
}

void reverse(char str[])
{
    int length = strlen(str);
    int middle = length / 2;

    for (size_t i = 0; i < middle; i++)
    {
        swap(str[i], str[length - i - 1]);
    }
}

int main()
{
    const int MAX_STRLEN = 128;
    char str[MAX_STRLEN];

    cin.getline(str, MAX_STRLEN);

    reverse(str);
    cout << str << '\n';
}