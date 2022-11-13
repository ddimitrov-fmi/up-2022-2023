#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void a();
void b();
void c();

int main()
{
    a();
    return 0;
}

void a()
{
    cout << "Enter a\n";
    b();
    cout << "Exit a\n";
}

void b()
{
    cout << "Enter b\n";
    c();
    cout << "Exit b\n";
}

void c()
{
    cout << "Best wishes from c <3\n";
}