#include <iostream>

void swap(int *a, int *b)
{
    std::cout << "Pointers!" << std::endl;
    // nullptr?
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int &a, int &b)
{
    std::cout << "Reference (alias)!" << std::endl;
    int temp = a;
    a = b;
    b = temp;
}

int main(int argc, char **argv)
{
    int one = 5;
    int two = 6;

    swap(&one, &two);
    swap(one, two);

    std::cout << one << two << std::endl;

    int a = 5;
    int *ptr1 = &a;
    double b = a;
    int &konche = a;

    return 0;
}
