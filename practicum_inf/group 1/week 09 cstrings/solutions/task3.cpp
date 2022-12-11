#include <iostream>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;

int atoi(const char *str)
{
    int result = 0;
    bool isNegative = false;

    if (*str == '-')
    {
        isNegative = true;
        ++str;
    }

    while (*str) // same as while(*str != '\0')
    {
        result = result * 10 + (*str - '0');
        ++str;
    }

    return isNegative ? -result : result;
}

int main()
{
    const char *s = "123";
    int res = atoi(s);
    cout << res; // 123
}