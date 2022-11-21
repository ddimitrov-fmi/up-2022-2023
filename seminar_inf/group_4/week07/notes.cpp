#include <iostream>

int main(int argc, char **argv)
{
    int a = 5;
    int b = 6;
    int *ptr1 = &a;
    int *ptr2 = &b;

    std::cout << std::boolalpha << (*ptr1 < *ptr2) << std::endl;
    // char *ptr2 = nullptr;

    // std::cout << *ptr2 << std::endl;

    int *const ptr1 = &a;
    //ptr1 = nullptr;
    int const *ptr2 = &b;
    const int *ptr3 = &b;

    return 0;
}
