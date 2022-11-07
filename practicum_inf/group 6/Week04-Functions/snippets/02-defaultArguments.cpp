#include <iostream>

int input(int min = 0, int max = 100);

int main ()
{
    input(5, 15); // calls input(5, 15)
    input(10); // calls input(10, 100)
    input(); // calls input(0, 100)

    return 0;
}

int input(int min, int max)
{
    int n;

    do 
    {
        std::cout << "Enter a number between " << min << " and " << max << ": ";
        std::cin >> n;
    } while (n < min || n > max);

    return n;
}