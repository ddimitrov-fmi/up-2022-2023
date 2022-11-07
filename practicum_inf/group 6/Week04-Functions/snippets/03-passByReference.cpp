#include <iostream>

void swap(int& a, int& b);

int main ()
{
    int a = 3, b = 4;

    swap(a, b);

    std::cout << a << " " << b << std::endl;

    return 0;
}

void swap(int& a, int& b) // 3 4
{
    int temp = a; // temp = 3
    a = b; // a = 4
    b = temp; //b = 3
}