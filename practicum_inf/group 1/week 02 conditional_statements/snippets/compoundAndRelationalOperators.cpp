// C++ demonstration for operators +=, -=, ++, --, *=, %=, /=, <=, <, >, >=, ==, !=
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x = 1;
    int y = 2;

    cout << "x += 5 : " << (x += 5) << endl; // Must return the same as x = x + 5
    cout << "x -= 5 : " << (x -= 5) << endl; // Must return the same as x = x - 5
    cout << "x *= 5 : " << (x *= 5) << endl; // Must return the same as x = x * 5
    cout << "x /= 5 : " << (x /= 5) << endl; // Must return the same as x = x / 5
    cout << "y %= 2 : " << (y %= 2) << endl; // Must return the same as y = y % 2

    cout << "y++ : " << (y++) << endl;
    cout << "++y : " << (++y) << endl;
    cout << "--y : " << (--y) << endl;
    cout << "y-- : " << (y--) << endl;
    cout << "y = " << y << endl;

    cout << "3 <= 5 : " << (3 <= 5) << endl;
    cout << "3 >= 5 : " << (3 >= 5) << endl;
    cout << "3 < 5 : " << (3 < 5) << endl;
    cout << "3 > 5 : " << (3 > 5) << endl;
    cout << "3 == 5 : " << (3 == 5) << endl;
    cout << "3 != 5 : " << (3 <= 5) << endl;

    return 0;
}