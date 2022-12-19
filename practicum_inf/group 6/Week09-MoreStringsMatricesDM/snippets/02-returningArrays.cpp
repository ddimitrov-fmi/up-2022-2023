#include <iostream>

char* getArray();

int main ()
{
    char* arr = getArray();
    char* arr2 = "Hello, World!";

    std::cout << std::boolalpha << (arr == arr2) << std::endl;


    //delete[] arr;

    return 0;
}

char* getArray()
{
    char* arr = "Hello, World!";
    return arr;
}