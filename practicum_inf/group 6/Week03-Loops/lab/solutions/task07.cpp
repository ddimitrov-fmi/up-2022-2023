#include <iostream>


int main()
{
    int num;
    std::cin >> num;
    
    int reversed = 0, copyNum = num;
    while (copyNum)
    {
        reversed *= 10;
        reversed += copyNum % 10;
        copyNum /= 10;
    }
    
    if (num == reversed)
    {
        std::cout << "Valid\n";
    }
    else
    {
        std::cout << "Invalid\n";
    }

    return 0;
}