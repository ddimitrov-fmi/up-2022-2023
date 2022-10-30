#include <iostream>

int main ()
{
    int n;

    do
    {
        std::cout << "Please, enter a positive number: ";
        std::cin >> n;
    } while (n <= 0);

    std::cout << "Great success! The positive number is: " << n << std::endl;

    return 0;
}