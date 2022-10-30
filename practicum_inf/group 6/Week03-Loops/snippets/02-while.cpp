#include <iostream>
#include <cstddef>

const std::size_t MAX_LETTERS = 10;

int main ()
{
    char ch;
    std::cin >> ch;

    std::size_t lettersPrinted = 0;

    while (ch <= 'z' && lettersPrinted <= MAX_LETTERS)
    {
        std::cout << ch << " ";
        ++ch;
        ++lettersPrinted;
    }
    std::cout << std::endl;

    return 0;
}