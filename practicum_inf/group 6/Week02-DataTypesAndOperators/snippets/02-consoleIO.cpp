#include <iostream>

int main ()
{
    std::cout << "Hello, World!" << std::endl; // prints "Hello, World!" to the console

    int a;
    std::cout << "Enter a value for 'a': ";
    std::cin >> a;
    std::cout << "The value of 'a' is: " << a << '\n';

    // std::endl and the symbol '\n' both insert a new line

    return 0;
}