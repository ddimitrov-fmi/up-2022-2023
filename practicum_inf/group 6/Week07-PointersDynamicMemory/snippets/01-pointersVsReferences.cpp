#include <iostream>

int main ()
{
    int a = 5;
    int& aRef = a;

    std::cout << a << " " << aRef << std::endl;

    a = 6;
    std::cout << a << " " << aRef << std::endl; 

    aRef = 7;
    std::cout << a << " " << aRef << std::endl; 

    int* aPtr = &a;

    std::cout << a << " " << aRef << " " << *aPtr << std::endl;

    a = 10;
    std::cout << a << " " << aRef << " " << *aPtr << std::endl;

    *aPtr = 12;
    std::cout << a << " " << aRef << " " << *aPtr << std::endl;

    // int& myRef = NULL;
    int* myPtr = nullptr;

    myPtr = &a;

    return 0;
}