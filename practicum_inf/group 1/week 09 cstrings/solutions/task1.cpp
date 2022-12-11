#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void changeAllOccurences(char str[], char oldCh, char newCh)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == oldCh) {
            str[i] = newCh;
        }
        ++i;
    }
}
int main()
{
    char str[] = "a*b*c*d";
    char c1 = '*';
    char c2 = '1';
    changeAllOccurences(str, c1, c2);// str = "a1b1c1d"
    cout << str << '\n';
}