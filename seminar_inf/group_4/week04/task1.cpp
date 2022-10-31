#include <iostream>

int main(int argc, char **argv)
{
    bool hasOne = false;
    int number;
    std::cin >> number;

    while (number > 0)
    {
        if (number % 10 == 1)
        {
            hasOne = true;
            break;
        }

        number /= 10;
    }

    std::cout << hasOne << std::endl;

    return 0;
}
