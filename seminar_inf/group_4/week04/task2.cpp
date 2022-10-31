#include <iostream>

int main(int argc, char **argv)
{
    int number;
    std::cin >> number;

    int sum = 0; // Или тук double
    int count = 0;

    while (number != 0)
    {
        sum += number % 10;
        count++; // count = count + 1;
        number /= 10;
    }
    std::cout << sum * 1.0 / count << std::endl; // Или тук 1.0;
    return 0;
}
