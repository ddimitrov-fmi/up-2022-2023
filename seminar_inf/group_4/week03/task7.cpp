#include <iostream>

int main(int argc, char** argv)
{
    int number;
    std::cin >> number;
    bool isPowerOf2 = true;

    if (number == 0) {
        isPowerOf2 = false;
    }

    while (number > 0) // <=> while (number)
    {
        if (number % 2 != 0 && number != 1)
        {
            isPowerOf2 = false;
        }
        number = number / 2; // <=> number /= 2;
    }

    // if(isPowerOf2)
    // {
    //     std::cout << "Yes"<< std::endl;
    // }
    // else
    // {
    //     std::cout << "no" << std::endl;
    // }

    std::cout << (isPowerOf2 ? "YES" : "NO") << std::endl;

    return 0;
}
