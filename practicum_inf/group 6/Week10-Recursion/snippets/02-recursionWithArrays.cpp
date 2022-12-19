#include <iostream>

int getProcuct(const int* arr, std::size_t n);

void printStr(const char* str);

int main ()
{

    int arr[] = {1, 2, 3, 4, 5};
    std::cout << getProcuct(arr, 5) << std::endl;

    printStr("Bravo, Lyubo");

    return 0;
}

int getProcuct(const int* arr, std::size_t n)
{
    if (n == 0)
    {
        return 1; 
    }

    return *arr * getProcuct(arr + 1, n - 1);
}

void printStr(const char* str)
{
    if (!*str)
    {
        std::cout << std::endl;
        return;
    }

    std::cout << *str;
    printStr(str + 1);
}